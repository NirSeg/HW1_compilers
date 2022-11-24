/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     BBEGIN = 259,
     END = 260,
     DECLARE = 261,
     PROCEDURE = 262,
     FUNCTION = 263,
     LABEL = 264,
     INTEGER = 265,
     REAL = 266,
     RECORD = 267,
     BOOLEAN = 268,
     ARRAY = 269,
     OF = 270,
     ASSIGN = 271,
     LC = 272,
     RC = 273,
     IF = 274,
     THEN = 275,
     ELSE = 276,
     WHILE = 277,
     REPEAT = 278,
     FI = 279,
     DO = 280,
     OD = 281,
     READ = 282,
     WRITE = 283,
     TRUE = 284,
     FALSE = 285,
     ADD = 286,
     MIN = 287,
     MUL = 288,
     DIV = 289,
     GOTO = 290,
     MOD = 291,
     LES = 292,
     LEQ = 293,
     EQU = 294,
     NEQ = 295,
     GRE = 296,
     GEQ = 297,
     AND = 298,
     OR = 299,
     NOT = 300,
     CASE = 301,
     FOR = 302,
     FIN = 303,
     IDENTICAL = 304,
     FROM = 305,
     BY = 306,
     TO = 307,
     NEW = 308,
     INTCONST = 309,
     IDE = 310,
     REALCONST = 311,
     STRING = 312,
     DUMMY = 313
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define BBEGIN 259
#define END 260
#define DECLARE 261
#define PROCEDURE 262
#define FUNCTION 263
#define LABEL 264
#define INTEGER 265
#define REAL 266
#define RECORD 267
#define BOOLEAN 268
#define ARRAY 269
#define OF 270
#define ASSIGN 271
#define LC 272
#define RC 273
#define IF 274
#define THEN 275
#define ELSE 276
#define WHILE 277
#define REPEAT 278
#define FI 279
#define DO 280
#define OD 281
#define READ 282
#define WRITE 283
#define TRUE 284
#define FALSE 285
#define ADD 286
#define MIN 287
#define MUL 288
#define DIV 289
#define GOTO 290
#define MOD 291
#define LES 292
#define LEQ 293
#define EQU 294
#define NEQ 295
#define GRE 296
#define GEQ 297
#define AND 298
#define OR 299
#define NOT 300
#define CASE 301
#define FOR 302
#define FIN 303
#define IDENTICAL 304
#define FROM 305
#define BY 306
#define TO 307
#define NEW 308
#define INTCONST 309
#define IDE 310
#define REALCONST 311
#define STRING 312
#define DUMMY 313




/* Copy the first part of user declarations.  */
#line 1 "miny.ypp"

#include <iostream>
#include <stack>
#include <string>
#include "ast.h"

extern "C" { 
	int yylex(void); 
	extern int line_number;
}

// Bring the standard library into the
// global namespace
using namespace std;

// Prototypes to keep the compiler happy
//#define yyerror(x) { printf("%s in line %d\n",x,line_number);}
Object * root;  
void yyerror (const char *error);

//void clear_stack ();

// stack class that takes care of all the nodes that were allocated
stack <Object *> nodes;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 37 "miny.ypp"
typedef union YYSTYPE { 
   int code_;
   double real_;
   char * str_;
   struct Object * node_;
 } YYSTYPE;
/* Line 196 of yacc.c.  */
#line 234 "miny.tab.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 246 "miny.tab.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   357

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  34
/* YYNRULES -- Number of rules. */
#define YYNRULES  86
/* YYNRULES -- Number of states. */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    62,     2,     2,    64,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    65,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    60,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     7,    11,    16,    18,    21,    23,    25,
      27,    31,    38,    44,    53,    55,    59,    62,    66,    70,
      72,    74,    76,    78,    80,    82,    84,    86,    95,   100,
     102,   105,   108,   110,   112,   115,   117,   120,   122,   124,
     126,   129,   132,   135,   140,   145,   149,   154,   159,   161,
     165,   169,   175,   183,   189,   196,   198,   201,   205,   207,
     210,   214,   217,   221,   226,   230,   234,   238,   242,   246,
     250,   254,   258,   262,   266,   270,   274,   278,   282,   285,
     288,   290,   292,   294,   296,   298,   300
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      69,     0,    -1,     3,    55,    70,    -1,    17,    85,    18,
      -1,    71,    17,    85,    18,    -1,    72,    -1,    71,    72,
      -1,    77,    -1,    73,    -1,    74,    -1,     7,    55,    70,
      -1,     7,    55,    61,    75,    62,    70,    -1,     8,    55,
      63,    78,    70,    -1,     8,    55,    61,    75,    62,    63,
      78,    70,    -1,    76,    -1,    76,    64,    75,    -1,    55,
      78,    -1,    55,    78,    49,    -1,    55,    78,    65,    -1,
      79,    -1,    80,    -1,    81,    -1,    83,    -1,    84,    -1,
      10,    -1,    11,    -1,    13,    -1,    14,    66,    54,    63,
      54,    67,    15,    78,    -1,    12,    17,    82,    18,    -1,
      77,    -1,    77,    82,    -1,    60,    78,    -1,    55,    -1,
      86,    -1,    86,    85,    -1,    87,    -1,    92,    65,    -1,
      93,    -1,    94,    -1,    95,    -1,    89,    65,    -1,    90,
      65,    -1,    88,    65,    -1,    53,    61,    98,    62,    -1,
      55,    61,    91,    62,    -1,    55,    61,    62,    -1,    28,
      61,   100,    62,    -1,    28,    61,    57,    62,    -1,   100,
      -1,   100,    64,    91,    -1,    98,    16,   100,    -1,    19,
     100,    20,    85,    24,    -1,    19,   100,    20,    85,    21,
      85,    24,    -1,    22,   100,    17,    85,    18,    -1,    46,
     100,    15,    17,    96,    18,    -1,    97,    -1,    97,    96,
      -1,    54,    63,    85,    -1,    55,    -1,    98,    99,    -1,
      98,    59,    98,    -1,    98,    60,    -1,    66,   100,    67,
      -1,    66,   100,    67,    99,    -1,   100,    31,   100,    -1,
     100,    32,   100,    -1,   100,    33,   100,    -1,   100,    34,
     100,    -1,   100,    36,   100,    -1,   100,    37,   100,    -1,
     100,    38,   100,    -1,   100,    39,   100,    -1,   100,    40,
     100,    -1,   100,    41,   100,    -1,   100,    42,   100,    -1,
     100,    43,   100,    -1,   100,    44,   100,    -1,    61,   100,
      62,    -1,    32,   101,    -1,    45,   101,    -1,   101,    -1,
      89,    -1,    98,    -1,    54,    -1,    56,    -1,    29,    -1,
      30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    60,    60,    63,    64,    67,    68,    71,    72,    73,
      76,    77,    80,    81,    83,    84,    87,    88,    91,    94,
      95,    96,    97,    98,   101,   102,   103,   106,   109,   112,
     113,   116,   119,   122,   123,   126,   129,   130,   131,   132,
     133,   134,   135,   138,   141,   142,   145,   146,   149,   150,
     153,   156,   157,   160,   163,   166,   167,   170,   173,   174,
     175,   176,   179,   180,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   204,   205,   206,   207,   208
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "BBEGIN", "END", "DECLARE",
  "PROCEDURE", "FUNCTION", "LABEL", "INTEGER", "REAL", "RECORD", "BOOLEAN",
  "ARRAY", "OF", "ASSIGN", "LC", "RC", "IF", "THEN", "ELSE", "WHILE",
  "REPEAT", "FI", "DO", "OD", "READ", "WRITE", "TRUE", "FALSE", "ADD",
  "MIN", "MUL", "DIV", "GOTO", "MOD", "LES", "LEQ", "EQU", "NEQ", "GRE",
  "GEQ", "AND", "OR", "NOT", "CASE", "FOR", "FIN", "IDENTICAL", "FROM",
  "BY", "TO", "NEW", "INTCONST", "IDE", "REALCONST", "STRING", "DUMMY",
  "'.'", "'^'", "'('", "')'", "':'", "','", "';'", "'['", "']'", "$accept",
  "program", "block", "decl_list", "decl", "proc_decl", "func_decl",
  "formal_list", "formal", "var_decl", "type", "simple_type", "array_type",
  "record_type", "record_list", "address_type", "ide_type", "stat_seq",
  "stat", "nonlable_stat", "new_stat", "proc_stat", "inout_stat",
  "expr_list", "assign", "cond_stat", "loop_stat", "case_stat",
  "case_list", "case", "var", "dim", "expr", "atom", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    46,
      94,    40,    41,    58,    44,    59,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    68,    69,    70,    70,    71,    71,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    78,
      78,    78,    78,    78,    79,    79,    79,    80,    81,    82,
      82,    83,    84,    85,    85,    86,    87,    87,    87,    87,
      87,    87,    87,    88,    89,    89,    90,    90,    91,    91,
      92,    93,    93,    94,    95,    96,    96,    97,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     3,     3,     4,     1,     2,     1,     1,     1,
       3,     6,     5,     8,     1,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     4,     1,
       2,     2,     1,     1,     2,     1,     2,     1,     1,     1,
       2,     2,     2,     4,     4,     3,     4,     4,     1,     3,
       3,     5,     7,     5,     6,     1,     2,     3,     1,     2,
       3,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     2,
       0,     5,     8,     9,     7,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    33,    35,     0,     0,     0,     0,
      37,    38,    39,     0,    24,    25,     0,    26,     0,    32,
       0,     0,    19,    20,    21,    22,    23,     0,     6,     0,
      10,     0,     0,    85,    86,     0,     0,    83,    84,     0,
      81,    82,     0,    80,     0,     0,     0,     0,     0,     3,
      34,    42,    40,    41,    36,     0,     0,    61,     0,    59,
       0,     0,    31,    18,     0,     0,     0,    14,     0,     0,
      58,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    48,    50,    60,     0,    29,
       0,     0,     4,    16,     0,     0,     0,    12,    77,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    47,    46,     0,    43,    44,     0,
      62,    30,    28,     0,    17,    11,    15,     0,     0,    51,
      53,     0,     0,    55,    49,    63,     0,     0,     0,     0,
      54,    56,     0,    13,    52,    57,     0,    27
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     2,     9,    10,    11,    12,    13,    86,    87,    14,
      41,    42,    43,    44,   120,    45,    46,    23,    24,    25,
      26,    60,    28,   114,    29,    30,    31,    32,   162,   163,
      61,    79,   115,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const short int yypact[] =
{
       4,   -18,    39,    13,   -75,   -12,    -5,    25,     1,   -75,
      15,   -75,   -75,   -75,   -75,     2,   -30,   175,   175,   -15,
     175,    -2,     3,    30,    25,   -75,    -3,     7,     8,     9,
     -75,   -75,   -75,    -8,   -75,   -75,    50,   -75,    17,   -75,
       1,    14,   -75,   -75,   -75,   -75,   -75,    25,   -75,    31,
     -75,    31,     1,   -75,   -75,    36,    36,   -75,   -75,   175,
     -75,    34,   285,   -75,   270,   171,   252,    44,    52,   -75,
     -75,   -75,   -75,   -75,   -75,   175,    44,   -75,   175,   -75,
      48,    51,   -75,   -75,    67,     1,    42,    45,    53,    13,
     -75,   -75,   -75,   206,    25,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,    25,    54,
     220,    93,   -24,   -75,    55,   155,   299,    34,    91,    48,
      94,    56,   -75,    69,    13,    31,    57,   -75,   -75,     5,
      -9,    -9,   -75,   -75,   -75,   313,   313,   313,   313,   313,
     313,   -75,    -9,   108,   -75,   -75,    82,   -75,   -75,   175,
      72,   -75,   -75,    87,   -75,   -75,   -75,     1,    25,   -75,
     -75,    79,   126,    82,   -75,   -75,    80,    13,   121,    25,
     -75,   -75,   131,   -75,   -75,   -75,     1,   -75
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
     -75,   -75,   -13,   -75,   138,   -75,   -75,   -48,   -75,   -74,
     -36,   -75,   -75,   -75,    38,   -75,   -75,   -19,   -75,   -75,
     -75,    -6,   -75,     0,   -75,   -75,   -75,   -75,    -4,   -75,
      -7,    10,    78,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const short int yytable[] =
{
      33,    27,    50,    88,    82,    70,   119,     1,    75,     5,
       6,    34,    35,    36,    37,    38,    89,    33,    27,     7,
       5,     6,     5,     6,    97,    98,   158,    99,    84,   159,
       7,    51,    47,    52,   106,    76,    77,     3,   147,     4,
      33,    27,    78,    15,    17,   119,    65,    18,    69,   123,
      16,    76,    77,    19,    91,    92,    39,     8,    78,    67,
     112,    40,    71,    49,    68,    53,    54,    80,     8,   117,
       8,    20,    72,    73,    74,   129,   127,   156,    21,    83,
      22,    53,    54,    81,    55,   122,    85,    33,    27,   143,
      57,    90,    58,    76,    77,    62,    64,    56,    66,    90,
      78,    33,    27,     8,   124,   121,    57,    22,    58,   125,
     146,   155,   152,    59,   113,   126,   144,   148,   154,   153,
     157,   167,    95,    96,    97,    98,   160,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   161,    93,    78,   168,
     177,   166,   169,   110,   170,   174,   176,   172,    48,   164,
     175,    33,    27,   116,   173,     0,   118,   151,   150,   171,
     165,     0,    33,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,    95,    96,    97,    98,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      53,    54,     0,    55,    53,    54,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,     0,   149,
      56,     0,     0,     0,     0,    57,    22,    58,   109,    57,
      22,    58,    59,     0,     0,     0,    59,    95,    96,    97,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    95,    96,    97,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,   111,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,    95,    96,    97,    98,   108,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,    95,    96,    97,    98,    94,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,    95,    96,    97,    98,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      95,    96,    97,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    95,    96,    97,    98,     0,    99,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107
};

static const short int yycheck[] =
{
       7,     7,    15,    51,    40,    24,    80,     3,    16,     7,
       8,    10,    11,    12,    13,    14,    52,    24,    24,    17,
       7,     8,     7,     8,    33,    34,    21,    36,    47,    24,
      17,    61,    17,    63,    43,    59,    60,    55,    62,     0,
      47,    47,    66,    55,    19,   119,    61,    22,    18,    85,
      55,    59,    60,    28,    55,    56,    55,    55,    66,    61,
      67,    60,    65,    61,    61,    29,    30,    17,    55,    76,
      55,    46,    65,    65,    65,    94,    89,   125,    53,    65,
      55,    29,    30,    66,    32,    18,    55,    94,    94,   108,
      54,    55,    56,    59,    60,    17,    18,    45,    20,    55,
      66,   108,   108,    55,    62,    54,    54,    55,    56,    64,
      17,   124,    18,    61,    62,    62,    62,    62,    49,    63,
      63,   157,    31,    32,    33,    34,    18,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    54,    59,    66,   158,
     176,    54,    63,    65,    18,    24,    15,    67,    10,   149,
     169,   158,   158,    75,   167,    -1,    78,   119,    67,   163,
     150,    -1,   169,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      29,    30,    -1,    32,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    64,
      45,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    54,
      55,    56,    61,    -1,    -1,    -1,    61,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    15,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    31,    32,    33,    34,    17,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    20,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,    69,    55,     0,     7,     8,    17,    55,    70,
      71,    72,    73,    74,    77,    55,    55,    19,    22,    28,
      46,    53,    55,    85,    86,    87,    88,    89,    90,    92,
      93,    94,    95,    98,    10,    11,    12,    13,    14,    55,
      60,    78,    79,    80,    81,    83,    84,    17,    72,    61,
      70,    61,    63,    29,    30,    32,    45,    54,    56,    61,
      89,    98,   100,   101,   100,    61,   100,    61,    61,    18,
      85,    65,    65,    65,    65,    16,    59,    60,    66,    99,
      17,    66,    78,    65,    85,    55,    75,    76,    75,    78,
      55,   101,   101,   100,    20,    31,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    17,    57,
     100,    15,    98,    62,    91,   100,   100,    98,   100,    77,
      82,    54,    18,    78,    62,    64,    62,    70,    62,    85,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,    85,    62,    62,    17,    62,    62,    64,
      67,    82,    18,    63,    49,    70,    75,    63,    21,    24,
      18,    54,    96,    97,    91,    99,    54,    78,    85,    63,
      18,    96,    67,    70,    24,    85,    15,    78
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 60 "miny.ypp"
    {(yyval.node_) = new Program((yyvsp[0].node_),(yyvsp[-1].str_)); root=(yyval.node_);;}
    break;

  case 3:
#line 63 "miny.ypp"
    {(yyval.node_) = new Block((yyvsp[-1].node_));;}
    break;

  case 4:
#line 64 "miny.ypp"
    {(yyval.node_) = new Block((yyvsp[-3].node_),(yyvsp[-1].node_));;}
    break;

  case 5:
#line 67 "miny.ypp"
    {(yyval.node_) = new DeclarationList((yyvsp[0].node_));;}
    break;

  case 6:
#line 68 "miny.ypp"
    {(yyval.node_) = new DeclarationList((yyvsp[-1].node_),(yyvsp[0].node_));;}
    break;

  case 7:
#line 71 "miny.ypp"
    {(yyval.node_) =  (yyvsp[0].node_);;}
    break;

  case 8:
#line 72 "miny.ypp"
    {(yyval.node_) = (yyvsp[0].node_);;}
    break;

  case 9:
#line 73 "miny.ypp"
    {(yyval.node_) = (yyvsp[0].node_);;}
    break;

  case 10:
#line 76 "miny.ypp"
    { (yyval.node_) = new ProcedureDeclaration((yyvsp[0].node_),(yyvsp[-1].str_));;}
    break;

  case 11:
#line 77 "miny.ypp"
    { (yyval.node_) = new ProcedureDeclaration((yyvsp[-2].node_),(yyvsp[0].node_),(yyvsp[-4].str_));;}
    break;

  case 12:
#line 80 "miny.ypp"
    {(yyval.node_) = new FunctionDeclaration((yyvsp[-1].node_),(yyvsp[0].node_),(yyvsp[-3].str_));;}
    break;

  case 13:
#line 81 "miny.ypp"
    {(yyval.node_) = new FunctionDeclaration((yyvsp[-1].node_),(yyvsp[-4].node_),(yyvsp[0].node_),(yyvsp[-6].str_));;}
    break;

  case 14:
#line 83 "miny.ypp"
    {(yyval.node_) = new ParameterList((yyvsp[0].node_));;}
    break;

  case 15:
#line 84 "miny.ypp"
    {(yyval.node_) = new ParameterList((yyvsp[-2].node_),(yyvsp[0].node_));;}
    break;

  case 16:
#line 87 "miny.ypp"
    {(yyval.node_) = new ByValueParameter((yyvsp[0].node_),(yyvsp[-1].str_));;}
    break;

  case 17:
#line 88 "miny.ypp"
    {(yyval.node_) = new ByReferenceParameter((yyvsp[-1].node_),(yyvsp[-2].str_));;}
    break;

  case 18:
#line 91 "miny.ypp"
    {(yyval.node_) = new VariableDeclaration((yyvsp[-1].node_),(yyvsp[-2].str_));;}
    break;

  case 19:
#line 94 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 20:
#line 95 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 21:
#line 96 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 22:
#line 97 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 23:
#line 98 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 24:
#line 101 "miny.ypp"
    {(yyval.node_) = new SimpleType("Integer");;}
    break;

  case 25:
#line 102 "miny.ypp"
    {(yyval.node_) = new SimpleType("Real");;}
    break;

  case 26:
#line 103 "miny.ypp"
    {(yyval.node_) = new SimpleType("Boolean");;}
    break;

  case 27:
#line 106 "miny.ypp"
    { (yyval.node_) = new ArrayType((yyvsp[-5].code_),(yyvsp[-3].code_),(yyvsp[0].node_)); ;}
    break;

  case 28:
#line 109 "miny.ypp"
    { (yyval.node_) = new RecordType((yyvsp[-1].node_));;}
    break;

  case 29:
#line 112 "miny.ypp"
    { (yyval.node_) = new RecordList((yyvsp[0].node_));;}
    break;

  case 30:
#line 113 "miny.ypp"
    { (yyval.node_) = new RecordList((yyvsp[-1].node_),(yyvsp[0].node_));;}
    break;

  case 31:
#line 116 "miny.ypp"
    { (yyval.node_) = new AddressType((yyvsp[0].node_));;}
    break;

  case 32:
#line 119 "miny.ypp"
    { (yyval.node_) = new IdeType((yyvsp[0].str_));;}
    break;

  case 33:
#line 122 "miny.ypp"
    {(yyval.node_) = new StatementList((yyvsp[0].node_));;}
    break;

  case 34:
#line 123 "miny.ypp"
    {(yyval.node_) = new StatementList((yyvsp[-1].node_),(yyvsp[0].node_));;}
    break;

  case 35:
#line 126 "miny.ypp"
    {(yyval.node_)=(yyvsp[0].node_);;}
    break;

  case 36:
#line 129 "miny.ypp"
    {(yyval.node_)=(yyvsp[-1].node_);;}
    break;

  case 37:
#line 130 "miny.ypp"
    {(yyval.node_)=(yyvsp[0].node_);;}
    break;

  case 38:
#line 131 "miny.ypp"
    {(yyval.node_)=(yyvsp[0].node_);;}
    break;

  case 39:
#line 132 "miny.ypp"
    {(yyval.node_)=(yyvsp[0].node_);;}
    break;

  case 40:
#line 133 "miny.ypp"
    {(yyval.node_)=(yyvsp[-1].node_);;}
    break;

  case 41:
#line 134 "miny.ypp"
    {(yyval.node_)=(yyvsp[-1].node_);;}
    break;

  case 42:
#line 135 "miny.ypp"
    {(yyval.node_)=(yyvsp[-1].node_);;}
    break;

  case 43:
#line 138 "miny.ypp"
    {(yyval.node_) = new NewStatement((yyvsp[-1].node_));;}
    break;

  case 44:
#line 141 "miny.ypp"
    {(yyval.node_) = new ProcedureStatement((yyvsp[-1].node_),(yyvsp[-3].str_));;}
    break;

  case 45:
#line 142 "miny.ypp"
    {(yyval.node_) = new ProcedureStatement((yyvsp[-2].str_));;}
    break;

  case 46:
#line 145 "miny.ypp"
    {(yyval.node_) = new WriteVarStatement((yyvsp[-1].node_));;}
    break;

  case 47:
#line 146 "miny.ypp"
    {(yyval.node_) = new WriteStrStatement((yyvsp[-1].str_));;}
    break;

  case 48:
#line 149 "miny.ypp"
    {(yyval.node_) = new ExprList((yyvsp[0].node_));;}
    break;

  case 49:
#line 150 "miny.ypp"
    {(yyval.node_) = new ExprList((yyvsp[-2].node_),(yyvsp[0].node_));;}
    break;

  case 50:
#line 153 "miny.ypp"
    {(yyval.node_) = new Assign((yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 51:
#line 156 "miny.ypp"
    {(yyval.node_) = new ConditionalStatement((yyvsp[-3].node_),(yyvsp[-1].node_));;}
    break;

  case 52:
#line 157 "miny.ypp"
    {(yyval.node_) = new ConditionalStatement((yyvsp[-5].node_),(yyvsp[-3].node_),(yyvsp[-1].node_));;}
    break;

  case 53:
#line 160 "miny.ypp"
    {(yyval.node_) = new LoopStatement((yyvsp[-3].node_),(yyvsp[-1].node_));;}
    break;

  case 54:
#line 163 "miny.ypp"
    {(yyval.node_) = new CaseStatement((yyvsp[-4].node_),(yyvsp[-1].node_));;}
    break;

  case 55:
#line 166 "miny.ypp"
    {(yyval.node_) = new CaseList((yyvsp[0].node_));;}
    break;

  case 56:
#line 167 "miny.ypp"
    {(yyval.node_) = new CaseList((yyvsp[-1].node_),(yyvsp[0].node_));;}
    break;

  case 57:
#line 170 "miny.ypp"
    {(yyval.node_) = new Case((yyvsp[0].node_),(yyvsp[-2].code_));;}
    break;

  case 58:
#line 173 "miny.ypp"
    { (yyval.node_) = new IdeType((yyvsp[0].str_));;}
    break;

  case 59:
#line 174 "miny.ypp"
    { (yyval.node_) = new ArrayRef((yyvsp[-1].node_),(yyvsp[0].node_)); ;}
    break;

  case 60:
#line 175 "miny.ypp"
    { (yyval.node_) = new RecordRef((yyvsp[-2].node_),(yyvsp[0].node_));;}
    break;

  case 61:
#line 176 "miny.ypp"
    { (yyval.node_) = new AddressRef((yyvsp[-1].node_));;}
    break;

  case 62:
#line 179 "miny.ypp"
    { (yyval.node_) = new Dim((yyvsp[-1].node_)); ;}
    break;

  case 63:
#line 180 "miny.ypp"
    { (yyval.node_) = new Dim((yyvsp[-2].node_),(yyvsp[0].node_)); ;}
    break;

  case 64:
#line 183 "miny.ypp"
    { (yyval.node_) = new Expr(ADD,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 65:
#line 184 "miny.ypp"
    { (yyval.node_) = new Expr(MIN,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 66:
#line 185 "miny.ypp"
    { (yyval.node_) = new Expr(MUL,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 67:
#line 186 "miny.ypp"
    { (yyval.node_) = new Expr(DIV,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 68:
#line 187 "miny.ypp"
    { (yyval.node_) = new Expr(MOD,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 69:
#line 188 "miny.ypp"
    { (yyval.node_) = new Expr(LES,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 70:
#line 189 "miny.ypp"
    { (yyval.node_) = new Expr(LEQ,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 71:
#line 190 "miny.ypp"
    { (yyval.node_) = new Expr(EQU,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 72:
#line 191 "miny.ypp"
    { (yyval.node_) = new Expr(NEQ,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 73:
#line 192 "miny.ypp"
    { (yyval.node_) = new Expr(GRE,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 74:
#line 193 "miny.ypp"
    { (yyval.node_) = new Expr(GEQ,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 75:
#line 194 "miny.ypp"
    { (yyval.node_) = new Expr(AND,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 76:
#line 195 "miny.ypp"
    { (yyval.node_) = new Expr(OR,(yyvsp[0].node_),(yyvsp[-2].node_));;}
    break;

  case 77:
#line 196 "miny.ypp"
    { (yyval.node_) = (yyvsp[-1].node_); ;}
    break;

  case 78:
#line 197 "miny.ypp"
    { (yyval.node_) = new Expr(MIN,(yyvsp[0].node_)); ;}
    break;

  case 79:
#line 198 "miny.ypp"
    { (yyval.node_) = new Expr(NOT,(yyvsp[0].node_)); ;}
    break;

  case 80:
#line 199 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 81:
#line 200 "miny.ypp"
    {(yyval.node_)=(yyvsp[0].node_);;}
    break;

  case 82:
#line 204 "miny.ypp"
    { (yyval.node_) = (yyvsp[0].node_); ;}
    break;

  case 83:
#line 205 "miny.ypp"
    { (yyval.node_) = new IntConst((yyvsp[0].code_)); ;}
    break;

  case 84:
#line 206 "miny.ypp"
    { (yyval.node_) = new RealConst((yyvsp[0].real_));;}
    break;

  case 85:
#line 207 "miny.ypp"
    { (yyval.node_) = new True(); ;}
    break;

  case 86:
#line 208 "miny.ypp"
    { (yyval.node_) = new False(); ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 1857 "miny.tab.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 211 "miny.ypp"

// Deallocate all the nodes 
void clear_stack ()
{
  while (!nodes.empty ()) {
    delete nodes.top ();
    nodes.pop ();
  }
}

void yyerror(char const * msg)
{
	fprintf(stderr, "Parse error: %s", msg);
}


