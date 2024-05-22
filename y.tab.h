/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SUB = 258,                     /* SUB  */
    SUM = 259,                     /* SUM  */
    MULT = 260,                    /* MULT  */
    DIV = 261,                     /* DIV  */
    ASSIGMENT = 262,               /* ASSIGMENT  */
    COMPARATOR = 263,              /* COMPARATOR  */
    INCR = 264,                    /* INCR  */
    DECR = 265,                    /* DECR  */
    AND = 266,                     /* AND  */
    OR = 267,                      /* OR  */
    NOT = 268,                     /* NOT  */
    INT = 269,                     /* INT  */
    CHAR = 270,                    /* CHAR  */
    VOID = 271,                    /* VOID  */
    FLOAT = 272,                   /* FLOAT  */
    DOUBLE = 273,                  /* DOUBLE  */
    INTEGER = 274,                 /* INTEGER  */
    REAL = 275,                    /* REAL  */
    STR = 276,                     /* STR  */
    O_KEY = 277,                   /* O_KEY  */
    O_BRAC = 278,                  /* O_BRAC  */
    O_PAR = 279,                   /* O_PAR  */
    C_PAR = 280,                   /* C_PAR  */
    C_BRAC = 281,                  /* C_BRAC  */
    C_KEY = 282,                   /* C_KEY  */
    O_COMENT = 283,                /* O_COMENT  */
    C_COMENT = 284,                /* C_COMENT  */
    SEMICOLON = 285,               /* SEMICOLON  */
    COMMA = 286,                   /* COMMA  */
    INCLUDE = 287,                 /* INCLUDE  */
    PRINTF = 288,                  /* PRINTF  */
    SCANF = 289,                   /* SCANF  */
    RETURN = 290,                  /* RETURN  */
    WHILE = 291,                   /* WHILE  */
    FOR = 292,                     /* FOR  */
    IF = 293,                      /* IF  */
    ELSE = 294,                    /* ELSE  */
    ID = 295                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SUB 258
#define SUM 259
#define MULT 260
#define DIV 261
#define ASSIGMENT 262
#define COMPARATOR 263
#define INCR 264
#define DECR 265
#define AND 266
#define OR 267
#define NOT 268
#define INT 269
#define CHAR 270
#define VOID 271
#define FLOAT 272
#define DOUBLE 273
#define INTEGER 274
#define REAL 275
#define STR 276
#define O_KEY 277
#define O_BRAC 278
#define O_PAR 279
#define C_PAR 280
#define C_BRAC 281
#define C_KEY 282
#define O_COMENT 283
#define C_COMENT 284
#define SEMICOLON 285
#define COMMA 286
#define INCLUDE 287
#define PRINTF 288
#define SCANF 289
#define RETURN 290
#define WHILE 291
#define FOR 292
#define IF 293
#define ELSE 294
#define ID 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "parser.y"

		struct {
			char name[MAX*2]; //
			int type;
			int category;
			char valueInt[MAX*2];
			char valueDouble[MAX*2];
			struct node* tr; 
		} obj;

#line 158 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
