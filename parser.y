%{
    #include "hashTable.h"
	#include "tree.h"

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
			struct node* tr; 
		} obj;
}

%token <obj> SUB SUM MULT DIV POW MOD ASSIGMENT COMPARATOR INCR DECR
%token <obj> AND OR NOT 
%token <obj> CHAR INT VOID FLOAT DOUBLE NUMBER STR 
%token <obj> O_KEY O_BRAC O_PAR C_PAR C_BRAC C_KEY O_COMENT C_COMENT SEMICOLON COMMA INCLUDE PRINTF SCANF 
%token <obj> WHILE FOR IF ELSE 
%token <obj> ID RETURN ERROID

%left MULT DIV MOD 
%left SUB SUM 
%left COMP 
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
			$$.tr = insertNode(NULL, NULL, "INCLUDE");} |
			/*empty*/ {$$.tr = NULL;}; 

dataType: INT {
			$$.tr = insertNode(NULL, NULL, "INT");} | 
		  CHAR {
			$$.tr = insertNode(NULL, NULL, "CHAR");}| 
		  DOUBLE {
			$$.tr = insertNode(NULL, NULL, "DOUBLE");} | 
		  FLOAT {
			$$.tr = insertNode(NULL, NULL, "FLOAT");}|
		  VOID {
			$$.tr = insertNode(NULL, NULL, "VOID");};

operator: SUM {
			$$.tr = insertNode(NULL, NULL, "+");} | 
		  SUB {
			$$.tr = insertNode(NULL, NULL, "-");} | 
		  MULT {
			$$.tr = insertNode(NULL, NULL, "*");} | 
		  DIV {
			$$.tr = insertNode(NULL, NULL, "/");} | 
		  POW {
			$$.tr = insertNode(NULL, NULL, "**");} | 
		  MOD {
			$$.tr = insertNode(NULL, NULL, "%");} |
		 COMPARATOR {
			$$.tr = insertNode(NULL, NULL, $1.name);} |
		  ASSIGMENT {
			$$.tr = insertNode(NULL, NULL, "=");}; 

opLogical: AND {
			$$.tr = insertNode(NULL, NULL, "&&");} | 
		   OR {
			$$.tr = insertNode(NULL, NULL, "||");}; 

opINCorDEC: INCR {
			  $$.tr = insertNode(NULL, NULL, "++");} | 
			DECR {
			  $$.tr = insertNode(NULL, NULL, "--");};

PRorSC: PRINTF {
		  $$.tr = insertNode(NULL, NULL, "PRINTF");} |
	    SCANF {
		  $$.tr = insertNode(NULL, NULL, "SCANF");};

NUMorID: NUMBER {
	  		$$.tr = insertNode(NULL, NULL, "NUMBER");} | 
		 ID {
			$$.tr = insertNode(NULL, NULL, 	"ID");};

NUMorEMP: NUMBER {
			$$.tr = insertNode(NULL, NULL, "NUMBER");} | 
			/*empty*/ {$$.tr = NULL;};

main: dataType ID O_PAR args C_PAR O_KEY content return C_KEY{
		struct node *a = insertNode($1.tr, $4.tr, "cab");
		struct node *b = insertNode($7.tr, $8.tr, "body");
		$$.tr = insertNode(a, b, "main");
}; 

args: dataType MULT ID { 
		$$.tr = insertNode($1.tr, NULL, "dataType *ID");} |
	  dataType ID O_BRAC C_BRAC { 
		$$.tr = insertNode($1.tr, NULL, "dataType ID[]");} | 
	  dataType ID { 
		$$.tr = insertNode($1.tr, NULL, "dataType ID");} | 
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
			$$.tr = insertNode($1.tr, NULL, "dataType ID"); } | 
		bodyATT COMMA ID  {
			$$.tr = insertNode($1.tr, NULL, "bodyATT, ID");} | 
		bodyATT ASSIGMENT NUMorID {
			$$.tr = insertNode($1.tr, $3.tr, "bodyATT = NUMorID");} | 
		attSTR {
			$$.tr = insertNode($1.tr, NULL, "attSTR"); } | 
		ID ASSIGMENT NUMorID {
			struct node *a = insertNode(NULL, NULL, $3.name); 
			struct node *b = insertNode(NULL, NULL, $2.name); 
			$$.tr = insertNode(b, a, $1.name);} |
		error {
			$$.tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
};


attSTR: CHAR ID O_BRAC NUMorEMP C_BRAC bodySTR{
	$$.tr = insertNode($4.tr, $6.tr, "CHAR ID NUMorEMP bodySTR ");
};

bodySTR: ASSIGMENT STR { 
			struct node *a = insertNode(NULL, NULL, $2.name); 
			$$.tr = insertNode(a, NULL, $1.name);} | 
			/*empty*/ {$$.tr = NULL;};

ifSTATE: IF O_PAR expCOND C_PAR bodyLOOP elseSTATE {
			struct node * init = insertNode($3.tr, $5.tr, "IF (expCOND) bodyLOOP");
			$$.tr = insertNode(init, $6.tr, "bodyIF");
};

expCOND: expCOND COMPARATOR expCOND { 
		$$.tr = insertNode($1.tr, $3.tr, "expCOND COMP expCOND");} |
		 O_PAR expCOND C_PAR { 
		$$.tr = insertNode($2.tr, NULL, "O_PAR expCOND C_PAR");} |
		 expCOND operator expCOND { 
		$$.tr = insertNode($1.tr, $3.tr, "expCOND operator expCOND");} |
		 expCOND opLogical expCOND { 
		$$.tr = insertNode($1.tr, $3.tr, "expCOND opLogical expCOND");} |
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
			$$.tr = insertNode(NULL, $2.tr, "ID opINCorDEC");} | 
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
