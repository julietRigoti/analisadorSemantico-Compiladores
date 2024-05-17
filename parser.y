%{
    #include "hashTable.h"
	#include "tree.h"
	#include "y.tab.h"

	extern int yylex();
	extern int flag;
	extern HashTable *H, *HT;
    extern FILE *yyin;
	extern FILE *yyout;

	struct node* no;
	void yyerror();
	int flagError = 0;
%}

%union {
		struct teste{
			char name[MAX*2];
			int type;
			int category;
			int valueInt;
			double valueDouble;
			struct node* tr; 
		} obj;
}

%token <obj> SUB SUM MULT DIV ASSIGMENT COMPARATOR INCR DECR
%token <obj> AND OR NOT 
%token <obj> CHAR INT VOID FLOAT DOUBLE NUMBER STR 
%token <obj> O_KEY O_BRAC O_PAR C_PAR C_BRAC C_KEY O_COMENT C_COMENT SEMICOLON COMMA INCLUDE PRINTF SCANF 
%token <obj> WHILE FOR IF ELSE 
%token <obj> ID RETURN 

%left MULT DIV  
%left SUB SUM 
%left COMPARATOR 
%right ASSIGMENT 

%type <obj> program headers dataType operator opLogical opINCorDEC NUMorID NUMorEMP PRorSC main args return content cont PRorSC_STATE bodyPRorSC attSTATE bodyATT attSTR bodySTR ifSTATE expCOND elseSTATE forSTATE forINIT InitFor forUpdate UpdateDF whileSTATE bodyLOOP comentSTATE

%start program

%% 

program: headers main { 
			$$.tr = insertNode($1.tr, $2.tr, "program");
			no = $$.tr;
};

headers: headers headers {
			$$.tr = insertNode($1.tr, $2.tr, "headers headers");} |
		 INCLUDE {
			$$.category = 12;
			setCategory(HT, $1.name, 12);
			$$.tr = insertNode(NULL, NULL, "INCLUDE");} 
			|
			/*empty*/ {$$.tr = NULL;}; 

dataType: INT {
			$$.type = 1;
			setCategory(HT, $1.name, 10);
			$$.tr = insertNode(NULL, NULL, "INT");} | 
		  CHAR {
			$$.type = 6;
			setCategory(HT, $1.name, 10);
			$$.tr = insertNode(NULL, NULL, "CHAR");}| 
		  DOUBLE {
			$$.type = 3;
			setCategory(HT, $1.name, 10);
			$$.tr = insertNode(NULL, NULL, "DOUBLE");} | 
		  FLOAT {
			$$.type = 3;
			setCategory(HT, $1.name, 10);
			$$.tr = insertNode(NULL, NULL, "FLOAT");}|
		  VOID {
			$$.type = 4;
			setCategory(HT, $1.name, 10);
			$$.tr = insertNode(NULL, NULL, "VOID");};

operator: SUM {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "+");} | 
		  SUB {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "-");} | 
		  MULT {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "*");} | 
		  DIV {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "/");} | 
		 COMPARATOR {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, " == ");} |
		  ASSIGMENT {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "=");}; 

opLogical: AND {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "&&");} | 
		   OR {
			setCategory(H, $1.name, 13);
			$$.tr = insertNode(NULL, NULL, "||");}; 

opINCorDEC: INCR {
			  setCategory(H, $1.name, 13);
			  $$.tr = insertNode(NULL, NULL, "++");} | 
			DECR {
				setCategory(H, $1.name, 13);
			  $$.tr = insertNode(NULL, NULL, "--");};

PRorSC: PRINTF {
			setType(HT, $1.name, 5);
		  $$.tr = insertNode(NULL, NULL, "PRINTF");} |
	    SCANF {
			setType(HT, $1.name, 5);
		  $$.tr = insertNode(NULL, NULL, "SCANF");};

NUMorID: NUMBER {
			setCategory(H, $1.name, 8);
	  		$$.tr = insertNode(NULL, NULL, "NUMBER");} | 
		 ID {
			$$.tr = insertNode(NULL, NULL, 	"ID");};

NUMorEMP: NUMBER {
			setCategory(H, $1.name, 8);
			$$.tr = insertNode(NULL, NULL, "NUMBER");} | 
			/*empty*/ {$$.tr = NULL;};

main: dataType ID O_PAR args C_PAR O_KEY content return C_KEY{
		if(SearchParser(H, $2.name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		setType(H, $2.name, $1.type);
		setCategory(H, $2.name, 9);
		struct node *a = insertNode($4.tr, NULL, "cab");
		struct node *b = insertNode($7.tr, $8.tr, "body");
		$$.tr = insertNode(a, b, "main");
}; 

args: dataType MULT ID {
		if(SearchParser(H, $3.name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		if(SearchParser(H, $3.name)->category != 4){
			printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
		}
		setType(H, $3.name, $1.type);
		setCategory(H, $3.name, 14);

		$$.tr = insertNode($1.tr, $3.tr, "dataType *ID");} 
		|
	  dataType ID O_BRAC C_BRAC { 
		if(SearchParser(H, $2.name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		if(SearchParser(H, $2.name)->category != 4){
			printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
		}
		setType(H, $2.name, $1.type);
		setCategory(H, $2.name, 14);

		$$.tr = insertNode($1.tr, $2.tr, "dataType ID[]");} 
		| 
	  dataType ID { 
		if(SearchParser(H, $2.name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		if(SearchParser(H, $2.name)->category != 4){
			printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
		}
		setType(H, $2.name, $1.type);
		setCategory(H, $2.name, 14);
		$$.tr = insertNode($1.tr, $2.tr, "dataType ID");} 
		| 
		/*empty*/ {$$.tr = NULL;};

return: RETURN NUMorID SEMICOLON {
			$$.tr = insertNode(NULL, $2.tr, "RETURN NUMorID;");
		}; 

content: content cont { 
			$$.tr = insertNode($1.tr, $2.tr, "content cont");} | 
		 cont {
			$$.tr = insertNode($1.tr, NULL, "cont");
		 };

cont:   attSTATE{ 
		$$.tr = insertNode($1.tr, NULL, "attSTATE");} |
	 	ifSTATE { 
		$$.tr = insertNode($1.tr, NULL, "ifSTATE");} |
		forSTATE { 
		$$.tr = insertNode($1.tr, NULL, "forSTATE");} |
		whileSTATE { 
		$$.tr = insertNode($1.tr, NULL, "whileSTATE");} |
		comentSTATE  { 
		$$.tr = insertNode($1.tr, NULL, "comentSTATE");} |
		PRorSC_STATE { 
		$$.tr = insertNode($1.tr, NULL, "PRorSC_STATE");} |
		/*empty*/ {$$.tr = NULL;};

PRorSC_STATE: PRorSC O_PAR STR bodyPRorSC C_PAR SEMICOLON {
				$$.tr = insertNode($1.tr, $4.tr, "PRorSC (STR bodyPRorSC);");
};

bodyPRorSC: COMMA ID bodyPRorSC {
				 $$.tr = insertNode(NULL, $3.tr, ", ID bodyPRorSC");} | 
			COMMA expCOND bodyPRorSC { 
				$$.tr = insertNode(NULL, $3.tr, ", expCOND bodyPRorSC");} |
				 /*empty*/ {$$.tr = NULL;};

attSTATE: bodyATT SEMICOLON {
	$$.tr = insertNode($1.tr, NULL, "bodyATT;");
};

bodyATT: dataType ID {
			if(SearchParser(H, $2.name)->type != 4){
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
			if(SearchParser(H, $2.name)->category != 4){
				printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
			}
			setType(H, $2.name, $1.type);
			setCategory(H, $2.name, 9);
			$$.tr = insertNode($1.tr, NULL, "dataType ID"); } 
		| 
		bodyATT COMMA ID  {
			if(SearchParser(H, $3.name)->type != 4){
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
			if(SearchParser(H, $3.name)->category != 4){
				printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
			}
			setType(H, $3.name, $1.type);
			setCategory(H, $2.name, 9);
			$$.tr = insertNode($1.tr, NULL, "bodyATT, ID");} | 
		bodyATT ASSIGMENT NUMorID {
			if(SearchParser(H, $3.name)->type != 4){
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
			if(SearchParser(H, $3.name)->category != 4){
				printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
			}
			setType(H, $3.name, $1.type);
			setCategory(H, $3.name, 9);
			$$.tr = insertNode($1.tr, $3.tr, "bodyATT = NUMorID");} | 
		attSTR {
			$$.tr = insertNode($1.tr, NULL, "attSTR"); } | 
		ID ASSIGMENT NUMorID {
			setCategory(H, $2.name, 13);
			struct node *a = insertNode(NULL, NULL, $3.name); 
			struct node *b = insertNode(NULL, NULL, $2.name); 
			$$.tr = insertNode(b, a, $1.name);} |
		error {
			$$.tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
};


attSTR: CHAR ID O_BRAC NUMorEMP C_BRAC bodySTR{
	struct node *a = insertNode($2.tr, NULL, $2.name);
	struct node *b = insertNode($4.tr, $6.tr, "NUMorEMP bodySTR");
	$$.tr = insertNode(a, b, "CHAR ID NUMorEMP bodySTR ");
};

bodySTR: ASSIGMENT STR { 
			setCategory(H, $1.name, 13);
			setCategory(H, $2.name, 11);
			struct node *a = insertNode(NULL, NULL, $2.name); 
			$$.tr = insertNode(a, NULL, $1.name);} | 
			/*empty*/ {$$.tr = NULL;};

ifSTATE: IF O_PAR expCOND C_PAR bodyLOOP elseSTATE {
			struct node * init = insertNode($3.tr, $5.tr, "IF (expCOND) bodyLOOP");
			$$.tr = insertNode(init, $6.tr, "bodyIF");
};

expCOND: expCOND COMPARATOR expCOND {
		if($1.type == $3.type) {
				$$.tr = insertNode($1.tr, $3.tr, "expCOND COMP expCOND");
				$$.type = $1.type; 
			}
			else {
				printf("Erro Semantico: Tipo de Dados diferentes na linha %d\n", flag);
			}
		} |
		 O_PAR expCOND C_PAR { 
		$$.tr = insertNode($2.tr, NULL, "O_PAR expCOND C_PAR");} 
		|
		 expCOND operator expCOND { 
			if($1.type == $3.type) {
				$$.tr = insertNode($1.tr, $3.tr, "expCOND operator expCOND");
				$$.type = $1.type; 
				if($$.type == 1){
					$$.valueInt = calculateInt(H, $1.name, $3.name, $2.name);
					sprintf( $$.name, "%d", $$.valueInt);
					inserts(H, $$.name, strlen($$.name), flag, 1, 8);
				} else if($$.type == 2){
					$$.valueDouble = calculateFloat(H, $1.name, $3.name, $2.name);
					sprintf($$.name, "%.2f", $$.valueDouble);
					inserts(H, $$.name, strlen($$.name), flag, 2, 8);
				}
			}
			else {
				printf("Erro Semantico: Tipo de Dados diferentes na linha %d\n", flag);
			}
		} |
		 expCOND opLogical expCOND { 
				if($1.type == $3.type)
					$$.tr = insertNode($1.tr, $3.tr, "expCOND opLogical expCOND");
				else {
					printf("Erro Semantico: Tipo de Dados diferentes na linha %d\n", flag);
				}
			} |
		 NUMorID {$$.tr = insertNode($1.tr, NULL, "NUMorID");};

elseSTATE : ELSE O_KEY content C_KEY {
				$$.tr = insertNode($3.tr, NULL, "ELSE O_KEY content C_KEY"); }|
			ELSE ifSTATE {
				$$.tr = insertNode(NULL, $2.tr, "else ifSTATE"); } | 
				{$$.tr = NULL;};

forSTATE: FOR O_PAR forINIT SEMICOLON expCOND SEMICOLON forUpdate C_PAR bodyLOOP {
				struct node* init = insertNode(NULL, $3.tr, "forINIT");
				struct node* cond = insertNode($5.tr, $7.tr, "forMID");
				struct node* f = insertNode(init, cond, "for");
				$$.tr = insertNode(f, $9.tr, "forSTATE");
}; 

forINIT: dataType InitFor {
			$$.tr = insertNode($1.tr, NULL, "dataType InitFor");} | 
		 InitFor {
			$$.tr = insertNode($1.tr, NULL, "InitFor");} | 
			/*empty*/ {$$.tr = NULL;};
		 

InitFor: ID ASSIGMENT NUMorID { 
			$$.tr = insertNode(NULL, $3.tr, "InitFor NUMorID");}; | 
		InitFor COMMA InitFor { 
			$$.tr = insertNode($1.tr, $3.tr, "InitFor, InitFor"); 
};

forUpdate: UpdateDF { 
			$$.tr = insertNode($1.tr, NULL, "forUpdate");} | 
			{$$.tr = NULL;}; 

UpdateDF: ID opINCorDEC {
			if($1.type == 1 || $1.type == 2) 
				$$.tr = insertNode(NULL, $2.tr, "ID opINCorDEC");
			else printf("Erro Semantico: Tipo de Dado incompativel\n");
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
  fprintf(stderr, "\nErro de sintaxe na linha %d\n", flag);
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
				fprintf(yyout, "\nNão é possivel criar a arvore sintatica! Possui erros lexicos e sintaticos no codigo.\n");
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

