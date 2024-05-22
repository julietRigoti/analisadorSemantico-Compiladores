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

#line 88 "y.tab.c"

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

		struct teste{
			char name[MAX*2];
			int type;
			int category;
			int valueInt;
			double valueDouble;
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
  YYSYMBOL_ASSIGMENT = 7,                  /* ASSIGMENT  */
  YYSYMBOL_COMPARATOR = 8,                 /* COMPARATOR  */
  YYSYMBOL_INCR = 9,                       /* INCR  */
  YYSYMBOL_DECR = 10,                      /* DECR  */
  YYSYMBOL_AND = 11,                       /* AND  */
  YYSYMBOL_OR = 12,                        /* OR  */
  YYSYMBOL_NOT = 13,                       /* NOT  */
  YYSYMBOL_INT = 14,                       /* INT  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 18,                    /* DOUBLE  */
  YYSYMBOL_INTEGER = 19,                   /* INTEGER  */
  YYSYMBOL_REAL = 20,                      /* REAL  */
  YYSYMBOL_STR = 21,                       /* STR  */
  YYSYMBOL_O_KEY = 22,                     /* O_KEY  */
  YYSYMBOL_O_BRAC = 23,                    /* O_BRAC  */
  YYSYMBOL_O_PAR = 24,                     /* O_PAR  */
  YYSYMBOL_C_PAR = 25,                     /* C_PAR  */
  YYSYMBOL_C_BRAC = 26,                    /* C_BRAC  */
  YYSYMBOL_C_KEY = 27,                     /* C_KEY  */
  YYSYMBOL_O_COMENT = 28,                  /* O_COMENT  */
  YYSYMBOL_C_COMENT = 29,                  /* C_COMENT  */
  YYSYMBOL_SEMICOLON = 30,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_INCLUDE = 32,                   /* INCLUDE  */
  YYSYMBOL_PRINTF = 33,                    /* PRINTF  */
  YYSYMBOL_SCANF = 34,                     /* SCANF  */
  YYSYMBOL_RETURN = 35,                    /* RETURN  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_ID = 40,                        /* ID  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_main = 43,                      /* main  */
  YYSYMBOL_return = 44,                    /* return  */
  YYSYMBOL_headers = 45,                   /* headers  */
  YYSYMBOL_content = 46,                   /* content  */
  YYSYMBOL_cont = 47,                      /* cont  */
  YYSYMBOL_numNat = 48,                    /* numNat  */
  YYSYMBOL_dataType = 49,                  /* dataType  */
  YYSYMBOL_opINCorDEC = 50,                /* opINCorDEC  */
  YYSYMBOL_PRorSC = 51,                    /* PRorSC  */
  YYSYMBOL_NUMorEMP = 52,                  /* NUMorEMP  */
  YYSYMBOL_args = 53,                      /* args  */
  YYSYMBOL_PRorSC_STATE = 54,              /* PRorSC_STATE  */
  YYSYMBOL_bodyPRorSC = 55,                /* bodyPRorSC  */
  YYSYMBOL_attSTATE = 56,                  /* attSTATE  */
  YYSYMBOL_bodyATT = 57,                   /* bodyATT  */
  YYSYMBOL_stateATTEXP = 58,               /* stateATTEXP  */
  YYSYMBOL_attSTR = 59,                    /* attSTR  */
  YYSYMBOL_bodySTR = 60,                   /* bodySTR  */
  YYSYMBOL_expCOND = 61,                   /* expCOND  */
  YYSYMBOL_ifSTATE = 62,                   /* ifSTATE  */
  YYSYMBOL_elseSTATE = 63,                 /* elseSTATE  */
  YYSYMBOL_forSTATE = 64,                  /* forSTATE  */
  YYSYMBOL_forINIT = 65,                   /* forINIT  */
  YYSYMBOL_forUpdate = 66,                 /* forUpdate  */
  YYSYMBOL_UpdateDF = 67,                  /* UpdateDF  */
  YYSYMBOL_whileSTATE = 68,                /* whileSTATE  */
  YYSYMBOL_bodyLOOP = 69,                  /* bodyLOOP  */
  YYSYMBOL_comentSTATE = 70                /* comentSTATE  */
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
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    53,    68,    72,    74,    79,    81,    85,
      88,    91,    94,    97,   100,   103,   106,   110,   115,   120,
     126,   129,   132,   135,   138,   151,   154,   159,   163,   180,
     186,   190,   200,   211,   221,   225,   229,   231,   233,   237,
     241,   256,   285,   321,   326,   352,   373,   378,   392,   396,
     401,   424,   445,   466,   485,   488,   494,   502,   507,   512,
     515,   518,   522,   529,   532,   536,   539,   543,   546,   550,
     554,   558
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
  "DIV", "ASSIGMENT", "COMPARATOR", "INCR", "DECR", "AND", "OR", "NOT",
  "INT", "CHAR", "VOID", "FLOAT", "DOUBLE", "INTEGER", "REAL", "STR",
  "O_KEY", "O_BRAC", "O_PAR", "C_PAR", "C_BRAC", "C_KEY", "O_COMENT",
  "C_COMENT", "SEMICOLON", "COMMA", "INCLUDE", "PRINTF", "SCANF", "RETURN",
  "WHILE", "FOR", "IF", "ELSE", "ID", "$accept", "program", "main",
  "return", "headers", "content", "cont", "numNat", "dataType",
  "opINCorDEC", "PRorSC", "NUMorEMP", "args", "PRorSC_STATE", "bodyPRorSC",
  "attSTATE", "bodyATT", "stateATTEXP", "attSTR", "bodySTR", "expCOND",
  "ifSTATE", "elseSTATE", "forSTATE", "forINIT", "forUpdate", "UpdateDF",
  "whileSTATE", "bodyLOOP", "comentSTATE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,   -85,    29,   244,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -21,    -6,    20,   249,     2,    39,    32,    52,    64,
     -85,    58,    45,   -85,   -16,    73,   -85,   -85,    74,    76,
      80,    98,   102,   -85,    68,   108,   -85,   -85,   -11,   -85,
     -85,   -85,   -85,   -85,   -85,   130,     7,   111,     7,     7,
       7,    87,   -85,    10,   112,   -85,    94,   -85,   -85,   -85,
     -85,   -85,     7,   -85,   -85,    90,   -85,   109,   119,   125,
     118,    62,   148,   -85,     7,    37,   126,   -85,   232,     7,
       7,     7,     7,   134,   138,     7,   134,   -85,   -85,   176,
     -85,   136,    31,   140,   -85,   -85,   -85,    36,    36,   159,
     -85,   204,   132,   -85,   162,   -15,    18,   142,   187,   143,
     -13,   -85,   163,   -85,   -85,   -85,   -85,   -85,    44,   160,
     158,   159,   -85,   -85,   -85,   -85,   -85,   134,   143,   215,
     -85,   158,   -85
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     0,     0,     1,    20,    21,    24,    23,    22,
       2,     5,     0,     0,    34,     0,     0,     0,    33,     0,
      31,     0,     0,    32,    46,     0,    27,    28,     0,     0,
       0,     0,     0,     8,     0,     0,    15,     9,     0,    10,
      42,    11,    12,    13,    14,     0,     0,     0,     0,     0,
       0,     0,     7,    40,     0,    39,     0,    71,    57,    17,
      18,    19,     0,    55,    56,     0,    43,     0,    63,     0,
       0,     0,     0,     3,     0,    30,    38,    41,     0,     0,
       0,     0,     0,     0,    40,     0,     0,    45,     4,     0,
      29,     0,     0,     0,    54,    51,    50,    52,    53,     0,
      69,     0,    61,    44,    49,    55,    38,     0,     0,    66,
       0,    58,     0,    47,    36,    37,    35,    70,     0,     0,
      65,     0,    60,    48,    25,    26,    67,     0,     0,     0,
      62,    68,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   190,   -22,   -32,   116,    -2,   -85,
     -85,   -85,   -85,   -85,   -36,   -85,   147,   -85,   -85,   -85,
     -44,    88,   -85,   -85,   -85,   -85,    72,   -85,   -84,   -85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    10,    51,    11,    32,    33,    64,    34,   126,
      35,    91,    16,    36,    93,    37,    38,    39,    40,   113,
      65,    41,   111,    42,    69,   119,   120,    43,   100,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    12,   102,    45,    70,    71,    72,    17,    58,   121,
     -38,     1,    15,    52,   -43,   -43,    92,    74,    78,    55,
      56,    79,    80,    81,    82,    30,    59,    60,    61,     4,
      89,    62,    58,    75,    13,    95,    96,    97,    98,    79,
      80,   101,    18,   130,    14,    67,    24,    63,   106,    92,
      59,    60,    61,   124,   125,    62,    59,    60,    61,     5,
       6,     7,     8,     9,    19,    79,    80,    81,    82,   114,
     115,   105,    20,    25,    24,    21,    52,   108,    26,    27,
     -16,    28,    29,    30,    23,    31,    22,     5,     6,     7,
       8,     9,    87,    79,    80,    81,    82,    52,    46,   129,
      47,    25,   -16,    24,    48,    49,    26,    27,    53,    28,
      29,    30,    66,    31,    73,    83,     5,     6,     7,     8,
       9,    79,    80,    81,    82,     5,     6,     7,     8,     9,
      25,    24,    54,    76,    77,    26,    27,    50,    28,    29,
      30,   -64,    31,    86,     5,     6,     7,     8,     9,    84,
      56,    79,    80,    81,    82,    85,    99,    92,    25,    57,
      24,    75,   104,    26,    27,   107,    28,    29,    30,   112,
      31,   110,   116,     5,     6,     7,     8,     9,    88,    79,
      80,    81,    82,   118,   123,   127,   -16,    25,    24,   128,
       3,    90,    26,    27,    68,    28,    29,    30,   122,    31,
     131,     5,     6,     7,     8,     9,   103,    79,    80,    81,
      82,     0,     0,     0,   117,    25,    24,     0,     0,     0,
      26,    27,     0,    28,    29,    30,     0,    31,     0,     5,
       6,     7,     8,     9,   109,    79,    80,    81,    82,     0,
       0,     0,   132,    25,     0,     0,     0,     0,    26,    27,
       0,    28,    29,    30,     0,    31,     0,    94,     5,     6,
       7,     8,     9,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     1
};

static const yytype_int16 yycheck[] =
{
      32,     3,    86,    25,    48,    49,    50,     5,     1,    22,
      25,    32,    14,    45,    30,    31,    31,     7,    62,    30,
      31,     3,     4,     5,     6,    38,    19,    20,    21,     0,
      74,    24,     1,    23,    40,    79,    80,    81,    82,     3,
       4,    85,    40,   127,    24,    47,     1,    40,    92,    31,
      19,    20,    21,     9,    10,    24,    19,    20,    21,    14,
      15,    16,    17,    18,    25,     3,     4,     5,     6,   105,
     106,    40,    40,    28,     1,    23,   108,    99,    33,    34,
      35,    36,    37,    38,    26,    40,    22,    14,    15,    16,
      17,    18,    30,     3,     4,     5,     6,   129,    24,   121,
      24,    28,    29,     1,    24,     7,    33,    34,    40,    36,
      37,    38,     1,    40,    27,    25,    14,    15,    16,    17,
      18,     3,     4,     5,     6,    14,    15,    16,    17,    18,
      28,     1,    24,    21,    40,    33,    34,    35,    36,    37,
      38,    30,    40,    25,    14,    15,    16,    17,    18,    40,
      31,     3,     4,     5,     6,    30,    22,    31,    28,    29,
       1,    23,    26,    33,    34,    25,    36,    37,    38,     7,
      40,    39,    30,    14,    15,    16,    17,    18,    30,     3,
       4,     5,     6,    40,    21,    25,    27,    28,     1,    31,
       0,    75,    33,    34,    47,    36,    37,    38,   110,    40,
     128,    14,    15,    16,    17,    18,    30,     3,     4,     5,
       6,    -1,    -1,    -1,    27,    28,     1,    -1,    -1,    -1,
      33,    34,    -1,    36,    37,    38,    -1,    40,    -1,    14,
      15,    16,    17,    18,    30,     3,     4,     5,     6,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      -1,    36,    37,    38,    -1,    40,    -1,    25,    14,    15,
      16,    17,    18,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    42,    45,     0,    14,    15,    16,    17,    18,
      43,    45,    49,    40,    24,    49,    53,     5,    40,    25,
      40,    23,    22,    26,     1,    28,    33,    34,    36,    37,
      38,    40,    46,    47,    49,    51,    54,    56,    57,    58,
      59,    62,    64,    68,    70,    46,    24,    24,    24,     7,
      35,    44,    47,    40,    24,    30,    31,    29,     1,    19,
      20,    21,    24,    40,    48,    61,     1,    49,    57,    65,
      61,    61,    61,    27,     7,    23,    21,    40,    61,     3,
       4,     5,     6,    25,    40,    30,    25,    30,    30,    61,
      48,    52,    31,    55,    25,    61,    61,    61,    61,    22,
      69,    61,    69,    30,    26,    40,    61,    25,    46,    30,
      39,    63,     7,    60,    55,    55,    30,    27,    40,    66,
      67,    22,    62,    21,     9,    10,    50,    25,    31,    46,
      69,    67,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    44,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    48,    48,    48,
      49,    49,    49,    49,    49,    50,    50,    51,    51,    52,
      52,    53,    53,    53,    53,    54,    55,    55,    55,    56,
      57,    57,    57,    57,    58,    58,    58,    59,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    63,
      63,    63,    64,    65,    65,    66,    66,    67,    67,    68,
      69,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     9,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     4,     2,     0,     6,     3,     3,     0,     2,
       2,     3,     1,     1,     5,     4,     1,     6,     2,     0,
       3,     3,     3,     3,     3,     1,     1,     1,     6,     4,
       2,     0,     9,     1,     0,     1,     0,     2,     3,     5,
       3,     3
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
#line 48 "parser.y"
                      { 
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "program");
			no = (yyval.obj).tr;
}
#line 1401 "y.tab.c"
    break;

  case 3: /* main: dataType ID O_PAR args C_PAR O_KEY content return C_KEY  */
#line 53 "parser.y"
                                                             { //main é para estar na tabela reservada
		struct cell *temp = SearchParser(H, (yyvsp[-7].obj).name);
		if(temp->type == 4){
			setType(H, (yyvsp[-7].obj).name, (yyvsp[-8].obj).type);
			setCategory(H, (yyvsp[-7].obj).name, 9);
			struct node *a = insertNode((yyvsp[-8].obj).tr, (yyvsp[-5].obj).tr, "cab");
			struct node *b = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "body");
			(yyval.obj).tr = insertNode(a, b, "main");
		}
		else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		
}
#line 1420 "y.tab.c"
    break;

  case 4: /* return: RETURN expCOND SEMICOLON  */
#line 68 "parser.y"
                                 {
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "RETURN expCOND;");
}
#line 1428 "y.tab.c"
    break;

  case 5: /* headers: headers headers  */
#line 72 "parser.y"
                         {
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "headers headers");}
#line 1435 "y.tab.c"
    break;

  case 6: /* headers: INCLUDE  */
#line 74 "parser.y"
                         {
			setCategory(HT, (yyvsp[0].obj).name, 12);
			(yyval.obj).tr = insertNode(NULL, NULL, "INCLUDE");
}
#line 1444 "y.tab.c"
    break;

  case 7: /* content: content cont  */
#line 79 "parser.y"
                      { 
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "content cont");}
#line 1451 "y.tab.c"
    break;

  case 8: /* content: cont  */
#line 81 "parser.y"
                      {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "cont");
}
#line 1459 "y.tab.c"
    break;

  case 9: /* cont: attSTATE  */
#line 85 "parser.y"
                { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTATE");
		}
#line 1467 "y.tab.c"
    break;

  case 10: /* cont: stateATTEXP  */
#line 88 "parser.y"
                           { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTATEXP");
		}
#line 1475 "y.tab.c"
    break;

  case 11: /* cont: ifSTATE  */
#line 91 "parser.y"
                        { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "ifSTATE");
		}
#line 1483 "y.tab.c"
    break;

  case 12: /* cont: forSTATE  */
#line 94 "parser.y"
                         { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "forSTATE");
		}
#line 1491 "y.tab.c"
    break;

  case 13: /* cont: whileSTATE  */
#line 97 "parser.y"
                           { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "whileSTATE");
		}
#line 1499 "y.tab.c"
    break;

  case 14: /* cont: comentSTATE  */
#line 100 "parser.y"
                             { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "comentSTATE");
		}
#line 1507 "y.tab.c"
    break;

  case 15: /* cont: PRorSC_STATE  */
#line 103 "parser.y"
                             { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "PRorSC_STATE");
		}
#line 1515 "y.tab.c"
    break;

  case 16: /* cont: %empty  */
#line 106 "parser.y"
                         {
			(yyval.obj).tr = NULL;
}
#line 1523 "y.tab.c"
    break;

  case 17: /* numNat: INTEGER  */
#line 110 "parser.y"
                {
			(yyval.obj).type = 1;
			struct node *temp = insertNode(NULL, NULL, yytext);
			(yyval.obj).tr = insertNode(temp, NULL, "INT");
	}
#line 1533 "y.tab.c"
    break;

  case 18: /* numNat: REAL  */
#line 115 "parser.y"
             {
			(yyval.obj).type = 2;
			struct node *temp = insertNode(NULL, NULL, yytext);
			(yyval.obj).tr = insertNode(temp, NULL, "REAL");
	}
#line 1543 "y.tab.c"
    break;

  case 19: /* numNat: STR  */
#line 120 "parser.y"
            {
			(yyval.obj).type = 3;
			struct node *temp = insertNode(NULL, NULL, yytext);
			(yyval.obj).tr = insertNode(temp, NULL, "STR");
}
#line 1553 "y.tab.c"
    break;

  case 20: /* dataType: INT  */
#line 126 "parser.y"
              {
			(yyval.obj).type = 1;
			(yyval.obj).tr = insertNode(NULL, NULL, "INT");}
#line 1561 "y.tab.c"
    break;

  case 21: /* dataType: CHAR  */
#line 129 "parser.y"
                       {
			(yyval.obj).type = 6;
			(yyval.obj).tr = insertNode(NULL, NULL, "CHAR");}
#line 1569 "y.tab.c"
    break;

  case 22: /* dataType: DOUBLE  */
#line 132 "parser.y"
                         {
			(yyval.obj).type = 2;
			(yyval.obj).tr = insertNode(NULL, NULL, "DOUBLE");}
#line 1577 "y.tab.c"
    break;

  case 23: /* dataType: FLOAT  */
#line 135 "parser.y"
                        {
			(yyval.obj).type = 2;
			(yyval.obj).tr = insertNode(NULL, NULL, "FLOAT");}
#line 1585 "y.tab.c"
    break;

  case 24: /* dataType: VOID  */
#line 138 "parser.y"
                       {
			(yyval.obj).type = 7;
			(yyval.obj).tr = insertNode(NULL, NULL, "VOID");
}
#line 1594 "y.tab.c"
    break;

  case 25: /* opINCorDEC: INCR  */
#line 151 "parser.y"
                 {
			  setCategory(H, (yyvsp[0].obj).name, 13);
			  (yyval.obj).tr = insertNode(NULL, NULL, "++");}
#line 1602 "y.tab.c"
    break;

  case 26: /* opINCorDEC: DECR  */
#line 154 "parser.y"
                             {
				setCategory(H, (yyvsp[0].obj).name, 13);
			  (yyval.obj).tr = insertNode(NULL, NULL, "--");
}
#line 1611 "y.tab.c"
    break;

  case 27: /* PRorSC: PRINTF  */
#line 159 "parser.y"
               {
			setType(HT, (yyvsp[0].obj).name, 5);
			
		  (yyval.obj).tr = insertNode(NULL, NULL, "PRINTF");}
#line 1620 "y.tab.c"
    break;

  case 28: /* PRorSC: SCANF  */
#line 163 "parser.y"
                  {
			setType(HT, (yyvsp[0].obj).name, 5);
			
		  (yyval.obj).tr = insertNode(NULL, NULL, "SCANF");
}
#line 1630 "y.tab.c"
    break;

  case 29: /* NUMorEMP: numNat  */
#line 180 "parser.y"
                 {
			setType(H, (yyvsp[0].obj).name, 1);
			setCategory(H, (yyvsp[0].obj).name, 8);
			getValue(H, (yyvsp[0].obj).name, (yyvsp[0].obj).name);
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "NUMBER");
			}
#line 1641 "y.tab.c"
    break;

  case 30: /* NUMorEMP: %empty  */
#line 186 "parser.y"
                                  {
				(yyval.obj).tr = NULL;
}
#line 1649 "y.tab.c"
    break;

  case 31: /* args: dataType MULT ID  */
#line 190 "parser.y"
                       {
		struct cell *temp = SearchParser(H, (yyvsp[0].obj).name);
		if(temp->type == 4){
			setType(H, (yyvsp[0].obj).name, (yyvsp[-2].obj).type);
			setCategory(H, (yyvsp[0].obj).name, 9);
			(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, NULL, "dataType *ID");
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		 }
		}
#line 1664 "y.tab.c"
    break;

  case 32: /* args: dataType ID O_BRAC C_BRAC  */
#line 200 "parser.y"
                                    { 
		struct cell *temp = SearchParser(H, (yyvsp[-2].obj).name);
		if(temp->type == 4){
			setType(H, (yyvsp[-2].obj).name, (yyvsp[-3].obj).type);
			setCategory(H, (yyvsp[-2].obj).name, 9);

			(yyval.obj).tr = insertNode((yyvsp[-3].obj).tr, NULL, "dataType ID[]");
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		 }
		}
#line 1680 "y.tab.c"
    break;

  case 33: /* args: dataType ID  */
#line 211 "parser.y"
                      { 
		struct cell *temp = SearchParser(H, (yyvsp[0].obj).name);
		if(temp->type == 4){
			setType(H, (yyvsp[0].obj).name, (yyvsp[-1].obj).type);
			setCategory(H, (yyvsp[0].obj).name, 14);
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "dataType ID");
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		 }
		}
#line 1695 "y.tab.c"
    break;

  case 34: /* args: %empty  */
#line 221 "parser.y"
                         {
			(yyval.obj).tr = NULL;
}
#line 1703 "y.tab.c"
    break;

  case 35: /* PRorSC_STATE: PRorSC O_PAR STR bodyPRorSC C_PAR SEMICOLON  */
#line 225 "parser.y"
                                                          {
				(yyval.obj).tr = insertNode((yyvsp[-5].obj).tr, (yyvsp[-2].obj).tr, "PRorSC (STR bodyPRorSC);");
}
#line 1711 "y.tab.c"
    break;

  case 36: /* bodyPRorSC: COMMA ID bodyPRorSC  */
#line 229 "parser.y"
                                {
				 (yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, ", ID bodyPRorSC");}
#line 1718 "y.tab.c"
    break;

  case 37: /* bodyPRorSC: COMMA expCOND bodyPRorSC  */
#line 231 "parser.y"
                                                 { 
				(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, ", expCOND bodyPRorSC");}
#line 1725 "y.tab.c"
    break;

  case 38: /* bodyPRorSC: %empty  */
#line 233 "parser.y"
                                          {
					(yyval.obj).tr = NULL;
}
#line 1733 "y.tab.c"
    break;

  case 39: /* attSTATE: bodyATT SEMICOLON  */
#line 237 "parser.y"
                            {
	(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "bodyATT;");
}
#line 1741 "y.tab.c"
    break;

  case 40: /* bodyATT: dataType ID  */
#line 241 "parser.y"
                     {
			//printf("Entrou na 1°regra(dataType %s)\n", $2.name);
			struct cell *temp = SearchParser(H, (yyvsp[0].obj).name);
			if(temp->type == 4){
				//printf("$1.type = %d\n", $1.type);
				setType(H, (yyvsp[0].obj).name, (yyvsp[-1].obj).type);
				setCategory(H, (yyvsp[0].obj).name, 9);
				(yyval.obj).type = (yyvsp[-1].obj).type;
				strcpy((yyval.obj).name, (yyvsp[0].obj).name);
				(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "dataType ID");
			}
			else {
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
		}
#line 1761 "y.tab.c"
    break;

  case 41: /* bodyATT: bodyATT COMMA ID  */
#line 256 "parser.y"
                                  {
			//printf("Entrou na 2°regra(bodyATT COMMA %s)\n", $2.name);
			struct cell *temp = SearchParser(H, (yyvsp[0].obj).name);
			if(temp->type == 4){
				setCategory(H, (yyvsp[0].obj).name, 9);
				setType(H, (yyvsp[0].obj).name, (yyvsp[-2].obj).type);
				(yyval.obj).type = (yyvsp[-2].obj).type;
				strcpy((yyval.obj).name, (yyvsp[0].obj).name);
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, NULL, "bodyATT, ID");
			}
			else {
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}	
		}
#line 1780 "y.tab.c"
    break;

  case 42: /* bodyATT: attSTR  */
#line 285 "parser.y"
                       {
			//printf("Entrou na 4°regra(attSTR)\n");
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTR"); 
		}
#line 1789 "y.tab.c"
    break;

  case 43: /* bodyATT: error  */
#line 321 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
}
#line 1798 "y.tab.c"
    break;

  case 44: /* stateATTEXP: dataType ID ASSIGMENT expCOND SEMICOLON  */
#line 326 "parser.y"
                                                    {		
	//printf("Entrou na 1°regra(dataType %s ASSIGMENT expCOND)\n", $2.name);

		struct cell *temp = SearchParser(H, (yyvsp[-3].obj).name);
		if(temp->type == 4){
			//printf("Entrou no if que temp->type é igual de 4 (type = %d)\n", temp->type);
			//printf("dataType = %d\n", $1.type);
			setType(H, (yyvsp[-3].obj).name, (yyvsp[-4].obj).type);
			setCategory(H, (yyvsp[-3].obj).name, 9);
			if((yyvsp[-4].obj).type == (yyvsp[-1].obj).type){
				(yyval.obj).type = (yyvsp[-1].obj).type;
				getValue(H, (yyvsp[-3].obj).name, (yyvsp[-1].obj).name);
				//printf("temp->%s = %d\n", temp->name, temp->iVal);
				(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "dataType ID = expCOND;");
				(yyval.obj).tr = insertNode((yyvsp[-4].obj).tr, (yyvsp[-3].obj).tr, "dataType ID");
				
				//printf("pós inserção no nó da arvore\n");
			} else {
				printf("Erro Semantico: Tipo de dados imcopativeis na linha %d\n", flag);
			}
			
		} else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}

	}
#line 1829 "y.tab.c"
    break;

  case 45: /* stateATTEXP: ID ASSIGMENT expCOND SEMICOLON  */
#line 352 "parser.y"
                                      {
		printf("Entrou na 2°regra(%s ASSIGMENT expCOND SEMICOLON)\n", (yyvsp[-3].obj).name);
		struct cell *temp = SearchParser(H, (yyvsp[-3].obj).name);
		if(temp->type == (yyvsp[-1].obj).type){
			//printf("Entrou no if que temp->type é igual ao tipo do expCond(3.type = %d) (type = %d)\n", temp->type, $3.type);
			(yyval.obj).type = (yyvsp[-1].obj).type;
			setType(H, temp->name, (yyvsp[-1].obj).type);
			//printf("setou o tipo\n");
			//setCategory(H, $1.name, 9);
			getValue(H, (yyvsp[-3].obj).name, (yyvsp[-1].obj).name);
			//printf("temp->%s = %d\n", temp->name, temp->iVal);
			//printf("setou a categoria\n");
			(yyval.obj).tr = insertNode((yyvsp[-3].obj).tr, (yyvsp[-1].obj).tr, "ID = expCOND;");
			//printf("pós inserção no nó da arvore\n");
		} else if(temp->type == 4){
			printf("Erro Semantico: Variavel não foi declarada na linha %d\n", flag);
		}
		else {
			printf("Erro Semantico: Tipo de dados imcopativeis na linha %d\n", flag);
		}
	}
#line 1855 "y.tab.c"
    break;

  case 46: /* stateATTEXP: error  */
#line 373 "parser.y"
              {
			(yyval.obj).tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
}
#line 1864 "y.tab.c"
    break;

  case 47: /* attSTR: dataType ID O_BRAC NUMorEMP C_BRAC bodySTR  */
#line 378 "parser.y"
                                                  {
	struct cell *temp = SearchParser(H, (yyvsp[-5].obj).name);
	if(temp->type == 4){
		setType(H, (yyvsp[-4].obj).name, (yyvsp[-5].obj).type);
		setCategory(H, (yyvsp[-4].obj).name, 9);
		struct node *a = insertNode((yyvsp[-5].obj).tr, (yyvsp[-4].obj).tr, (yyvsp[-4].obj).name);
		struct node *b = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "NUMorEMP bodySTR");
		(yyval.obj).tr = insertNode(a, b, "CHAR ID NUMorEMP bodySTR ");
	}
	else {
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
	}
}
#line 1882 "y.tab.c"
    break;

  case 48: /* bodySTR: ASSIGMENT STR  */
#line 392 "parser.y"
                       {
			(yyval.obj).type = 3;
			struct node *a = insertNode(NULL, NULL, (yyvsp[0].obj).name); 
			(yyval.obj).tr = insertNode(a, NULL, (yyvsp[-1].obj).name);}
#line 1891 "y.tab.c"
    break;

  case 49: /* bodySTR: %empty  */
#line 396 "parser.y"
                                  {
				(yyval.obj).tr = NULL;
}
#line 1899 "y.tab.c"
    break;

  case 50: /* expCOND: expCOND SUM expCOND  */
#line 401 "parser.y"
                                    {
			if((yyvsp[-2].obj).type == (yyvsp[0].obj).type){
				printf("expCOND + expCOND\n");
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "expCOND + expCOND");
				(yyval.obj).type = (yyvsp[-2].obj).type; 
				if((yyval.obj).type == 1){
					(yyval.obj).valueInt = calculateInt(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "+"); 
					printf("$$.valueInt = %d\n", (yyval.obj).valueInt);
					sprintf( (yyval.obj).name, "%d", (yyval.obj).valueInt);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 1, 8);
					printf("$$.name = %s\n", (yyval.obj).name);
				}else if((yyval.obj).type == 2){
					(yyval.obj).valueDouble = calculateFloat(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "+");
					sprintf((yyval.obj).name, "%.2f", (yyval.obj).valueDouble);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 2, 8);
					printf("$$.name = %s\n", (yyval.obj).name);
				}
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				(yyval.obj).type = 4;
			}
		}
#line 1927 "y.tab.c"
    break;

  case 51: /* expCOND: expCOND SUB expCOND  */
#line 424 "parser.y"
                                    {
			if((yyvsp[-2].obj).type == (yyvsp[0].obj).type){
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "expCOND - expCOND");
				(yyval.obj).type = (yyvsp[-2].obj).type; 
				if((yyval.obj).type == 1){
					(yyval.obj).valueInt = calculateInt(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "-"); 
					sprintf( (yyval.obj).name, "%d", (yyval.obj).valueInt);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 1, 8);
					printf("$$.name = %s\n", (yyval.obj).name);
				}else if((yyval.obj).type == 2){
					(yyval.obj).valueDouble = calculateFloat(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "-");
					sprintf((yyval.obj).name, "%.2f", (yyval.obj).valueDouble);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 2, 8);
					printf("$$.name = %s\n", (yyval.obj).name);
				}
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				(yyval.obj).type = 4;
			}
		}
#line 1953 "y.tab.c"
    break;

  case 52: /* expCOND: expCOND MULT expCOND  */
#line 445 "parser.y"
                                     {
			if((yyvsp[-2].obj).type == (yyvsp[0].obj).type){
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "expCOND * expCOND");
				(yyval.obj).type = (yyvsp[-2].obj).type; 
				if((yyval.obj).type == 1){
					(yyval.obj).valueInt = calculateInt(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "*");
					printf("$$.valueInt = %d\n", (yyval.obj).valueInt); 
					sprintf((yyval.obj).name, "%d", (yyval.obj).valueInt);
					printf("$$.name = %s\n", (yyval.obj).name);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 1, 8);
				}else if((yyval.obj).type == 2){
					(yyval.obj).valueDouble = calculateFloat(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "*");
					sprintf((yyval.obj).name, "%.2f", (yyval.obj).valueDouble);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 2, 8);
				}
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				(yyval.obj).type = 4;
			}
		}
#line 1979 "y.tab.c"
    break;

  case 53: /* expCOND: expCOND DIV expCOND  */
#line 466 "parser.y"
                                    {
			if((yyvsp[-2].obj).type == (yyvsp[0].obj).type){
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "expCOND / expCOND");
				(yyval.obj).type = (yyvsp[-2].obj).type; 
				if((yyval.obj).type == 1){
					(yyval.obj).valueInt = calculateInt(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "/"); 
					sprintf( (yyval.obj).name, "%d", (yyval.obj).valueInt);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 1, 8);
				}else if((yyval.obj).type == 2){
					(yyval.obj).valueDouble = calculateFloat(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, "/");
					sprintf((yyval.obj).name, "%.2f", (yyval.obj).valueDouble);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 2, 8);
				}
			}
			else {
				printf("Erro Semantico: Tipo incompativel na linha %d\n", flag);
				(yyval.obj).type = 4;
			}
		}
#line 2003 "y.tab.c"
    break;

  case 54: /* expCOND: O_PAR expCOND C_PAR  */
#line 485 "parser.y"
                                    {
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "O_PAR expCOND C_PAR");
		}
#line 2011 "y.tab.c"
    break;

  case 55: /* expCOND: ID  */
#line 488 "parser.y"
                   {
			//printf("BBBBBBBBBBBBBBBBBBBb");
			(yyval.obj).type = (yyvsp[0].obj).type;
			(yyval.obj).tr = insertNode(NULL, NULL, 	"ID");
			//printf("pós inserção no nó da arvore\n");
		}
#line 2022 "y.tab.c"
    break;

  case 56: /* expCOND: numNat  */
#line 494 "parser.y"
                       {
			//printf("AAAAAAAAAAAAAAAAaaaa\n");
			(yyval.obj).type = (yyvsp[0].obj).type;
			//printf("$1.type do numNat = %d\n", $1.type);
	  		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "NUMBER");
			//printf("pós inserção no nó da arvore\n");

		}
#line 2035 "y.tab.c"
    break;

  case 57: /* expCOND: error  */
#line 502 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
}
#line 2044 "y.tab.c"
    break;

  case 58: /* ifSTATE: IF O_PAR expCOND C_PAR bodyLOOP elseSTATE  */
#line 507 "parser.y"
                                                   {
			struct node * init = insertNode((yyvsp[-3].obj).tr, (yyvsp[-1].obj).tr, "IF (expCOND) bodyLOOP");
			(yyval.obj).tr = insertNode(init, (yyvsp[0].obj).tr, "bodyIF");
}
#line 2053 "y.tab.c"
    break;

  case 59: /* elseSTATE: ELSE O_KEY content C_KEY  */
#line 512 "parser.y"
                                     {
				(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "ELSE O_KEY content C_KEY"); 
			}
#line 2061 "y.tab.c"
    break;

  case 60: /* elseSTATE: ELSE ifSTATE  */
#line 515 "parser.y"
                                     {
				(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "else ifSTATE"); 
			}
#line 2069 "y.tab.c"
    break;

  case 61: /* elseSTATE: %empty  */
#line 518 "parser.y"
                                 {
					(yyval.obj).tr = NULL;
}
#line 2077 "y.tab.c"
    break;

  case 62: /* forSTATE: FOR O_PAR forINIT SEMICOLON expCOND SEMICOLON forUpdate C_PAR bodyLOOP  */
#line 522 "parser.y"
                                                                                 {
				struct node* init = insertNode(NULL, (yyvsp[-6].obj).tr, "forINIT");
				struct node* cond = insertNode((yyvsp[-4].obj).tr, (yyvsp[-2].obj).tr, "forMID");
				struct node* f = insertNode(init, cond, "for");
				(yyval.obj).tr = insertNode(f, (yyvsp[0].obj).tr, "forSTATE");
}
#line 2088 "y.tab.c"
    break;

  case 63: /* forINIT: bodyATT  */
#line 529 "parser.y"
                 {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "dataType InitFor");
			}
#line 2096 "y.tab.c"
    break;

  case 64: /* forINIT: %empty  */
#line 532 "parser.y"
                                 {
				(yyval.obj).tr = NULL;
}
#line 2104 "y.tab.c"
    break;

  case 65: /* forUpdate: UpdateDF  */
#line 536 "parser.y"
                    { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "forUpdate");
			}
#line 2112 "y.tab.c"
    break;

  case 66: /* forUpdate: %empty  */
#line 539 "parser.y"
                                  {
				(yyval.obj).tr = NULL;
}
#line 2120 "y.tab.c"
    break;

  case 67: /* UpdateDF: ID opINCorDEC  */
#line 543 "parser.y"
                        {
		(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "ID opINCorDEC");
		}
#line 2128 "y.tab.c"
    break;

  case 68: /* UpdateDF: UpdateDF COMMA UpdateDF  */
#line 546 "parser.y"
                                  { 
		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "UpdateDF, UpdateDF"); 
}
#line 2136 "y.tab.c"
    break;

  case 69: /* whileSTATE: WHILE O_PAR expCOND C_PAR bodyLOOP  */
#line 550 "parser.y"
                                              { 
				(yyval.obj).tr = insertNode(NULL, (yyvsp[-2].obj).tr, "whileSTATE"); 
}
#line 2144 "y.tab.c"
    break;

  case 70: /* bodyLOOP: O_KEY content C_KEY  */
#line 554 "parser.y"
                             { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "bodyLOOP"); 
}
#line 2152 "y.tab.c"
    break;

  case 71: /* comentSTATE: O_COMENT content C_COMENT  */
#line 558 "parser.y"
                                      { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "comentSTATE"); 
}
#line 2160 "y.tab.c"
    break;


#line 2164 "y.tab.c"

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

#line 562 "parser.y"


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
			
			/*for (int i = 0; i < TAM; i++)
				printf("H[%d] = %s\n", i, H->table[i]->name);*/
			
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

