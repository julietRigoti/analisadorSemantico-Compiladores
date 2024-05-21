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

	struct node* no;
	void yyerror();
	int flagError = 0;

#line 87 "y.tab.c"

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
    NUMBER = 274,                  /* NUMBER  */
    STR = 275,                     /* STR  */
    O_KEY = 276,                   /* O_KEY  */
    O_BRAC = 277,                  /* O_BRAC  */
    O_PAR = 278,                   /* O_PAR  */
    C_PAR = 279,                   /* C_PAR  */
    C_BRAC = 280,                  /* C_BRAC  */
    C_KEY = 281,                   /* C_KEY  */
    O_COMENT = 282,                /* O_COMENT  */
    C_COMENT = 283,                /* C_COMENT  */
    SEMICOLON = 284,               /* SEMICOLON  */
    COMMA = 285,                   /* COMMA  */
    INCLUDE = 286,                 /* INCLUDE  */
    PRINTF = 287,                  /* PRINTF  */
    SCANF = 288,                   /* SCANF  */
    WHILE = 289,                   /* WHILE  */
    FOR = 290,                     /* FOR  */
    IF = 291,                      /* IF  */
    ELSE = 292,                    /* ELSE  */
    ID = 293,                      /* ID  */
    RETURN = 294                   /* RETURN  */
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
#define NUMBER 274
#define STR 275
#define O_KEY 276
#define O_BRAC 277
#define O_PAR 278
#define C_PAR 279
#define C_BRAC 280
#define C_KEY 281
#define O_COMENT 282
#define C_COMENT 283
#define SEMICOLON 284
#define COMMA 285
#define INCLUDE 286
#define PRINTF 287
#define SCANF 288
#define WHILE 289
#define FOR 290
#define IF 291
#define ELSE 292
#define ID 293
#define RETURN 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y"

		struct teste{
			char name[MAX*2];
			int type;
			int category;
			int valueInt;
			double valueDouble;
			struct node* tr; 
		} obj;

#line 229 "y.tab.c"

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
  YYSYMBOL_NUMBER = 19,                    /* NUMBER  */
  YYSYMBOL_STR = 20,                       /* STR  */
  YYSYMBOL_O_KEY = 21,                     /* O_KEY  */
  YYSYMBOL_O_BRAC = 22,                    /* O_BRAC  */
  YYSYMBOL_O_PAR = 23,                     /* O_PAR  */
  YYSYMBOL_C_PAR = 24,                     /* C_PAR  */
  YYSYMBOL_C_BRAC = 25,                    /* C_BRAC  */
  YYSYMBOL_C_KEY = 26,                     /* C_KEY  */
  YYSYMBOL_O_COMENT = 27,                  /* O_COMENT  */
  YYSYMBOL_C_COMENT = 28,                  /* C_COMENT  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_INCLUDE = 31,                   /* INCLUDE  */
  YYSYMBOL_PRINTF = 32,                    /* PRINTF  */
  YYSYMBOL_SCANF = 33,                     /* SCANF  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_program = 41,                   /* program  */
  YYSYMBOL_headers = 42,                   /* headers  */
  YYSYMBOL_dataType = 43,                  /* dataType  */
  YYSYMBOL_operator = 44,                  /* operator  */
  YYSYMBOL_opLogical = 45,                 /* opLogical  */
  YYSYMBOL_opINCorDEC = 46,                /* opINCorDEC  */
  YYSYMBOL_PRorSC = 47,                    /* PRorSC  */
  YYSYMBOL_NUMorID = 48,                   /* NUMorID  */
  YYSYMBOL_NUMorEMP = 49,                  /* NUMorEMP  */
  YYSYMBOL_main = 50,                      /* main  */
  YYSYMBOL_args = 51,                      /* args  */
  YYSYMBOL_return = 52,                    /* return  */
  YYSYMBOL_content = 53,                   /* content  */
  YYSYMBOL_cont = 54,                      /* cont  */
  YYSYMBOL_PRorSC_STATE = 55,              /* PRorSC_STATE  */
  YYSYMBOL_bodyPRorSC = 56,                /* bodyPRorSC  */
  YYSYMBOL_attSTATE = 57,                  /* attSTATE  */
  YYSYMBOL_bodyATT = 58,                   /* bodyATT  */
  YYSYMBOL_attSTR = 59,                    /* attSTR  */
  YYSYMBOL_bodySTR = 60,                   /* bodySTR  */
  YYSYMBOL_ifSTATE = 61,                   /* ifSTATE  */
  YYSYMBOL_expCOND = 62,                   /* expCOND  */
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
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    51,    53,    57,    59,    62,    65,    68,
      71,    75,    78,    81,    84,    87,    90,    94,    97,   101,
     104,   108,   112,   117,   121,   126,   130,   132,   143,   155,
     167,   178,   180,   185,   187,   191,   193,   195,   197,   199,
     201,   203,   205,   209,   211,   213,   215,   219,   236,   252,
     267,   269,   295,   301,   314,   320,   322,   327,   332,   336,
     355,   363,   365,   367,   369,   371,   378,   381,   390,   392,
     394,   401,   405,   409,   413
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
  "INT", "CHAR", "VOID", "FLOAT", "DOUBLE", "NUMBER", "STR", "O_KEY",
  "O_BRAC", "O_PAR", "C_PAR", "C_BRAC", "C_KEY", "O_COMENT", "C_COMENT",
  "SEMICOLON", "COMMA", "INCLUDE", "PRINTF", "SCANF", "WHILE", "FOR", "IF",
  "ELSE", "ID", "RETURN", "$accept", "program", "headers", "dataType",
  "operator", "opLogical", "opINCorDEC", "PRorSC", "NUMorID", "NUMorEMP",
  "main", "args", "return", "content", "cont", "PRorSC_STATE",
  "bodyPRorSC", "attSTATE", "bodyATT", "attSTR", "bodySTR", "ifSTATE",
  "expCOND", "elseSTATE", "forSTATE", "forINIT", "forUpdate", "UpdateDF",
  "whileSTATE", "bodyLOOP", "comentSTATE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,   -80,    22,    47,   -80,   -80,   -80,   -80,   -80,   -80,
     -23,   -15,   -80,    27,   124,    -2,    36,    33,    78,    60,
     -80,    81,    13,   -80,   -80,    69,   -80,   -80,    91,    92,
      95,   110,    85,   101,    41,   -80,   -80,   -80,    59,   -80,
     -80,   -80,   -80,   -80,    94,   -14,     3,   -14,    -3,   103,
     111,    -3,   117,   -80,    -3,   -80,   106,   -80,   -80,   -14,
     -80,   -80,   220,     4,   120,   230,   -80,   129,   126,   121,
     -80,   -80,   -80,   244,   -80,   -80,   -80,   -80,   -80,   -14,
     -80,   -80,   137,   -14,   -14,   -14,   137,   -80,   134,   -13,
     141,   -80,   -80,    87,   119,   -80,   254,   254,   210,   130,
     159,   126,   190,   139,   146,   131,    46,   -80,   150,   -80,
     -80,   -80,   -80,   -80,    44,   147,   145,   119,   -80,   -80,
     -80,   -80,   -80,   137,   131,   173,   -80,   145,   -80
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     4,     0,     0,     1,     6,     7,    10,     9,     8,
       3,     0,     2,     0,    31,     0,     0,     0,    30,     0,
      28,     0,     0,    29,    52,     0,    21,    22,     0,     0,
       0,     0,     0,     0,     0,    34,    40,    35,     0,    50,
      36,    37,    38,    39,     0,     0,     0,     0,     0,    47,
       0,     0,     0,    33,     0,    46,     0,    74,    23,     0,
      24,    61,     0,    66,     0,     0,    51,    26,    45,     0,
      27,    49,    48,     0,    12,    11,    13,    14,    16,     0,
      17,    18,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    32,    58,    57,     0,    72,    59,    60,     0,    64,
      55,    24,    45,     0,     0,    69,     0,    56,     0,    53,
      43,    44,    42,    73,     0,     0,    68,     0,    63,    54,
      19,    20,    70,     0,     0,     0,    65,    71,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   176,    12,   -80,   -80,   -80,   -80,    65,   -80,
     -80,   -80,   -80,   -25,   -32,   -80,   -11,   -80,   140,   -80,
     -80,    71,   -46,   -80,   -80,   -80,   -80,    61,   -80,   -79,
     -80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    10,    32,    83,    84,   122,    33,    61,    88,
      12,    16,    52,    34,    35,    36,    90,    37,    38,    39,
     109,    40,    62,   107,    41,    64,   115,   116,    42,    95,
      43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    65,    53,    17,    24,    58,    58,    99,     1,    59,
      59,    54,    53,    73,    24,    11,    58,     5,     6,     7,
       8,     9,     4,    13,    60,   101,    15,     5,     6,     7,
       8,     9,   -67,    93,    56,    60,    18,    96,    97,    98,
      25,    31,    24,   102,   126,    26,    27,    28,    29,    30,
      14,    31,   -41,   120,   121,     5,     6,     7,     8,     9,
      19,     5,     6,     7,     8,     9,    54,   117,    25,   104,
      24,    20,    53,    26,    27,    28,    29,    30,     1,    31,
      51,    22,    30,     5,     6,     7,     8,     9,    55,    56,
     110,   111,   125,    53,    78,    24,    25,   -41,    80,    81,
      21,    26,    27,    28,    29,    30,    23,    31,     5,     6,
       7,     8,     9,    66,    45,    46,    69,    48,    47,    71,
      24,    25,    57,    49,    50,    67,    26,    27,    28,    29,
      30,    68,    31,     5,     6,     7,     8,     9,     5,     6,
       7,     8,     9,    70,    72,   -41,    25,    24,    87,    85,
      91,    26,    27,    28,    29,    30,    89,    31,    94,   100,
       5,     6,     7,     8,     9,   103,   108,   106,   112,   114,
     119,   123,   113,    25,    24,   124,     3,   118,    26,    27,
      28,    29,    30,     0,    31,   127,    63,     5,     6,     7,
       8,     9,     0,    74,    75,    76,    77,    78,    79,   128,
      25,    80,    81,     0,     0,    26,    27,    28,    29,    30,
       0,    31,     0,    74,    75,    76,    77,    78,    79,     0,
      89,    80,    81,    74,    75,    76,    77,    78,    79,     0,
       0,    80,    81,    74,    75,    76,    77,    78,    79,   105,
       0,    80,    81,     0,    82,     0,     0,    74,    75,    76,
      77,    78,    79,     0,    86,    80,    81,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,     0,    92
};

static const yytype_int8 yycheck[] =
{
      25,    47,    34,     5,     1,    19,    19,    86,    31,    23,
      23,     7,    44,    59,     1,     3,    19,    14,    15,    16,
      17,    18,     0,    38,    38,    38,    14,    14,    15,    16,
      17,    18,    29,    79,    30,    38,    38,    83,    84,    85,
      27,    38,     1,    89,   123,    32,    33,    34,    35,    36,
      23,    38,    39,     9,    10,    14,    15,    16,    17,    18,
      24,    14,    15,    16,    17,    18,     7,    21,    27,    94,
       1,    38,   104,    32,    33,    34,    35,    36,    31,    38,
      39,    21,    36,    14,    15,    16,    17,    18,    29,    30,
     101,   102,   117,   125,     7,     1,    27,    28,    11,    12,
      22,    32,    33,    34,    35,    36,    25,    38,    14,    15,
      16,    17,    18,    48,    23,    23,    51,     7,    23,    54,
       1,    27,    28,    38,    23,    22,    32,    33,    34,    35,
      36,    20,    38,    14,    15,    16,    17,    18,    14,    15,
      16,    17,    18,    26,    38,    26,    27,     1,    19,    29,
      29,    32,    33,    34,    35,    36,    30,    38,    21,    25,
      14,    15,    16,    17,    18,    24,     7,    37,    29,    38,
      20,    24,    26,    27,     1,    30,     0,   106,    32,    33,
      34,    35,    36,    -1,    38,   124,    46,    14,    15,    16,
      17,    18,    -1,     3,     4,     5,     6,     7,     8,    26,
      27,    11,    12,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    38,    -1,     3,     4,     5,     6,     7,     8,    -1,
      30,    11,    12,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,    29,
      -1,    11,    12,    -1,    24,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    24,    11,    12,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    41,    42,     0,    14,    15,    16,    17,    18,
      42,    43,    50,    38,    23,    43,    51,     5,    38,    24,
      38,    22,    21,    25,     1,    27,    32,    33,    34,    35,
      36,    38,    43,    47,    53,    54,    55,    57,    58,    59,
      61,    64,    68,    70,    53,    23,    23,    23,     7,    38,
      23,    39,    52,    54,     7,    29,    30,    28,    19,    23,
      38,    48,    62,    58,    65,    62,    48,    22,    20,    48,
      26,    48,    38,    62,     3,     4,     5,     6,     7,     8,
      11,    12,    24,    44,    45,    29,    24,    19,    49,    30,
      56,    29,    24,    62,    21,    69,    62,    62,    62,    69,
      25,    38,    62,    24,    53,    29,    37,    63,     7,    60,
      56,    56,    29,    26,    38,    66,    67,    21,    61,    20,
       9,    10,    46,    24,    30,    53,    69,    67,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    43,    43,    43,    43,
      43,    44,    44,    44,    44,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    49,    49,    50,    51,    51,
      51,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    55,    56,    56,    56,    57,    58,    58,    58,
      58,    58,    58,    59,    60,    60,    61,    62,    62,    62,
      62,    62,    63,    63,    63,    64,    65,    65,    66,    66,
      67,    67,    68,    69,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     9,     3,     4,
       2,     0,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     3,     3,     0,     2,     2,     3,     3,
       1,     3,     1,     6,     2,     0,     6,     3,     3,     3,
       3,     1,     4,     2,     0,     9,     1,     0,     1,     0,
       2,     3,     5,     3,     3
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
#line 46 "parser.y"
                      { 
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "program");
			no = (yyval.obj).tr;
}
#line 1395 "y.tab.c"
    break;

  case 3: /* headers: headers headers  */
#line 51 "parser.y"
                         {
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "headers headers");}
#line 1402 "y.tab.c"
    break;

  case 4: /* headers: INCLUDE  */
#line 53 "parser.y"
                         {
			setCategory(HT, (yyvsp[0].obj).name, 12);
			(yyval.obj).tr = insertNode(NULL, NULL, "INCLUDE");}
#line 1410 "y.tab.c"
    break;

  case 5: /* headers: %empty  */
#line 57 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1416 "y.tab.c"
    break;

  case 6: /* dataType: INT  */
#line 59 "parser.y"
              {
			(yyval.obj).type = 1;
			(yyval.obj).tr = insertNode(NULL, NULL, "INT");}
#line 1424 "y.tab.c"
    break;

  case 7: /* dataType: CHAR  */
#line 62 "parser.y"
                       {
			(yyval.obj).type = 6;
			(yyval.obj).tr = insertNode(NULL, NULL, "CHAR");}
#line 1432 "y.tab.c"
    break;

  case 8: /* dataType: DOUBLE  */
#line 65 "parser.y"
                         {
			(yyval.obj).type = 2;
			(yyval.obj).tr = insertNode(NULL, NULL, "DOUBLE");}
#line 1440 "y.tab.c"
    break;

  case 9: /* dataType: FLOAT  */
#line 68 "parser.y"
                        {
			(yyval.obj).type = 2;
			(yyval.obj).tr = insertNode(NULL, NULL, "FLOAT");}
#line 1448 "y.tab.c"
    break;

  case 10: /* dataType: VOID  */
#line 71 "parser.y"
                       {
			(yyval.obj).type = 7;
			(yyval.obj).tr = insertNode(NULL, NULL, "VOID");}
#line 1456 "y.tab.c"
    break;

  case 11: /* operator: SUM  */
#line 75 "parser.y"
              {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "+");}
#line 1464 "y.tab.c"
    break;

  case 12: /* operator: SUB  */
#line 78 "parser.y"
                      {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "-");}
#line 1472 "y.tab.c"
    break;

  case 13: /* operator: MULT  */
#line 81 "parser.y"
                       {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "*");}
#line 1480 "y.tab.c"
    break;

  case 14: /* operator: DIV  */
#line 84 "parser.y"
                      {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "/");}
#line 1488 "y.tab.c"
    break;

  case 15: /* operator: COMPARATOR  */
#line 87 "parser.y"
                            {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, " == ");}
#line 1496 "y.tab.c"
    break;

  case 16: /* operator: ASSIGMENT  */
#line 90 "parser.y"
                            {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "=");}
#line 1504 "y.tab.c"
    break;

  case 17: /* opLogical: AND  */
#line 94 "parser.y"
               {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "&&");}
#line 1512 "y.tab.c"
    break;

  case 18: /* opLogical: OR  */
#line 97 "parser.y"
                      {
			setCategory(H, (yyvsp[0].obj).name, 13);
			(yyval.obj).tr = insertNode(NULL, NULL, "||");}
#line 1520 "y.tab.c"
    break;

  case 19: /* opINCorDEC: INCR  */
#line 101 "parser.y"
                 {
			  setCategory(H, (yyvsp[0].obj).name, 13);
			  (yyval.obj).tr = insertNode(NULL, NULL, "++");}
#line 1528 "y.tab.c"
    break;

  case 20: /* opINCorDEC: DECR  */
#line 104 "parser.y"
                             {
				setCategory(H, (yyvsp[0].obj).name, 13);
			  (yyval.obj).tr = insertNode(NULL, NULL, "--");}
#line 1536 "y.tab.c"
    break;

  case 21: /* PRorSC: PRINTF  */
#line 108 "parser.y"
               {
			setType(HT, (yyvsp[0].obj).name, 5);
			setCategory(HT, (yyvsp[0].obj).name, 15);
		  (yyval.obj).tr = insertNode(NULL, NULL, "PRINTF");}
#line 1545 "y.tab.c"
    break;

  case 22: /* PRorSC: SCANF  */
#line 112 "parser.y"
                  {
			setType(HT, (yyvsp[0].obj).name, 5);
			setCategory(HT, (yyvsp[0].obj).name, 15);
		  (yyval.obj).tr = insertNode(NULL, NULL, "SCANF");}
#line 1554 "y.tab.c"
    break;

  case 23: /* NUMorID: NUMBER  */
#line 117 "parser.y"
                {
			setType(H, (yyvsp[0].obj).name, 1);
			setCategory(H, (yyvsp[0].obj).name, 8);
	  		(yyval.obj).tr = insertNode(NULL, NULL, "NUMBER");}
#line 1563 "y.tab.c"
    break;

  case 24: /* NUMorID: ID  */
#line 121 "parser.y"
                    {
			setType(H, (yyvsp[0].obj).name, 4);
			setCategory(H, (yyvsp[0].obj).name, 9);
			(yyval.obj).tr = insertNode(NULL, NULL, 	"ID");}
#line 1572 "y.tab.c"
    break;

  case 25: /* NUMorEMP: NUMBER  */
#line 126 "parser.y"
                 {
			setType(H, (yyvsp[0].obj).name, 1);
			setCategory(H, (yyvsp[0].obj).name, 8);
			(yyval.obj).tr = insertNode(NULL, NULL, "NUMBER");}
#line 1581 "y.tab.c"
    break;

  case 26: /* NUMorEMP: %empty  */
#line 130 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1587 "y.tab.c"
    break;

  case 27: /* main: dataType ID O_PAR args C_PAR O_KEY content return C_KEY  */
#line 132 "parser.y"
                                                             {
		if(SearchParser(H, (yyvsp[-7].obj).name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		setType(H, (yyvsp[-7].obj).name, (yyvsp[-8].obj).type);
		setCategory(H, (yyvsp[-7].obj).name, 9);
		struct node *a = insertNode((yyvsp[-5].obj).tr, NULL, "cab");
		struct node *b = insertNode((yyvsp[-2].obj).tr, (yyvsp[-1].obj).tr, "body");
		(yyval.obj).tr = insertNode(a, b, "main");
}
#line 1602 "y.tab.c"
    break;

  case 28: /* args: dataType MULT ID  */
#line 143 "parser.y"
                       {
		if(SearchParser(H, (yyvsp[0].obj).name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		if(SearchParser(H, (yyvsp[0].obj).name)->category != 4){
			printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
		}
		setType(H, (yyvsp[0].obj).name, (yyvsp[-2].obj).type);
		setCategory(H, (yyvsp[0].obj).name, 14);

		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "dataType *ID");}
#line 1618 "y.tab.c"
    break;

  case 29: /* args: dataType ID O_BRAC C_BRAC  */
#line 155 "parser.y"
                                    { 
		if(SearchParser(H, (yyvsp[-2].obj).name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		if(SearchParser(H, (yyvsp[-2].obj).name)->category != 4){
			printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
		}
		setType(H, (yyvsp[-2].obj).name, (yyvsp[-3].obj).type);
		setCategory(H, (yyvsp[-2].obj).name, 14);

		(yyval.obj).tr = insertNode((yyvsp[-3].obj).tr, (yyvsp[-2].obj).tr, "dataType ID[]");}
#line 1634 "y.tab.c"
    break;

  case 30: /* args: dataType ID  */
#line 167 "parser.y"
                      { 
		if(SearchParser(H, (yyvsp[0].obj).name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		if(SearchParser(H, (yyvsp[0].obj).name)->category != 4){
			printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
		}
		setType(H, (yyvsp[0].obj).name, (yyvsp[-1].obj).type);
		setCategory(H, (yyvsp[0].obj).name, 14);
		(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "dataType ID");}
#line 1649 "y.tab.c"
    break;

  case 31: /* args: %empty  */
#line 178 "parser.y"
                          {(yyval.obj).tr = NULL;}
#line 1655 "y.tab.c"
    break;

  case 32: /* return: RETURN NUMorID SEMICOLON  */
#line 180 "parser.y"
                                 {
			setCategory(HT, (yyvsp[-2].obj).name, 15);
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "RETURN NUMorID;");
		}
#line 1664 "y.tab.c"
    break;

  case 33: /* content: content cont  */
#line 185 "parser.y"
                      { 
			(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, (yyvsp[0].obj).tr, "content cont");}
#line 1671 "y.tab.c"
    break;

  case 34: /* content: cont  */
#line 187 "parser.y"
                      {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "cont");
		 }
#line 1679 "y.tab.c"
    break;

  case 35: /* cont: attSTATE  */
#line 191 "parser.y"
                { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTATE");}
#line 1686 "y.tab.c"
    break;

  case 36: /* cont: ifSTATE  */
#line 193 "parser.y"
                        { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "ifSTATE");}
#line 1693 "y.tab.c"
    break;

  case 37: /* cont: forSTATE  */
#line 195 "parser.y"
                         { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "forSTATE");}
#line 1700 "y.tab.c"
    break;

  case 38: /* cont: whileSTATE  */
#line 197 "parser.y"
                           { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "whileSTATE");}
#line 1707 "y.tab.c"
    break;

  case 39: /* cont: comentSTATE  */
#line 199 "parser.y"
                             { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "comentSTATE");}
#line 1714 "y.tab.c"
    break;

  case 40: /* cont: PRorSC_STATE  */
#line 201 "parser.y"
                             { 
		(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "PRorSC_STATE");}
#line 1721 "y.tab.c"
    break;

  case 41: /* cont: %empty  */
#line 203 "parser.y"
                          {(yyval.obj).tr = NULL;}
#line 1727 "y.tab.c"
    break;

  case 42: /* PRorSC_STATE: PRorSC O_PAR STR bodyPRorSC C_PAR SEMICOLON  */
#line 205 "parser.y"
                                                          {
				(yyval.obj).tr = insertNode((yyvsp[-5].obj).tr, (yyvsp[-2].obj).tr, "PRorSC (STR bodyPRorSC);");
}
#line 1735 "y.tab.c"
    break;

  case 43: /* bodyPRorSC: COMMA ID bodyPRorSC  */
#line 209 "parser.y"
                                {
				 (yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, ", ID bodyPRorSC");}
#line 1742 "y.tab.c"
    break;

  case 44: /* bodyPRorSC: COMMA expCOND bodyPRorSC  */
#line 211 "parser.y"
                                                 { 
				(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, ", expCOND bodyPRorSC");}
#line 1749 "y.tab.c"
    break;

  case 45: /* bodyPRorSC: %empty  */
#line 213 "parser.y"
                                           {(yyval.obj).tr = NULL;}
#line 1755 "y.tab.c"
    break;

  case 46: /* attSTATE: bodyATT SEMICOLON  */
#line 215 "parser.y"
                            {
	(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "bodyATT;");
	}
#line 1763 "y.tab.c"
    break;

  case 47: /* bodyATT: dataType ID  */
#line 219 "parser.y"
                     {
			printf("Entrou na 1°regra(dataType ID)(%s %s)\n", (yyvsp[-1].obj).name, (yyvsp[0].obj).name );
			struct cell *temp = SearchParser(H, (yyvsp[0].obj).name);
			if(temp->type == 4){
				printf("$1.type = %d\n", (yyvsp[-1].obj).type);
				setType(H, (yyvsp[0].obj).name, (yyvsp[-1].obj).type);
				setCategory(H, (yyvsp[0].obj).name, 9);
				(yyval.obj).type = (yyvsp[-1].obj).type;
				strcpy((yyval.obj).name, (yyvsp[0].obj).name);
				(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "dataType ID");
			}
			else {
				printf("Entrou na 1°regra(dataType ID)\n");
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
			 }
#line 1784 "y.tab.c"
    break;

  case 48: /* bodyATT: bodyATT COMMA ID  */
#line 236 "parser.y"
                                  {
			//printf("Entrou na 2°regra(bodyATT COMMA ID)\n");
			struct cell *temp = SearchParser(H, (yyvsp[0].obj).name);
			if(temp->type == 4){
				setCategory(H, (yyvsp[0].obj).name, 9);
				setType(H, (yyvsp[0].obj).name, (yyvsp[-2].obj).type);
				(yyval.obj).type = (yyvsp[-2].obj).type;
				strcpy((yyval.obj).name, (yyvsp[0].obj).name);
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, NULL, "bodyATT, ID");
			}
			else {
				printf("Entrou na 2°regra(bodyATT COMMA ID)\n");
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}	
		}
#line 1804 "y.tab.c"
    break;

  case 49: /* bodyATT: bodyATT ASSIGMENT NUMorID  */
#line 252 "parser.y"
                                          {
			struct cell *temp = SearchParser(H, (yyvsp[-2].obj).name);
			if(temp->type != 4){
				(yyval.obj).type = (yyvsp[0].obj).type;
				getValue(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name);
				setCategory(H, (yyvsp[0].obj).name, 9);
				setType(H, (yyvsp[0].obj).name, (yyvsp[-2].obj).type);
				strcpy((yyval.obj).name, (yyvsp[0].obj).name);
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "bodyATT = NUMorID");}
			else {
				printf("Entrou na 3°regra(bodyATT ASSIGMENT NUMorID)\n");
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
		}
#line 1823 "y.tab.c"
    break;

  case 50: /* bodyATT: attSTR  */
#line 267 "parser.y"
                       {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "attSTR"); }
#line 1830 "y.tab.c"
    break;

  case 51: /* bodyATT: ID ASSIGMENT NUMorID  */
#line 269 "parser.y"
                                     {
			struct cell *temp = SearchParser(H, (yyvsp[-2].obj).name);
			if(temp->type != 4){
				getValue(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name);
				setCategory(H, (yyvsp[-2].obj).name, 9);
				setType(H, (yyvsp[0].obj).name, (yyvsp[-2].obj).type);
				(yyval.obj).type = (yyvsp[-2].obj).type;
				strcpy((yyval.obj).name, (yyvsp[0].obj).name);
				/*struct node *a = insertNode(NULL, NULL, $3.name); 
				struct node *b = insertNode(NULL, NULL, $2.name); 
				$$.tr = insertNode(b, a, $1.name);} */
				(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "ID = NUMorID");
			}
			else {printf("Entrou na 5°regra(ID ASSIGMENT NUMorID)\n");
				printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
			}
			/*getValue(H, $1.name, $3.name);
			setCategory(H, $1.name, 9);
			setType(H, $3.name, $1.type);
			$$.type = $1.type;
			strcpy($$.name, $3.name);
			struct node *a = insertNode(NULL, NULL, $3.name); 
			struct node *b = insertNode(NULL, NULL, $2.name); 
			$$.tr = insertNode(b, a, $1.name);} 
			$$.tr = insertNode(NULL, $3.tr, "ID = NUMorID");*/
		}
#line 1861 "y.tab.c"
    break;

  case 52: /* bodyATT: error  */
#line 295 "parser.y"
                      {
			(yyval.obj).tr = insertNode(NULL, NULL, "_ERROR_");
			flagError++;
}
#line 1870 "y.tab.c"
    break;

  case 53: /* attSTR: dataType ID O_BRAC NUMorEMP C_BRAC bodySTR  */
#line 301 "parser.y"
                                                  {
	if(SearchParser(H, (yyvsp[-4].obj).name)->type != 4){
		printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
	}
	if(SearchParser(H, (yyvsp[-4].obj).name)->category != 4){
		printf("Erro Semantico: Categoria da varivel redefinida na linha %d\n", flag);
	}
	setCategory(H, (yyvsp[-4].obj).name, 9);
	struct node *a = insertNode((yyvsp[-5].obj).tr, (yyvsp[-4].obj).tr, (yyvsp[-4].obj).name);
	struct node *b = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "NUMorEMP bodySTR");
	(yyval.obj).tr = insertNode(a, b, "CHAR ID NUMorEMP bodySTR ");
}
#line 1887 "y.tab.c"
    break;

  case 54: /* bodySTR: ASSIGMENT STR  */
#line 314 "parser.y"
                       {
			setCategory(H, (yyvsp[-1].obj).name, 13);
			setType(H, (yyvsp[0].obj).name, 3);
			setCategory(H, (yyvsp[0].obj).name, 11);
			struct node *a = insertNode(NULL, NULL, (yyvsp[0].obj).name); 
			(yyval.obj).tr = insertNode(a, NULL, (yyvsp[-1].obj).name);}
#line 1898 "y.tab.c"
    break;

  case 55: /* bodySTR: %empty  */
#line 320 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 1904 "y.tab.c"
    break;

  case 56: /* ifSTATE: IF O_PAR expCOND C_PAR bodyLOOP elseSTATE  */
#line 322 "parser.y"
                                                   {
			struct node * init = insertNode((yyvsp[-3].obj).tr, (yyvsp[-1].obj).tr, "IF (expCOND) bodyLOOP");
			(yyval.obj).tr = insertNode(init, (yyvsp[0].obj).tr, "bodyIF");
}
#line 1913 "y.tab.c"
    break;

  case 57: /* expCOND: expCOND COMPARATOR expCOND  */
#line 327 "parser.y"
                                    {
		(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "expCOND COMP expCOND");
		(yyval.obj).type = (yyvsp[-2].obj).type; 
		}
#line 1922 "y.tab.c"
    break;

  case 58: /* expCOND: O_PAR expCOND C_PAR  */
#line 332 "parser.y"
                                     { 
		(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "O_PAR expCOND C_PAR");
		}
#line 1930 "y.tab.c"
    break;

  case 59: /* expCOND: expCOND operator expCOND  */
#line 336 "parser.y"
                                          { 
			if((yyvsp[-2].obj).type == (yyvsp[0].obj).type) {
				(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "expCOND operator expCOND");
				(yyval.obj).type = (yyvsp[-2].obj).type; 
				if((yyval.obj).type == 1){
					(yyval.obj).valueInt = calculateInt(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, (yyvsp[-1].obj).name);
					sprintf( (yyval.obj).name, "%d", (yyval.obj).valueInt);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 1, 8);
				} else if((yyval.obj).type == 2){
					(yyval.obj).valueDouble = calculateFloat(H, (yyvsp[-2].obj).name, (yyvsp[0].obj).name, (yyvsp[-1].obj).name);
					sprintf((yyval.obj).name, "%.2f", (yyval.obj).valueDouble);
					inserts(H, (yyval.obj).name, strlen((yyval.obj).name), flag, 2, 8);
				}
			}
			else {
				printf("Erro Semantico: Tipo de Dados diferentes na linha %d\n", flag);
			}
		}
#line 1953 "y.tab.c"
    break;

  case 60: /* expCOND: expCOND opLogical expCOND  */
#line 355 "parser.y"
                                           { 
				if((yyvsp[-2].obj).type == (yyvsp[0].obj).type)
					(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "expCOND opLogical expCOND");
				else {
					printf("Erro Semantico: Tipo de Dados diferentes na linha %d\n", flag);
				}
			}
#line 1965 "y.tab.c"
    break;

  case 61: /* expCOND: NUMorID  */
#line 363 "parser.y"
                         {(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "NUMorID");}
#line 1971 "y.tab.c"
    break;

  case 62: /* elseSTATE: ELSE O_KEY content C_KEY  */
#line 365 "parser.y"
                                     {
				(yyval.obj).tr = insertNode((yyvsp[-1].obj).tr, NULL, "ELSE O_KEY content C_KEY"); }
#line 1978 "y.tab.c"
    break;

  case 63: /* elseSTATE: ELSE ifSTATE  */
#line 367 "parser.y"
                                     {
				(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "else ifSTATE"); }
#line 1985 "y.tab.c"
    break;

  case 64: /* elseSTATE: %empty  */
#line 369 "parser.y"
                                {(yyval.obj).tr = NULL;}
#line 1991 "y.tab.c"
    break;

  case 65: /* forSTATE: FOR O_PAR forINIT SEMICOLON expCOND SEMICOLON forUpdate C_PAR bodyLOOP  */
#line 371 "parser.y"
                                                                                 {
				struct node* init = insertNode(NULL, (yyvsp[-6].obj).tr, "forINIT");
				struct node* cond = insertNode((yyvsp[-4].obj).tr, (yyvsp[-2].obj).tr, "forMID");
				struct node* f = insertNode(init, cond, "for");
				(yyval.obj).tr = insertNode(f, (yyvsp[0].obj).tr, "forSTATE");
}
#line 2002 "y.tab.c"
    break;

  case 66: /* forINIT: bodyATT  */
#line 378 "parser.y"
                 {
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "dataType InitFor");}
#line 2009 "y.tab.c"
    break;

  case 67: /* forINIT: %empty  */
#line 381 "parser.y"
                                  {(yyval.obj).tr = NULL;}
#line 2015 "y.tab.c"
    break;

  case 68: /* forUpdate: UpdateDF  */
#line 390 "parser.y"
                    { 
			(yyval.obj).tr = insertNode((yyvsp[0].obj).tr, NULL, "forUpdate");}
#line 2022 "y.tab.c"
    break;

  case 69: /* forUpdate: %empty  */
#line 392 "parser.y"
                        {(yyval.obj).tr = NULL;}
#line 2028 "y.tab.c"
    break;

  case 70: /* UpdateDF: ID opINCorDEC  */
#line 394 "parser.y"
                        {
		if(SearchParser(H, (yyvsp[0].obj).name)->type != 4){
			printf("Erro Semantico: Tipo de variavel redefinida na linha %d\n", flag);
		}
		//setType(H, $1.name, );
		(yyval.obj).tr = insertNode(NULL, (yyvsp[0].obj).tr, "ID opINCorDEC");
		}
#line 2040 "y.tab.c"
    break;

  case 71: /* UpdateDF: UpdateDF COMMA UpdateDF  */
#line 401 "parser.y"
                                  { 
			(yyval.obj).tr = insertNode((yyvsp[-2].obj).tr, (yyvsp[0].obj).tr, "UpdateDF, UpdateDF"); 
}
#line 2048 "y.tab.c"
    break;

  case 72: /* whileSTATE: WHILE O_PAR expCOND C_PAR bodyLOOP  */
#line 405 "parser.y"
                                              { 
				(yyval.obj).tr = insertNode(NULL, (yyvsp[-2].obj).tr, "whileSTATE"); 
}
#line 2056 "y.tab.c"
    break;

  case 73: /* bodyLOOP: O_KEY content C_KEY  */
#line 409 "parser.y"
                             { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "bodyLOOP"); 
}
#line 2064 "y.tab.c"
    break;

  case 74: /* comentSTATE: O_COMENT content C_COMENT  */
#line 413 "parser.y"
                                      { 
			(yyval.obj).tr = insertNode(NULL, (yyvsp[-1].obj).tr, "comentSTATE"); 
}
#line 2072 "y.tab.c"
    break;


#line 2076 "y.tab.c"

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

#line 417 "parser.y"


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

