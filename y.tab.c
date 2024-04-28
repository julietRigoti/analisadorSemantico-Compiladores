/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 232 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SUB = 3,                        /* SUB  */
  YYSYMBOL_SUM = 4,                        /* SUM  */
  YYSYMBOL_MULT = 5,                       /* MULT  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_POW = 7,                        /* POW  */
  YYSYMBOL_MOD = 8,                        /* MOD  */
  YYSYMBOL_ASSIGMENT = 9,                  /* ASSIGMENT  */
  YYSYMBOL_COMPARATOR = 10,                /* COMPARATOR  */
  YYSYMBOL_INCR = 11,                      /* INCR  */
  YYSYMBOL_DECR = 12,                      /* DECR  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_CHAR = 16,                      /* CHAR  */
  YYSYMBOL_INT = 17,                       /* INT  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_FLOAT = 19,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 20,                    /* DOUBLE  */
  YYSYMBOL_NUMBER = 21,                    /* NUMBER  */
  YYSYMBOL_STR = 22,                       /* STR  */
  YYSYMBOL_O_KEY = 23,                     /* O_KEY  */
  YYSYMBOL_O_BRAC = 24,                    /* O_BRAC  */
  YYSYMBOL_O_PAR = 25,                     /* O_PAR  */
  YYSYMBOL_C_PAR = 26,                     /* C_PAR  */
  YYSYMBOL_C_BRAC = 27,                    /* C_BRAC  */
  YYSYMBOL_C_KEY = 28,                     /* C_KEY  */
  YYSYMBOL_O_COMENT = 29,                  /* O_COMENT  */
  YYSYMBOL_C_COMENT = 30,                  /* C_COMENT  */
  YYSYMBOL_SEMICOLON = 31,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_INCLUDE = 33,                   /* INCLUDE  */
  YYSYMBOL_PRINTF = 34,                    /* PRINTF  */
  YYSYMBOL_SCANF = 35,                     /* SCANF  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_ID = 40,                        /* ID  */
  YYSYMBOL_RETURN = 41,                    /* RETURN  */
  YYSYMBOL_ERROID = 42,                    /* ERROID  */
  YYSYMBOL_COMP = 43,                      /* COMP  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_headers = 46,                   /* headers  */
  YYSYMBOL_dataType = 47,                  /* dataType  */
  YYSYMBOL_operator = 48,                  /* operator  */
  YYSYMBOL_opLogical = 49,                 /* opLogical  */
  YYSYMBOL_opINCorDEC = 50,                /* opINCorDEC  */
  YYSYMBOL_PRorSC = 51,                    /* PRorSC  */
  YYSYMBOL_NUMorID = 52,                   /* NUMorID  */
  YYSYMBOL_NUMorEMP = 53,                  /* NUMorEMP  */
  YYSYMBOL_main = 54,                      /* main  */
  YYSYMBOL_args = 55,                      /* args  */
  YYSYMBOL_return = 56,                    /* return  */
  YYSYMBOL_content = 57,                   /* content  */
  YYSYMBOL_cont = 58,                      /* cont  */
  YYSYMBOL_PRorSC_STATE = 59,              /* PRorSC_STATE  */
  YYSYMBOL_bodyPRorSC = 60,                /* bodyPRorSC  */
  YYSYMBOL_attSTATE = 61,                  /* attSTATE  */
  YYSYMBOL_bodyATT = 62,                   /* bodyATT  */
  YYSYMBOL_attSTR = 63,                    /* attSTR  */
  YYSYMBOL_bodySTR = 64,                   /* bodySTR  */
  YYSYMBOL_ifSTATE = 65,                   /* ifSTATE  */
  YYSYMBOL_expCOND = 66,                   /* expCOND  */
  YYSYMBOL_elseSTATE = 67,                 /* elseSTATE  */
  YYSYMBOL_forSTATE = 68,                  /* forSTATE  */
  YYSYMBOL_forINIT = 69,                   /* forINIT  */
  YYSYMBOL_InitFor = 70,                   /* InitFor  */
  YYSYMBOL_forUpdate = 71,                 /* forUpdate  */
  YYSYMBOL_UpdateDF = 72,                  /* UpdateDF  */
  YYSYMBOL_whileSTATE = 73,                /* whileSTATE  */
  YYSYMBOL_bodyLOOP = 74,                  /* bodyLOOP  */
  YYSYMBOL_comentSTATE = 75                /* comentSTATE  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    46,    48,    50,    52,    54,    56,    58,
      60,    63,    65,    67,    69,    71,    73,    75,    77,    80,
      82,    85,    87,    90,    92,    95,    97,   100,   102,   104,
     110,   112,   114,   116,   118,   122,   124,   128,   130,   132,
     134,   136,   138,   140,   142,   146,   148,   150,   152,   156,
     158,   160,   162,   164,   168,   174,   178,   181,   183,   188,
     190,   192,   194,   196,   198,   200,   202,   204,   211,   213,
     215,   218,   220,   224,   226,   228,   230,   234,   238,   242
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SUB", "SUM", "MULT",
  "DIV", "POW", "MOD", "ASSIGMENT", "COMPARATOR", "INCR", "DECR", "AND",
  "OR", "NOT", "CHAR", "INT", "VOID", "FLOAT", "DOUBLE", "NUMBER", "STR",
  "O_KEY", "O_BRAC", "O_PAR", "C_PAR", "C_BRAC", "C_KEY", "O_COMENT",
  "C_COMENT", "SEMICOLON", "COMMA", "INCLUDE", "PRINTF", "SCANF", "WHILE",
  "FOR", "IF", "ELSE", "ID", "RETURN", "ERROID", "COMP", "$accept",
  "program", "headers", "dataType", "operator", "opLogical", "opINCorDEC",
  "PRorSC", "NUMorID", "NUMorEMP", "main", "args", "return", "content",
  "cont", "PRorSC_STATE", "bodyPRorSC", "attSTATE", "bodyATT", "attSTR",
  "bodySTR", "ifSTATE", "expCOND", "elseSTATE", "forSTATE", "forINIT",
  "InitFor", "forUpdate", "UpdateDF", "whileSTATE", "bodyLOOP",
  "comentSTATE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   -92,    25,   210,   -92,   -92,   -92,   -92,   -92,   -92,
     -24,   -11,   -92,     7,   109,    -2,    10,     1,    15,    26,
     -92,    39,    36,   -92,   -92,    29,   104,   -92,   -92,    50,
      66,    67,    84,    60,    76,    78,   -92,   -92,   -92,    -1,
     -92,   -92,   -92,   -92,   -92,    80,   129,    59,    70,    59,
      -7,   -92,    86,    -7,    81,   -92,    -7,   -92,    71,    85,
     -92,   -92,    59,   -92,   -92,   242,   108,    92,   105,   111,
     256,   -92,   119,   106,   -92,   -92,   -92,   -92,   125,   270,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,    59,   -92,   -92,
     130,    59,    59,    -7,   111,    59,    92,   130,   110,   128,
     -92,   147,   -92,   284,   154,   -92,   284,   284,   -92,    54,
     111,   118,   119,    14,   131,   138,   -92,   179,   121,   -12,
     -92,   -92,   -92,   -92,   -92,   -92,    23,   142,   143,   154,
     -92,   -92,   -92,   -92,   130,   121,   204,   -92,   143,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     4,     0,     0,     1,     7,     6,    10,     9,     8,
       3,     0,     2,     0,    33,     0,     0,     0,    32,     0,
      30,     0,     0,    31,    54,     0,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     0,    36,    42,    37,     0,
      52,    38,    39,    40,    41,     0,     0,     0,    70,     0,
       0,    49,     0,     0,     0,    35,     0,    48,     0,    28,
      79,    25,     0,    26,    63,     0,     0,     0,     0,    69,
       0,    53,    47,     0,    29,    51,    50,    27,     0,     0,
      12,    11,    13,    14,    15,    16,    18,     0,    19,    20,
       0,     0,     0,     0,    68,     0,     0,     0,     0,     0,
      34,    57,    60,    59,     0,    77,    61,    62,    71,     0,
      72,    66,    26,    47,     0,     0,    55,     0,    74,     0,
      58,    45,    46,    44,    56,    78,     0,     0,    73,     0,
      65,    21,    22,    75,     0,     0,     0,    67,    76,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   176,     2,   -92,   -92,   -92,   -92,   -46,   -92,
     -92,   -92,   -92,   -26,   -34,   -92,   -31,   -92,   -92,   -92,
     -92,    58,   -47,   -92,   -92,   -92,   -54,   -92,    43,   -92,
     -91,   -92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    10,    33,    91,    92,   133,    34,    64,    78,
      12,    16,    54,    35,    36,    37,    99,    38,    39,    40,
     116,    41,    65,   120,    42,    68,    69,   127,   128,    43,
     105,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    55,    70,    17,    71,    11,   111,    73,    56,     1,
      75,   129,    55,    94,    61,    79,    15,    80,    81,    82,
      83,    84,    85,    86,    87,     4,    31,    88,    89,    13,
      57,    58,    14,    63,   131,   132,    19,    24,    18,    21,
     103,    20,   110,   137,   106,   107,    98,   108,   109,    22,
      67,   113,    25,     6,     7,     8,     9,    80,    81,    82,
      83,    84,    85,    86,    87,    26,    23,    88,    89,    45,
      27,    28,    29,    30,    31,    47,    32,   -43,   117,    24,
      61,   121,   122,    55,    62,   118,     5,     6,     7,     8,
       9,    48,    49,    50,    25,     6,     7,     8,     9,    63,
      51,    52,    55,   136,    59,    24,    77,    26,    72,    74,
      66,    76,    27,    28,    29,    30,    31,    93,    32,    53,
      25,     6,     7,     8,     9,     5,     6,     7,     8,     9,
      24,    61,    66,    26,   -43,    62,    95,   100,    27,    28,
      29,    30,    31,    96,    32,    25,     6,     7,     8,     9,
     112,    98,   101,   104,   114,    24,   115,   119,    26,    60,
     124,   126,   123,    27,    28,    29,    30,    31,   134,    32,
      25,     6,     7,     8,     9,   135,     3,   130,   138,     0,
      24,     0,   -43,    26,     0,     0,     0,     0,    27,    28,
      29,    30,    31,     0,    32,    25,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    24,     0,   125,    26,     0,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
      25,     6,     7,     8,     9,     0,     5,     6,     7,     8,
       9,     0,   139,    26,     0,     0,     0,     0,    27,    28,
      29,    30,    31,     1,    32,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,    88,    89,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    90,    88,
      89,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    97,    88,    89,     0,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,   102,    88,    89
};

static const yytype_int16 yycheck[] =
{
      26,    35,    49,     5,    50,     3,    97,    53,     9,    33,
      56,    23,    46,    67,    21,    62,    14,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    38,    13,    14,    40,
      31,    32,    25,    40,    11,    12,    26,     1,    40,    24,
      87,    40,    96,   134,    91,    92,    32,    93,    95,    23,
      48,    98,    16,    17,    18,    19,    20,     3,     4,     5,
       6,     7,     8,     9,    10,    29,    27,    13,    14,    40,
      34,    35,    36,    37,    38,    25,    40,    41,   104,     1,
      21,   112,   113,   117,    25,    31,    16,    17,    18,    19,
      20,    25,    25,     9,    16,    17,    18,    19,    20,    40,
      40,    25,   136,   129,    24,     1,    21,    29,    22,    28,
      40,    40,    34,    35,    36,    37,    38,     9,    40,    41,
      16,    17,    18,    19,    20,    16,    17,    18,    19,    20,
       1,    21,    40,    29,    30,    25,    31,    31,    34,    35,
      36,    37,    38,    32,    40,    16,    17,    18,    19,    20,
      40,    32,    27,    23,    26,     1,     9,    39,    29,    30,
      22,    40,    31,    34,    35,    36,    37,    38,    26,    40,
      16,    17,    18,    19,    20,    32,     0,   119,   135,    -1,
       1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    40,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      16,    17,    18,    19,    20,    -1,    16,    17,    18,    19,
      20,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    33,    40,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    26,    13,
      14,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    26,    13,    14,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    26,    13,    14
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    45,    46,     0,    16,    17,    18,    19,    20,
      46,    47,    54,    40,    25,    47,    55,     5,    40,    26,
      40,    24,    23,    27,     1,    16,    29,    34,    35,    36,
      37,    38,    40,    47,    51,    57,    58,    59,    61,    62,
      63,    65,    68,    73,    75,    40,    57,    25,    25,    25,
       9,    40,    25,    41,    56,    58,     9,    31,    32,    24,
      30,    21,    25,    40,    52,    66,    40,    47,    69,    70,
      66,    52,    22,    52,    28,    52,    40,    21,    53,    66,
       3,     4,     5,     6,     7,     8,     9,    10,    13,    14,
      26,    48,    49,     9,    70,    31,    32,    26,    32,    60,
      31,    27,    26,    66,    23,    74,    66,    66,    52,    66,
      70,    74,    40,    66,    26,     9,    64,    57,    31,    39,
      67,    60,    60,    31,    22,    28,    40,    71,    72,    23,
      65,    11,    12,    50,    26,    32,    57,    74,    72,    28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    47,    47,    47,    47,
      47,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    55,    55,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    60,    60,    61,    62,
      62,    62,    62,    62,    62,    63,    64,    64,    65,    66,
      66,    66,    66,    66,    67,    67,    67,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    74,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     9,
       3,     4,     2,     0,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     3,     3,     0,     2,     2,
       3,     3,     1,     3,     1,     6,     2,     0,     6,     3,
       3,     3,     3,     1,     4,     2,     0,     9,     2,     1,
       0,     3,     3,     1,     0,     2,     3,     5,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: headers main  */
#line 41 "parser.y"
                      { 
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "program");
			no = (yyval.obj).tr;
}
#line 1413 "y.tab.c"
    break;

  case 3: /* headers: headers headers  */
#line 46 "parser.y"
                         {
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "headers headers");}
#line 1420 "y.tab.c"
    break;

  case 4: /* headers: INCLUDE  */
#line 48 "parser.y"
                         {
			(yyval.obj).tr = insertNode(NULL, NULL, "INCLUDE");}
#line 1427 "y.tab.c"
    break;

  case 5: /* headers: %empty  */
#line 50 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1433 "y.tab.c"
    break;

  case 6: /* dataType: INT  */
#line 52 "parser.y"
              {
			(yyval.obj).tr = insertNode(NULL, NULL, "INT");}
#line 1440 "y.tab.c"
    break;

  case 7: /* dataType: CHAR  */
#line 54 "parser.y"
                       {
			(yyval.obj).tr = insertNode(NULL, NULL, "CHAR");}
#line 1447 "y.tab.c"
    break;

  case 8: /* dataType: DOUBLE  */
#line 56 "parser.y"
                         {
			(yyval.obj).tr = insertNode(NULL, NULL, "DOUBLE");}
#line 1454 "y.tab.c"
    break;

  case 9: /* dataType: FLOAT  */
#line 58 "parser.y"
                        {
			(yyval.obj).tr = insertNode(NULL, NULL, "FLOAT");}
#line 1461 "y.tab.c"
    break;

  case 10: /* dataType: VOID  */
#line 60 "parser.y"
                       {
			(yyval.obj).tr = insertNode(NULL, NULL, "VOID");}
#line 1468 "y.tab.c"
    break;

  case 11: /* operator: SUM  */
#line 63 "parser.y"
              {
			(yyval.obj).tr = insertNode(NULL, NULL, "+");}
#line 1475 "y.tab.c"
    break;

  case 12: /* operator: SUB  */
#line 65 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "-");}
#line 1482 "y.tab.c"
    break;

  case 13: /* operator: MULT  */
#line 67 "parser.y"
                       {
			(yyval.obj).tr = insertNode(NULL, NULL, "*");}
#line 1489 "y.tab.c"
    break;

  case 14: /* operator: DIV  */
#line 69 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "/");}
#line 1496 "y.tab.c"
    break;

  case 15: /* operator: POW  */
#line 71 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "**");}
#line 1503 "y.tab.c"
    break;

  case 16: /* operator: MOD  */
#line 73 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "%");}
#line 1510 "y.tab.c"
    break;

  case 17: /* operator: COMPARATOR  */
#line 75 "parser.y"
                            {
			(yyval.obj).tr = insertNode(NULL, NULL, (yyvsp[0].obj).name);}
#line 1517 "y.tab.c"
    break;

  case 18: /* operator: ASSIGMENT  */
#line 77 "parser.y"
                            {
			(yyval.obj).tr = insertNode(NULL, NULL, "=");}
#line 1524 "y.tab.c"
    break;

  case 19: /* opLogical: AND  */
#line 80 "parser.y"
               {
			(yyval.obj).tr = insertNode(NULL, NULL, "&&");}
#line 1531 "y.tab.c"
    break;

  case 20: /* opLogical: OR  */
#line 82 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "||");}
#line 1538 "y.tab.c"
    break;

  case 21: /* opINCorDEC: INCR  */
#line 85 "parser.y"
                 {
			  (yyval.obj).tr = insertNode(NULL, NULL, "++");}
#line 1545 "y.tab.c"
    break;

  case 22: /* opINCorDEC: DECR  */
#line 87 "parser.y"
                             {
			  (yyval.obj).tr = insertNode(NULL, NULL, "--");}
#line 1552 "y.tab.c"
    break;

  case 23: /* PRorSC: PRINTF  */
#line 90 "parser.y"
               {
		  (yyval.obj).tr = insertNode(NULL, NULL, "PRINTF");}
#line 1559 "y.tab.c"
    break;

  case 24: /* PRorSC: SCANF  */
#line 92 "parser.y"
                  {
		  (yyval.obj).tr = insertNode(NULL, NULL, "SCANF");}
#line 1566 "y.tab.c"
    break;

  case 25: /* NUMorID: NUMBER  */
#line 95 "parser.y"
                {
	  		(yyval.obj).tr = insertNode(NULL, NULL, "NUMBER");}
#line 1573 "y.tab.c"
    break;

  case 26: /* NUMorID: ID  */
#line 97 "parser.y"
                    {
			(yyval.obj).tr = insertNode(NULL, NULL, 	"ID");}
#line 1580 "y.tab.c"
    break;

  case 27: /* NUMorEMP: NUMBER  */
#line 100 "parser.y"
                 {
			(yyval.obj).tr = insertNode(NULL, NULL, "NUMBER");}
#line 1587 "y.tab.c"
    break;

  case 28: /* NUMorEMP: %empty  */
#line 102 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1593 "y.tab.c"
    break;

  case 29: /* main: dataType ID O_PAR args C_PAR O_KEY content return C_KEY  */
#line 104 "parser.y"
                                                             {
		struct node *a = insertNode((yyvsp[-8].obj).tr, (yyvsp[-5].obj).tr, "cab");
		struct node *b = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "body");
		(yyval.obj).tr = insertNode(a, b, "main");
}
#line 1603 "y.tab.c"
    break;

  case 30: /* args: dataType MULT ID  */
#line 110 "parser.y"
                       { 
		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, NULL, "dataType *ID");}
#line 1610 "y.tab.c"
    break;

  case 31: /* args: dataType ID O_BRAC C_BRAC  */
#line 112 "parser.y"
                                    { 
		(yyval.obj).tr = insertNode((yyvsp[-3].obj).tr, NULL, "dataType ID[]");}
#line 1617 "y.tab.c"
    break;

  case 32: /* args: dataType ID  */
#line 114 "parser.y"
                      { 
		(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "dataType ID");}
#line 1624 "y.tab.c"
    break;

  case 33: /* args: %empty  */
#line 116 "parser.y"
                          {(yyval.obj).tr = NULL;}
#line 1630 "y.tab.c"
    break;

  case 34: /* return: RETURN NUMorID SEMICOLON  */
#line 118 "parser.y"
                                 {
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "RETURN NUMorID;");
		}
#line 1638 "y.tab.c"
    break;

  case 35: /* content: content cont  */
#line 122 "parser.y"
                      { 
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "content cont");}
#line 1645 "y.tab.c"
    break;

  case 36: /* content: cont  */
#line 124 "parser.y"
                      {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "cont");
		 }
#line 1653 "y.tab.c"
    break;

  case 37: /* cont: attSTATE  */
#line 128 "parser.y"
                { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTATE");}
#line 1660 "y.tab.c"
    break;

  case 38: /* cont: ifSTATE  */
#line 130 "parser.y"
                        { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "ifSTATE");}
#line 1667 "y.tab.c"
    break;

  case 39: /* cont: forSTATE  */
#line 132 "parser.y"
                         { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "forSTATE");}
#line 1674 "y.tab.c"
    break;

  case 40: /* cont: whileSTATE  */
#line 134 "parser.y"
                           { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "whileSTATE");}
#line 1681 "y.tab.c"
    break;

  case 41: /* cont: comentSTATE  */
#line 136 "parser.y"
                             { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "comentSTATE");}
#line 1688 "y.tab.c"
    break;

  case 42: /* cont: PRorSC_STATE  */
#line 138 "parser.y"
                             { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "PRorSC_STATE");}
#line 1695 "y.tab.c"
    break;

  case 43: /* cont: %empty  */
#line 140 "parser.y"
                          {(yyval.obj).tr = NULL;}
#line 1701 "y.tab.c"
    break;

  case 44: /* PRorSC_STATE: PRorSC O_PAR STR bodyPRorSC C_PAR SEMICOLON  */
#line 142 "parser.y"
                                                          {
				(yyval.obj).tr = insertNode((yyvsp[-5].obj).tr, (yyvsp[-2].obj).tr, "PRorSC (STR bodyPRorSC);");
}
#line 1709 "y.tab.c"
    break;

  case 45: /* bodyPRorSC: COMMA ID bodyPRorSC  */
#line 146 "parser.y"
                                {
				 (yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, ", ID bodyPRorSC");}
#line 1716 "y.tab.c"
    break;

  case 46: /* bodyPRorSC: COMMA expCOND bodyPRorSC  */
#line 148 "parser.y"
                                                 { 
				(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, ", expCOND bodyPRorSC");}
#line 1723 "y.tab.c"
    break;

  case 47: /* bodyPRorSC: %empty  */
#line 150 "parser.y"
                                           {(yyval.obj).tr = NULL;}
#line 1729 "y.tab.c"
    break;

  case 48: /* attSTATE: bodyATT SEMICOLON  */
#line 152 "parser.y"
                            {
	(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "bodyATT;");
}
#line 1737 "y.tab.c"
    break;

  case 49: /* bodyATT: dataType ID  */
#line 156 "parser.y"
                     {
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "dataType ID"); }
#line 1744 "y.tab.c"
    break;

  case 50: /* bodyATT: bodyATT COMMA ID  */
#line 158 "parser.y"
                                  {
			(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, NULL, "bodyATT, ID");}
#line 1751 "y.tab.c"
    break;

  case 51: /* bodyATT: bodyATT ASSIGMENT NUMorID  */
#line 160 "parser.y"
                                          {
			(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "bodyATT = NUMorID");}
#line 1758 "y.tab.c"
    break;

  case 52: /* bodyATT: attSTR  */
#line 162 "parser.y"
                       {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTR"); }
#line 1765 "y.tab.c"
    break;

  case 53: /* bodyATT: ID ASSIGMENT NUMorID  */
#line 164 "parser.y"
                                     {
			struct node *a = insertNode(NULL, NULL, (yyvsp[0].obj).name); 
			struct node *b = insertNode(NULL, NULL, (yyvsp[-1].obj).name); 
			(yyval.obj).tr = insertNode(b, a, (yyvsp[-2].obj).name);}
#line 1774 "y.tab.c"
    break;

  case 54: /* bodyATT: error  */
#line 168 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
}
#line 1783 "y.tab.c"
    break;

  case 55: /* attSTR: CHAR ID O_BRAC NUMorEMP C_BRAC bodySTR  */
#line 174 "parser.y"
                                              {
	(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "CHAR ID NUMorEMP bodySTR ");
}
#line 1791 "y.tab.c"
    break;

  case 56: /* bodySTR: ASSIGMENT STR  */
#line 178 "parser.y"
                       { 
			struct node *a = insertNode(NULL, NULL, (yyvsp[0].obj).name); 
			(yyval.obj).tr = insertNode(a, NULL, (yyvsp[-1].obj).name);}
#line 1799 "y.tab.c"
    break;

  case 57: /* bodySTR: %empty  */
#line 181 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1805 "y.tab.c"
    break;

  case 58: /* ifSTATE: IF O_PAR expCOND C_PAR bodyLOOP elseSTATE  */
#line 183 "parser.y"
                                                   {
			struct node * init = insertNode((yyvsp[-3].obj).tr, (yyvsp[-1].obj).tr, "IF (expCOND) bodyLOOP");
			(yyval.obj).tr = insertNode(init, (yyvsp[0].obj).tr, "bodyIF");
}
#line 1814 "y.tab.c"
    break;

  case 59: /* expCOND: expCOND COMPARATOR expCOND  */
#line 188 "parser.y"
                                    { 
		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "expCOND COMP expCOND");}
#line 1821 "y.tab.c"
    break;

  case 60: /* expCOND: O_PAR expCOND C_PAR  */
#line 190 "parser.y"
                                     { 
		(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "O_PAR expCOND C_PAR");}
#line 1828 "y.tab.c"
    break;

  case 61: /* expCOND: expCOND operator expCOND  */
#line 192 "parser.y"
                                          { 
		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "expCOND operator expCOND");}
#line 1835 "y.tab.c"
    break;

  case 62: /* expCOND: expCOND opLogical expCOND  */
#line 194 "parser.y"
                                           { 
		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "expCOND opLogical expCOND");}
#line 1842 "y.tab.c"
    break;

  case 63: /* expCOND: NUMorID  */
#line 196 "parser.y"
                         {(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "NUMorID");}
#line 1848 "y.tab.c"
    break;

  case 64: /* elseSTATE: ELSE O_KEY content C_KEY  */
#line 198 "parser.y"
                                     {
				(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "ELSE O_KEY content C_KEY"); }
#line 1855 "y.tab.c"
    break;

  case 65: /* elseSTATE: ELSE ifSTATE  */
#line 200 "parser.y"
                                     {
				(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "else ifSTATE"); }
#line 1862 "y.tab.c"
    break;

  case 66: /* elseSTATE: %empty  */
#line 202 "parser.y"
                                {(yyval.obj).tr = NULL;}
#line 1868 "y.tab.c"
    break;

  case 67: /* forSTATE: FOR O_PAR forINIT SEMICOLON expCOND SEMICOLON forUpdate C_PAR bodyLOOP  */
#line 204 "parser.y"
                                                                                 {
				struct node* init = insertNode(NULL, (yyvsp[-6].obj).tr, "forINIT");
				struct node* cond = insertNode((yyvsp[-4].obj).tr, (yyvsp[-2].obj).tr, "forMID");
				struct node* f = insertNode(init, cond, "for");
				(yyval.obj).tr = insertNode(f, (yyvsp[0].obj).tr, "forSTATE");
}
#line 1879 "y.tab.c"
    break;

  case 68: /* forINIT: dataType InitFor  */
#line 211 "parser.y"
                          {
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "dataType InitFor");}
#line 1886 "y.tab.c"
    break;

  case 69: /* forINIT: InitFor  */
#line 213 "parser.y"
                         {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "InitFor");}
#line 1893 "y.tab.c"
    break;

  case 70: /* forINIT: %empty  */
#line 215 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1899 "y.tab.c"
    break;

  case 71: /* InitFor: ID ASSIGMENT NUMorID  */
#line 218 "parser.y"
                              { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "InitFor NUMorID");}
#line 1906 "y.tab.c"
    break;

  case 72: /* InitFor: InitFor COMMA InitFor  */
#line 220 "parser.y"
                                      { 
			(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "InitFor, InitFor"); 
}
#line 1914 "y.tab.c"
    break;

  case 73: /* forUpdate: UpdateDF  */
#line 224 "parser.y"
                    { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "forUpdate");}
#line 1921 "y.tab.c"
    break;

  case 74: /* forUpdate: %empty  */
#line 226 "parser.y"
                        {(yyval.obj).tr = NULL;}
#line 1927 "y.tab.c"
    break;

  case 75: /* UpdateDF: ID opINCorDEC  */
#line 228 "parser.y"
                        { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "ID opINCorDEC");}
#line 1934 "y.tab.c"
    break;

  case 76: /* UpdateDF: UpdateDF COMMA UpdateDF  */
#line 230 "parser.y"
                                  { 
			(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "UpdateDF, UpdateDF"); 
}
#line 1942 "y.tab.c"
    break;

  case 77: /* whileSTATE: WHILE O_PAR expCOND C_PAR bodyLOOP  */
#line 234 "parser.y"
                                              { 
				(yyval.obj).tr = insertNode(NULL, (yyvsp[-2].obj).tr, "whileSTATE"); 
}
#line 1950 "y.tab.c"
    break;

  case 78: /* bodyLOOP: O_KEY content C_KEY  */
#line 238 "parser.y"
                             { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "bodyLOOP"); 
}
#line 1958 "y.tab.c"
    break;

  case 79: /* comentSTATE: O_COMENT content C_COMENT  */
#line 242 "parser.y"
                                      { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "comentSTATE"); 
}
#line 1966 "y.tab.c"
    break;


#line 1970 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 246 "parser.y"


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
