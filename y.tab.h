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
    POW = 262,                     /* POW  */
    MOD = 263,                     /* MOD  */
    ASSIGMENT = 264,               /* ASSIGMENT  */
    COMPARATOR = 265,              /* COMPARATOR  */
    INCR = 266,                    /* INCR  */
    DECR = 267,                    /* DECR  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    NOT = 270,                     /* NOT  */
    CHAR = 271,                    /* CHAR  */
    INT = 272,                     /* INT  */
    VOID = 273,                    /* VOID  */
    FLOAT = 274,                   /* FLOAT  */
    DOUBLE = 275,                  /* DOUBLE  */
    NUMBER = 276,                  /* NUMBER  */
    STR = 277,                     /* STR  */
    O_KEY = 278,                   /* O_KEY  */
    O_BRAC = 279,                  /* O_BRAC  */
    O_PAR = 280,                   /* O_PAR  */
    C_PAR = 281,                   /* C_PAR  */
    C_BRAC = 282,                  /* C_BRAC  */
    C_KEY = 283,                   /* C_KEY  */
    O_COMENT = 284,                /* O_COMENT  */
    C_COMENT = 285,                /* C_COMENT  */
    SEMICOLON = 286,               /* SEMICOLON  */
    COMMA = 287,                   /* COMMA  */
    INCLUDE = 288,                 /* INCLUDE  */
    PRINTF = 289,                  /* PRINTF  */
    SCANF = 290,                   /* SCANF  */
    WHILE = 291,                   /* WHILE  */
    FOR = 292,                     /* FOR  */
    IF = 293,                      /* IF  */
    ELSE = 294,                    /* ELSE  */
    ID = 295,                      /* ID  */
    RETURN = 296,                  /* RETURN  */
    ERROID = 297,                  /* ERROID  */
    COMP = 298                     /* COMP  */
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
#define POW 262
#define MOD 263
#define ASSIGMENT 264
#define COMPARATOR 265
#define INCR 266
#define DECR 267
#define AND 268
#define OR 269
#define NOT 270
#define CHAR 271
#define INT 272
#define VOID 273
#define FLOAT 274
#define DOUBLE 275
#define NUMBER 276
#define STR 277
#define O_KEY 278
#define O_BRAC 279
#define O_PAR 280
#define C_PAR 281
#define C_BRAC 282
#define C_KEY 283
#define O_COMENT 284
#define C_COMENT 285
#define SEMICOLON 286
#define COMMA 287
#define INCLUDE 288
#define PRINTF 289
#define SCANF 290
#define WHILE 291
#define FOR 292
#define IF 293
#define ELSE 294
#define ID 295
#define RETURN 296
#define ERROID 297
#define COMP 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

		struct teste{
			char name[MAX*2];
			struct node* tr; 
		} obj;

#line 160 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
