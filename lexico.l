%{
	/*1°Definições */
    #include "hashTable.h"
    #include "y.tab.h"
    int flag = 1;
    HashTable *H, *HT;
%}

/*Operadores aritmeticos*/
SUB ("-") 
SUM ("+")	
MULT ("*") 
DIV ("/")	 

/*Incremento e decremento*/
INCR ("++") 
DECR ("--") 

/*Atribuição*/
ASSIGMENT ("=") 

/*Operadores de comparação*/
COMPARATOR  ("<"|">"|"<="|">="|"!="|"==")

/*Operadores Logicos*/
AND ("&&") 
OR ("||") 
NOT  ("~"|"!") 

O_KEY "{" 
C_KEY "}" 
O_BRAC "[" 
C_BRAC "]" 
O_PAR "(" 
C_PAR ")" 
O_COMENT ("##*")
C_COMENT  ("*##")
SEMICOLON (";") 
COMMA (",")

INCLUDE ("#include"[ ]*<.+\.h>)
LETTER [a-zA-Z] 
STR (\".*\") 
NUMBER [0-9]+
ID {LETTER}({LETTER}|{NUMBER})* 
ERROID ({LETTER}|{NUMBER})("$"|"@"|{LETTER}|{NUMBER})+

%%

(while) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return WHILE;
}
(for) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return FOR;
}
(if) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return IF;
}
(else) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return ELSE;
}
(char) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 10);
    strcpy(yylval.obj.name, (yytext));
    return CHAR;
}
(void) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 10);
    strcpy(yylval.obj.name, (yytext));
    return VOID;
}
(int) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 10);
    strcpy(yylval.obj.name, (yytext));
    return INT;
}
(float) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 10);
    strcpy(yylval.obj.name, (yytext));
    return FLOAT;
}
(double) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 10);
    strcpy(yylval.obj.name, (yytext));
    return DOUBLE;
}
(return) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return RETURN;
}
(printf) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return PRINTF;
}
(scanf) {
    inserts(HT, yytext, strlen(yytext), flag, 5, 5);
    strcpy(yylval.obj.name, (yytext));
    return SCANF;
}
{STR} {
    inserts(H, yytext, strlen(yytext), flag, 3, 11);
    strcpy(yylval.obj.name, (yytext));
    return STR;
}
{ID} {
    if(strlen(yytext) < 10){
        inserts(H, yytext, strlen(yytext), flag, 4, 4);
        strcpy(yylval.obj.name, (yytext));
        return ID;
    }
    else{
        fprintf(stderr, "ERRO: Tamanho maximo de identificador excedido na linha %d!\n", flag);
        strcpy(yylval.obj.name, (yytext));
    }
}
{NUMBER} {
    inserts(H, yytext, strlen(yytext), flag, 4, 8);
    strcpy(yylval.obj.name, (yytext));
    return NUMBER;
}
{SUM} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return SUM;
}
{SUB} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return SUB;
}
{MULT} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return MULT;
} 
{DIV} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return DIV;
}
{INCR} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return INCR;
}
{DECR} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return DECR;
}
{AND} {
    inserts(H, yytext, strlen(yytext), flag, 4, 413);
    strcpy(yylval.obj.name, (yytext));
    return AND;
}
{OR} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return OR;
}
{NOT} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return NOT;
}
{INCLUDE} {
    inserts(HT, yytext, strlen(yytext), flag, 5, 12);
    strcpy(yylval.obj.name, (yytext));
    return INCLUDE;
}
{O_KEY} { 
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return O_KEY;
}
{O_BRAC} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return O_BRAC;
}
{O_PAR} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return O_PAR;
}
{C_PAR} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return C_PAR;
}
{C_BRAC} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return C_BRAC;       
}
{C_KEY} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return C_KEY;
}
{O_COMENT} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return O_COMENT;
}
{C_COMENT} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return C_COMENT;
}
{COMPARATOR} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return COMPARATOR;
}
{ASSIGMENT} {
    inserts(H, yytext, strlen(yytext), flag, 4, 13);
    strcpy(yylval.obj.name, (yytext));
    return ASSIGMENT;
}
{SEMICOLON} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return SEMICOLON;
}
{COMMA} {
    inserts(H, yytext, strlen(yytext), flag, 4, 4);
    return COMMA;
}

{ERROID} {
		fprintf(stderr, "ERRO ID: Token nao identificado na linha %d\n\n", flag);
}

"\n" {flag++;}

[ \t\r\f]+

. {
    fprintf(stderr, "Token não identificado na linha %d\n\n", flag);
}

%%

int yywrap(void){ return 1;}

