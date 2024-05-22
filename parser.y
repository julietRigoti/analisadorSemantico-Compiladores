%{
    #include "hashTable.h"
	#include "tree.h"
	#include "y.tab.h"

	extern int yylex();
	extern int flag;
	extern HashTable *H, *HT;
    extern FILE *yyin;
	extern FILE *yyout;
	extern char* yytext; 

	struct node* no;
	void yyerror();
	int flagError = 0;
%}

%union {
		struct {
			char name[MAX*2]; //
			int type;
			int category;
			char valueInt[MAX*2];
			char valueDouble[MAX*2];
			struct node* tr; 
		} obj;
}

%token <obj> SUB SUM MULT DIV ASSIGMENT COMPARATOR INCR DECR
%token <obj> AND OR NOT 
%token <obj> INT CHAR VOID FLOAT DOUBLE 
%token <obj> INTEGER REAL STR 
%token <obj> O_KEY O_BRAC O_PAR C_PAR C_BRAC C_KEY O_COMENT C_COMENT SEMICOLON COMMA INCLUDE PRINTF SCANF RETURN
%token <obj> WHILE FOR IF ELSE 
%token <obj> ID  

%left MULT DIV  
%left SUB SUM 
%left COMPARATOR 
%right ASSIGMENT 

%type <obj> program headers dataType opLogical opINCorDEC NUMorEMP PRorSC main args return content cont PRorSC_STATE bodyPRorSC attSTATE stateATTEXP bodyATT attSTR bodySTR ifSTATE expCOND elseSTATE forSTATE forINIT forUpdate UpdateDF whileSTATE bodyLOOP comentSTATE numNat

%start program

%% 

program: headers main { 
			$$.tr = insertNode($1.tr, $2.tr, "program");
			no = $$.tr;
};

main: dataType ID O_PAR args C_PAR O_KEY content return C_KEY{ //main é para estar na tabela reservada
		struct cell *temp = SearchParser(H, $2.name);
		if(temp->type == 4){
			setType(H, $2.name, $1.type);
			setCategory(H, $2.name, 9);
			struct node *a = insertNode($1.tr, $4.tr, "cab");
			struct node *b = insertNode($7.tr, $8.tr, "body");
			$$.tr = insertNode(a, b, "main");
		}
		else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		
}; 

return: RETURN expCOND SEMICOLON {
			$$.tr = insertNode(NULL, $2.tr, "RETURN expCOND;");
}; 

headers: headers headers {
			$$.tr = insertNode($1.tr, $2.tr, "headers headers");} |
		 INCLUDE {
			setCategory(HT, $1.name, 12);
			$$.tr = insertNode(NULL, NULL, "INCLUDE");
};

content: content cont { 
			$$.tr = insertNode($1.tr, $2.tr, "content cont");} | 
		 cont {
			$$.tr = insertNode($1.tr, NULL, "cont");
};

cont: attSTATE{ 
			$$.tr = insertNode($1.tr, NULL, "attSTATE");
		}|
		stateATTEXP{ 
			$$.tr = insertNode($1.tr, NULL, "attSTATEXP");
		}|
	 	ifSTATE { 
			$$.tr = insertNode($1.tr, NULL, "ifSTATE");
		}|
		forSTATE { 
			$$.tr = insertNode($1.tr, NULL, "forSTATE");
		}|
		whileSTATE { 
			$$.tr = insertNode($1.tr, NULL, "whileSTATE");
		}|
		comentSTATE  { 
			$$.tr = insertNode($1.tr, NULL, "comentSTATE");
		}|
		PRorSC_STATE { 
			$$.tr = insertNode($1.tr, NULL, "PRorSC_STATE");
		}|
		/*empty*/{
			$$.tr = NULL;
};

numNat: INTEGER {
			$$.type = 1;
			struct node *temp = insertNode(NULL, NULL, yytext);
			$$.tr = insertNode(temp, NULL, "INT");
	}| 
	REAL {
			$$.type = 2;
			struct node *temp = insertNode(NULL, NULL, yytext);
			$$.tr = insertNode(temp, NULL, "REAL");
	}|
	STR {
			$$.type = 3;
			struct node *temp = insertNode(NULL, NULL, yytext);
			$$.tr = insertNode(temp, NULL, "STR");
};

dataType: INT {
			$$.type = 1;
			$$.tr = insertNode(NULL, NULL, "INT");} | 
		  CHAR {
			$$.type = 6;
			$$.tr = insertNode(NULL, NULL, "CHAR");}| 
		  DOUBLE {
			$$.type = 2;
			$$.tr = insertNode(NULL, NULL, "DOUBLE");} | 
		  FLOAT {
			$$.type = 2;
			$$.tr = insertNode(NULL, NULL, "FLOAT");}|
		  VOID {
			$$.type = 7;
			$$.tr = insertNode(NULL, NULL, "VOID");
};

opLogical: AND {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "&&");} | 
		   OR {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "||");
}; 

opINCorDEC: INCR {
			  setCategory(H, $1.name, 13);
			  $$.tr = insertNode(NULL, NULL, "++");} | 
			DECR {
				setCategory(H, $1.name, 13);
			  $$.tr = insertNode(NULL, NULL, "--");
};

PRorSC: PRINTF {
			setType(HT, $1.name, 5);
		  $$.tr = insertNode(NULL, NULL, "PRINTF");} |
	    SCANF {
			setType(HT, $1.name, 5);
		  $$.tr = insertNode(NULL, NULL, "SCANF");
};

NUMorEMP: numNat {
			setType(H, $1.name, 1);
			setCategory(H, $1.name, 8);
			getValue(H, $1.name, $1.name);
			$$.tr = insertNode($1.tr, NULL, "NUMBER");
			}| 
			/*empty*/ {
				$$.tr = NULL;
};

args: dataType MULT ID { //char * var;
		struct cell *temp = SearchParser(H, $3.name);
		if(temp->type == 4){
			setType(H, $3.name, $1.type);
			setCategory(H, $3.name, 9);
			$$.tr = insertNode($1.tr, $3.tr, "dataType *ID");
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		 }
		}|
	  dataType ID O_BRAC C_BRAC { //char argv[]
		struct cell *temp = SearchParser(H, $2.name);
		if(temp->type == 4){
			setType(H, $2.name, $1.type);
			setCategory(H, $2.name, 9);
			$$.tr = insertNode($1.tr, $2.tr, "dataType ID[]");
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		 }
		}| 
	  dataType ID { //int x;
		struct cell *temp = SearchParser(H, $2.name);
		if(temp->type == 4){
			setType(H, $2.name, $1.type);
			setCategory(H, $2.name, 14);
			$$.tr = insertNode($1.tr, $2.tr, "dataType ID");
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		 }
		}| 
		/*empty*/{
			$$.tr = NULL;
};

PRorSC_STATE: PRorSC O_PAR STR bodyPRorSC C_PAR SEMICOLON {
				$$.tr = insertNode($1.tr, $4.tr, "PRorSC (STR bodyPRorSC);");
};

bodyPRorSC: COMMA ID bodyPRorSC {
				 $$.tr = insertNode($2.tr, $3.tr, ", ID bodyPRorSC");} | 
			COMMA expCOND bodyPRorSC { 
				$$.tr = insertNode($2.tr, $3.tr, ", expCOND bodyPRorSC");} |
				 /*empty*/{
					$$.tr = NULL;
};

attSTATE: bodyATT SEMICOLON {
	$$.tr = insertNode($1.tr, NULL, "bodyATT;");
};

bodyATT: dataType ID {
			struct cell *temp = SearchParser(H, $2.name);
			if(temp->type == 4){
				setType(H, $2.name, $1.type);
				setCategory(H, $2.name, 9);
				$$.type = $1.type;
				strcpy($$.name, $2.name);
				$$.tr = insertNode($1.tr, NULL, "dataType ID");
			}
			else {
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
		}| 
		bodyATT COMMA ID  {
			struct cell *temp = SearchParser(H, $3.name);
			if(temp->type == 4){
				setCategory(H, $3.name, 9);
				setType(H, $3.name, $1.type);
				$$.type = $1.type;
				strcpy($$.name, $3.name);
				$$.tr = insertNode($1.tr, NULL, "bodyATT, ID");
			}
			else {
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}	
		}| 
		attSTR {
			$$.tr = insertNode($1.tr, NULL, "attSTR"); 
		}| 
		error {
			$$.tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
};

stateATTEXP: dataType ID ASSIGMENT expCOND SEMICOLON{		

		struct cell *temp = SearchParser(H, $2.name);
		if(temp->type == 4){
			setType(H, $2.name, $1.type);
			setCategory(H, $2.name, 9);
			if($1.type == $4.type){
				$$.type = $4.type;
				getValue(H, $2.name, $4.name);
				$$.tr = insertNode(NULL, $4.tr, "dataType ID = expCOND;");
				$$.tr = insertNode($1.tr, $2.tr, "dataType ID");
				
			} else {
				printf("Erro Semantico: Tipo de dados imcopativeis na linha %d\n", flag);
			}
			
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}

	}|
	ID ASSIGMENT expCOND SEMICOLON{
		struct cell *temp = SearchParser(H, $1.name);
		if(temp->type == $3.type){
			$$.type = $3.type;
			setType(H, temp->name, $3.type);
			getValue(H, $1.name, $3.name);
			$$.tr = insertNode($1.tr, $3.tr, "ID = expCOND;");
		} else if(temp->type == 4){
			printf("Erro Semantico: Variavel não foi declarada na linha %d\n", flag);
		}
		else {
			printf("Erro Semantico: Tipo de dados imcopativeis na linha %d\n", flag);
		}
	}|
	error {
			$$.tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
};

attSTR: dataType ID O_BRAC NUMorEMP C_BRAC bodySTR{
	struct cell *temp = SearchParser(H, $1.name);
	if(temp->type == 4){
		setType(H, $2.name, $1.type);
		setCategory(H, $2.name, 9);
		struct node *a = insertNode($1.tr, $2.tr, $2.name);
		struct node *b = insertNode($4.tr, $6.tr, "NUMorEMP bodySTR");
		$$.tr = insertNode(a, b, "CHAR ID NUMorEMP bodySTR ");
	}
	else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
	}
};

bodySTR: ASSIGMENT STR {
			$$.type = 3;
			struct node *a = insertNode(NULL, NULL, $2.name); 
			$$.tr = insertNode(a, NULL, $1.name);} | 
			/*empty*/ {
				$$.tr = NULL;
};

expCOND: 
		expCOND SUM expCOND {
			if($1.type == $3.type){
				$$.tr = insertNode($1.tr, $2.tr, "expCOND + expCOND");
				$$.type = $1.type; 
				calculateTest(H, $1.name, $3.name, "+", $$.name); 
				//sprintf( $$.name, "%d", $$.valueInt);
				inserts(H, $$.name, strlen($$.name), flag, 1, 8);
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				$$.type = 4;
			}
		}|
		expCOND SUB expCOND {
			if($1.type == $3.type){
				$$.tr = insertNode($1.tr, $2.tr, "expCOND + expCOND");
				$$.type = $1.type; 
				calculateTest(H, $1.name, $3.name, "-", $$.name); 
				//sprintf( $$.name, "%d", $$.valueInt);
				inserts(H, $$.name, strlen($$.name), flag, 1, 8);
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				$$.type = 4;
			}
		}|
		expCOND MULT expCOND {
			if($1.type == $3.type){
				$$.tr = insertNode($1.tr, $2.tr, "expCOND + expCOND");
				$$.type = $1.type; 
				calculateTest(H, $1.name, $3.name, "*", $$.name); 
				//sprintf( $$.name, "%d", $$.valueInt);
				inserts(H, $$.name, strlen($$.name), flag, 1, 8);
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				$$.type = 4;
			}
		}|
		expCOND DIV expCOND {
			if($1.type == $3.type){
				$$.tr = insertNode($1.tr, $2.tr, "expCOND + expCOND");
				$$.type = $1.type; 
				calculateTest(H, $1.name, $3.name, "/", $$.name); 
				//sprintf( $$.name, "%d", $$.valueInt);
				inserts(H, $$.name, strlen($$.name), flag, 1, 8);
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				$$.type = 4;
			}
		}|
		O_PAR expCOND C_PAR {
			$$.tr = insertNode(NULL, $2.tr, "O_PAR expCOND C_PAR");
		}|
		ID {
			$$.type = $1.type;
			$$.tr = insertNode(NULL, NULL, 	"ID");
		}|
		numNat {
			$$.type = $1.type;
	  		$$.tr = insertNode($1.tr, NULL, "NUMBER");

		}|
		error {
			$$.tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
};

ifSTATE: IF O_PAR expCOND C_PAR bodyLOOP elseSTATE {
			struct node * init = insertNode($3.tr, $5.tr, "IF (expCOND) bodyLOOP");
			$$.tr = insertNode(init, $6.tr, "bodyIF");
};

elseSTATE : ELSE O_KEY content C_KEY {
				$$.tr = insertNode($3.tr, NULL, "ELSE O_KEY content C_KEY"); 
			}|
			ELSE ifSTATE {
				$$.tr = insertNode(NULL, $2.tr, "else ifSTATE"); 
			}| 
			/*empty*/{
					$$.tr = NULL;
};

forSTATE: FOR O_PAR forINIT SEMICOLON expCOND SEMICOLON forUpdate C_PAR bodyLOOP {
				struct node* init = insertNode(NULL, $3.tr, "forINIT");
				struct node* cond = insertNode($5.tr, $7.tr, "forMID");
				struct node* f = insertNode(init, cond, "for");
				$$.tr = insertNode(f, $9.tr, "forSTATE");
}; 

forINIT: bodyATT {
			$$.tr = insertNode($1.tr, NULL, "dataType InitFor");
			}| 
			/*empty*/{
				$$.tr = NULL;
};

forUpdate: UpdateDF { 
			$$.tr = insertNode($1.tr, NULL, "forUpdate");
			}| 
			/*empty*/ {
				$$.tr = NULL;
}; 

UpdateDF: ID opINCorDEC {
		$$.tr = insertNode(NULL, $2.tr, "ID opINCorDEC");
		} | 
	  UpdateDF COMMA UpdateDF { 
		$$.tr = insertNode($1.tr, $3.tr, "UpdateDF, UpdateDF"); 
}; 

whileSTATE: WHILE O_PAR expCOND C_PAR bodyLOOP{ 
				$$.tr = insertNode(NULL, $3.tr, "whileSTATE"); 
};

bodyLOOP: O_KEY content C_KEY{ 
			$$.tr = insertNode(NULL, $2.tr, "bodyLOOP"); 
};

comentSTATE: O_COMENT content C_COMENT{ 
			$$.tr = insertNode(NULL, $2.tr, "comentSTATE"); 
};

%%

void yyerror (){
  fprintf(stderr, "\nERRO DE SINTAXE NA LINHA %d\n\n", flag);
}

int main(int argc, char *argv[]){

	int i;
    char str[MAX], fileTree[MAX*2];
	FILE *tabs; 
    H = initialization();
	HT = initialization();

	printf("Deseja entrar com um arquivo? 1-SIM/2-NAO\n>> ");
	scanf("%d%*c", &i);

	while(i == 1){
		printf("Entre com um arquivo.txt\n>> ");
    	scanf("%s%*c", str);
    	yyin = fopen(str, "r");

		printf("\n");

		if(yyin != NULL){
			yylex();
			yyparse();
			
			printHash(HT);
			printHash(H);
			fclose(yyin);
			sprintf(fileTree, "Arvore-%s", str);
			yyout = fopen(fileTree, "w");

			if(flagError == 0 && yyout != NULL){
				printTree(yyout, no);
			} else {
				fprintf(yyout, "\nNão é possivel criar a arvore sintatica! Possui erros lexicos, sintaticos e semanticos no codigo.\n");
			}

		} else printf("\nArquivo não encontrado\n");
		
		printf("\nDeseja entrar com um arquivo? 1-SIM/2-NAO\n>> ");
		scanf("%d%*c", &i);
		H = initialization();
		HT = initialization();
		flag = 1;
	}
    return 0;
}

