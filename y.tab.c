/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char*);
#define YYSTYPE char *

int ii = 0, itop = -1, istack[100];
int ww = 0, wtop = -1, wstack[100];

#define _BEG_IF     {istack[++itop] = ++ii;}
#define _END_IF     {itop--;}
#define _i          (istack[itop])

#define _BEG_WHILE  {wstack[++wtop] = ++ww;}
#define _END_WHILE  {wtop--;}
#define _w          (wstack[wtop])


#line 86 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    p0 = 258,
    p1 = 259,
    p2 = 260,
    p3 = 261,
    p4 = 262,
    p5 = 263,
    p6 = 264,
    p7 = 265,
    p8 = 266,
    p9 = 267,
    p10 = 268,
    p11 = 269,
    p12 = 270,
    p13 = 271,
    p14 = 272,
    p15 = 273,
    p16 = 274,
    p17 = 275,
    p18 = 276,
    p19 = 277,
    p20 = 278,
    p21 = 279,
    p22 = 280,
    p23 = 281,
    p24 = 282,
    p25 = 283,
    p26 = 284,
    p27 = 285,
    p28 = 286,
    p29 = 287,
    p30 = 288,
    p31 = 289,
    p32 = 290,
    p33 = 291,
    p34 = 292,
    p35 = 293,
    p36 = 294,
    p37 = 295,
    p38 = 296,
    p39 = 297,
    p40 = 298,
    p41 = 299,
    p42 = 300,
    p43 = 301,
    p44 = 302,
    p45 = 303,
    p46 = 304,
    p47 = 305,
    p48 = 306,
    p49 = 307,
    p50 = 308,
    p51 = 309,
    p52 = 310,
    p53 = 311,
    p54 = 312,
    p55 = 313,
    p56 = 314,
    p57 = 315,
    p58 = 316,
    p59 = 317,
    p60 = 318,
    p61 = 319,
    p62 = 320,
    p130 = 321,
    p63 = 322,
    p64 = 323,
    p65 = 324,
    p66 = 325,
    p67 = 326,
    p68 = 327,
    p69 = 328,
    p70 = 329,
    p71 = 330,
    p72 = 331,
    p73 = 332,
    p74 = 333,
    p75 = 334,
    p76 = 335,
    p77 = 336,
    p78 = 337,
    p79 = 338,
    p80 = 339,
    p81 = 340,
    p82 = 341,
    p83 = 342,
    p84 = 343,
    p85 = 344,
    p86 = 345,
    p98 = 346,
    p99 = 347,
    p100 = 348,
    p101 = 349,
    p102 = 350,
    p103 = 351,
    p104 = 352,
    p105 = 353,
    p106 = 354,
    p107 = 355,
    p110 = 356,
    p120 = 357,
    p121 = 358,
    p127 = 359,
    p128 = 360,
    p129 = 361,
    p87 = 362,
    p88 = 363,
    p89 = 364,
    p90 = 365,
    p91 = 366,
    p92 = 367,
    p93 = 368,
    p94 = 369,
    p95 = 370,
    p96 = 371,
    p97 = 372,
    p108 = 373,
    p109 = 374,
    p111 = 375,
    p112 = 376,
    p113 = 377,
    p114 = 378,
    p115 = 379,
    p116 = 380,
    p117 = 381,
    p118 = 382,
    p119 = 383,
    p122 = 384,
    p123 = 385,
    p124 = 386,
    p125 = 387,
    p126 = 388,
    p200 = 389,
    p131 = 390,
    p132 = 391,
    p133 = 392
  };
#endif
/* Tokens.  */
#define p0 258
#define p1 259
#define p2 260
#define p3 261
#define p4 262
#define p5 263
#define p6 264
#define p7 265
#define p8 266
#define p9 267
#define p10 268
#define p11 269
#define p12 270
#define p13 271
#define p14 272
#define p15 273
#define p16 274
#define p17 275
#define p18 276
#define p19 277
#define p20 278
#define p21 279
#define p22 280
#define p23 281
#define p24 282
#define p25 283
#define p26 284
#define p27 285
#define p28 286
#define p29 287
#define p30 288
#define p31 289
#define p32 290
#define p33 291
#define p34 292
#define p35 293
#define p36 294
#define p37 295
#define p38 296
#define p39 297
#define p40 298
#define p41 299
#define p42 300
#define p43 301
#define p44 302
#define p45 303
#define p46 304
#define p47 305
#define p48 306
#define p49 307
#define p50 308
#define p51 309
#define p52 310
#define p53 311
#define p54 312
#define p55 313
#define p56 314
#define p57 315
#define p58 316
#define p59 317
#define p60 318
#define p61 319
#define p62 320
#define p130 321
#define p63 322
#define p64 323
#define p65 324
#define p66 325
#define p67 326
#define p68 327
#define p69 328
#define p70 329
#define p71 330
#define p72 331
#define p73 332
#define p74 333
#define p75 334
#define p76 335
#define p77 336
#define p78 337
#define p79 338
#define p80 339
#define p81 340
#define p82 341
#define p83 342
#define p84 343
#define p85 344
#define p86 345
#define p98 346
#define p99 347
#define p100 348
#define p101 349
#define p102 350
#define p103 351
#define p104 352
#define p105 353
#define p106 354
#define p107 355
#define p110 356
#define p120 357
#define p121 358
#define p127 359
#define p128 360
#define p129 361
#define p87 362
#define p88 363
#define p89 364
#define p90 365
#define p91 366
#define p92 367
#define p93 368
#define p94 369
#define p95 370
#define p96 371
#define p97 372
#define p108 373
#define p109 374
#define p111 375
#define p112 376
#define p113 377
#define p114 378
#define p115 379
#define p116 380
#define p117 381
#define p118 382
#define p119 383
#define p122 384
#define p123 385
#define p124 386
#define p125 387
#define p126 388
#define p200 389
#define p131 390
#define p132 391
#define p133 392

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 411 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    54,    59,    63,    64,    68,    69,
      73,    74,    78,    79,    80,    84,    84,    85,    89,    90,
      94,    95,    96,    97,    98,    99,   100,   101,   105,   109,
     114,   115,   119,   123,   127,   128,   132,   133,   137,   139,
     144,   148,   152,   156,   160,   164,   168,   172,   177,   181,
     185,   190,   194,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   220
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "p0", "p1", "p2", "p3", "p4", "p5", "p6",
  "p7", "p8", "p9", "p10", "p11", "p12", "p13", "p14", "p15", "p16", "p17",
  "p18", "p19", "p20", "p21", "p22", "p23", "p24", "p25", "p26", "p27",
  "p28", "p29", "p30", "p31", "p32", "p33", "p34", "p35", "p36", "p37",
  "p38", "p39", "p40", "p41", "p42", "p43", "p44", "p45", "p46", "p47",
  "p48", "p49", "p50", "p51", "p52", "p53", "p54", "p55", "p56", "p57",
  "p58", "p59", "p60", "p61", "p62", "p130", "p63", "p64", "p65", "p66",
  "p67", "p68", "p69", "p70", "p71", "p72", "p73", "p74", "p75", "p76",
  "p77", "p78", "p79", "p80", "p81", "p82", "p83", "p84", "p85", "p86",
  "p98", "p99", "p100", "p101", "p102", "p103", "p104", "p105", "p106",
  "p107", "p110", "p120", "p121", "p127", "p128", "p129", "p87", "p88",
  "p89", "p90", "p91", "p92", "p93", "p94", "p95", "p96", "p97", "p108",
  "p109", "p111", "p112", "p113", "p114", "p115", "p116", "p117", "p118",
  "p119", "p122", "p123", "p124", "p125", "p126", "p200", "p131", "p132",
  "p133", "$accept", "Pro", "Func", "FuncName", "Args", "_Args",
  "VarDecls", "VarDecl", "Equation", "$@1", "Stmts", "Stmt", "AssignStmt",
  "PrintStmt", "PActuals", "CallStmt", "CallExpr", "Actuals", "ReturnStmt",
  "IfStmt", "TestExpr", "StmtsBlock", "If", "Then", "EndThen", "Else",
  "EndIf", "WhileStmt", "While", "Do", "EndWhile", "BreakStmt",
  "ContinueStmt", "Expr", "ReadInt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392
};
# endif

#define YYPACT_NINF -132

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-132)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -132,    17,  -132,  -131,  -132,  -132,   -99,   -22,  -114,   -86,
     -44,  -132,   -61,    18,  -132,   -70,    27,  -132,   -68,   -43,
      -6,   -35,   -27,  -132,   -60,   -18,   -17,  -132,   -36,  -132,
    -132,   -98,   -24,  -132,  -132,  -132,  -132,    -8,  -132,  -132,
     -23,  -132,   -23,  -132,  -132,  -132,   -40,  -132,  -132,  -132,
    -132,   -67,  -132,   -67,   -16,   -15,  -132,   -47,  -132,   -67,
     -67,     8,  -132,   -67,  -132,  -132,   -67,   -35,   -27,  -132,
      31,    16,  -132,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,    -3,   -13,    82,  -132,
      57,   -11,   -11,    82,  -132,    -9,   -25,   -25,   -87,   -87,
    -132,  -132,   131,   107,   -25,   -25,    37,    37,  -132,  -132,
    -132,    12,   -93,  -132,  -132,  -132,  -132,  -132,   -67,    19,
      -4,    92,  -132,    82,  -132,  -132,  -132,   -11,  -132,  -132,
    -132
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     5,     0,     6,     0,     0,
       7,     8,     0,     0,    10,     0,    18,     9,     0,     0,
       0,    12,    14,    11,     0,     0,     0,    42,     0,    48,
       4,     0,     0,    19,    20,    21,    22,     0,    23,    24,
       0,    25,     0,    26,    27,    15,     0,    13,    51,    52,
      67,     0,    37,     0,    68,     0,    70,     0,    69,     0,
      34,     0,    32,     0,    43,    49,     0,     0,    17,    66,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    30,
       0,     0,     0,    16,    71,     0,    59,    58,    53,    54,
      55,    56,    65,    64,    61,    60,    62,    63,    57,    28,
      33,    35,     0,    40,    18,    44,    50,    72,     0,     0,
       0,    46,    47,    31,    29,    41,    45,     0,    38,    46,
      39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,    68,  -132,
       3,  -132,  -132,  -132,    29,  -132,   -19,  -132,  -132,  -132,
      77,   -82,  -132,  -132,  -132,  -132,     6,  -132,  -132,  -132,
    -132,  -132,  -132,   -45,  -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,     6,     9,    10,    16,    19,    22,    66,
      20,    33,    34,    35,   111,    36,    56,    87,    38,    39,
      64,   115,    40,    91,   121,   127,   128,    41,    42,    92,
     122,    43,    44,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      25,    37,    25,     5,   118,    59,    69,    26,    70,    26,
     116,    50,     7,    60,    86,    88,     8,     2,    90,   119,
      11,    93,    77,    78,    51,    27,    12,    27,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    28,    50,    28,    53,   129,     3,    72,    73,    74,
      85,    23,    14,    13,    24,    51,    15,    29,    52,    29,
      75,    76,    77,    78,    17,    18,    21,    54,    45,    55,
      46,    79,    80,   123,    47,    53,    48,    49,    81,    82,
      83,    84,    75,    76,    77,    78,    62,    61,    63,    89,
      85,   109,    73,    74,    67,    60,    71,    95,    54,   110,
      55,    37,   114,   117,    75,    76,    77,    78,    30,   118,
     125,   126,    85,   124,    68,    79,    80,   120,   112,    65,
       0,     0,    81,    82,    83,    84,    73,    74,    31,    32,
      31,    32,    73,    74,    85,   130,     0,     0,    75,    76,
      77,    78,     0,    94,    75,    76,    77,    78,     0,    79,
      80,     0,    73,    74,     0,     0,    81,    82,    83,    84,
       0,     0,    81,    82,    75,    76,    77,    78,    85,   113,
       0,     0,     0,     0,    85,    79,    80,    73,    74,     0,
       0,     0,    81,    82,    83,    84,     0,     0,     0,    75,
      76,    77,    78,     0,    85,     0,     0,     0,     0,     0,
      79,    80,    73,    74,     0,     0,     0,    81,    82,    83,
      84,     0,     0,     0,    75,    76,    77,    78,     0,    85,
       0,     0,     0,     0,     0,    79,    73,    74,     0,     0,
       0,     0,    81,    82,    83,    84,     0,     0,    75,    76,
      77,    78,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,    85
};

static const yytype_int16 yycheck[] =
{
       6,    20,     6,   134,    97,   103,    51,    13,    53,    13,
      92,    78,   111,   111,    59,    60,    38,     0,    63,   112,
     134,    66,   109,   110,    91,    31,   112,    31,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    47,    78,    47,   111,   127,    29,    94,    95,    96,
     137,    94,   113,    97,    97,    91,    38,    63,    94,    63,
     107,   108,   109,   110,   134,    38,   134,   134,   103,   136,
      97,   118,   119,   118,   134,   111,    94,    94,   125,   126,
     127,   128,   107,   108,   109,   110,    94,   111,   111,    81,
     137,    94,    95,    96,   134,   111,   111,    81,   134,   112,
     136,   120,   113,   112,   107,   108,   109,   110,   114,    97,
     114,    19,   137,    94,    46,   118,   119,   114,    89,    42,
      -1,    -1,   125,   126,   127,   128,    95,    96,   134,   135,
     134,   135,    95,    96,   137,   129,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   107,   108,   109,   110,    -1,   118,
     119,    -1,    95,    96,    -1,    -1,   125,   126,   127,   128,
      -1,    -1,   125,   126,   107,   108,   109,   110,   137,   112,
      -1,    -1,    -1,    -1,   137,   118,   119,    95,    96,    -1,
      -1,    -1,   125,   126,   127,   128,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   137,    -1,    -1,    -1,    -1,    -1,
     118,   119,    95,    96,    -1,    -1,    -1,   125,   126,   127,
     128,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   137,
      -1,    -1,    -1,    -1,    -1,   118,    95,    96,    -1,    -1,
      -1,    -1,   125,   126,   127,   128,    -1,    -1,   107,   108,
     109,   110,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   139,     0,    29,   140,   134,   141,   111,    38,   142,
     143,   134,   112,    97,   113,    38,   144,   134,    38,   145,
     148,   134,   146,    94,    97,     6,    13,    31,    47,    63,
     114,   134,   135,   149,   150,   151,   153,   154,   156,   157,
     160,   165,   166,   169,   170,   103,    97,   134,    94,    94,
      78,    91,    94,   111,   134,   136,   154,   171,   172,   103,
     111,   111,    94,   111,   158,   158,   147,   134,   146,   171,
     171,   111,    94,    95,    96,   107,   108,   109,   110,   118,
     119,   125,   126,   127,   128,   137,   171,   155,   171,    81,
     171,   161,   167,   171,   112,    81,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,    94,
     112,   152,   152,   112,   113,   159,   159,   112,    97,   112,
     148,   162,   168,   171,    94,   114,    19,   163,   164,   159,
     164
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   138,   139,   139,   140,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   145,   147,   146,   146,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   151,
     152,   152,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     9,     1,     0,     1,     2,     4,
       0,     3,     2,     3,     2,     0,     4,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       0,     3,     2,     4,     0,     2,     3,     2,     6,     8,
       3,     3,     1,     0,     0,     1,     0,     5,     1,     0,
       0,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       1,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
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
      YYSIZE_T yyn = 0;
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

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
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 49 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "parser.y" /* yacc.c:1646  */
    { printf("ENDFUNC\n\n"); }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "parser.y" /* yacc.c:1646  */
    { printf("FUNC @%s:\n", (yyvsp[0])); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "parser.y" /* yacc.c:1646  */
    { printf("\n\n"); }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "parser.y" /* yacc.c:1646  */
    { printf("\targ %s", (yyvsp[0])); }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "parser.y" /* yacc.c:1646  */
    { printf(", %s", (yyvsp[0])); }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 73 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "parser.y" /* yacc.c:1646  */
    { printf("\n\n"); }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "parser.y" /* yacc.c:1646  */
    { printf("\tvar %s", (yyvsp[0])); }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "parser.y" /* yacc.c:1646  */
    { printf(", %s", (yyvsp[0])); }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("\tvar %s\n", (yyvsp[-1]));}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("\tpop %s\n\n", (yyvsp[-3]));}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 90 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 94 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 98 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 99 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 100 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 101 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "parser.y" /* yacc.c:1646  */
    { printf("\tpop %s\n\n", (yyvsp[-3])); }
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 110 "parser.y" /* yacc.c:1646  */
    { printf("\tprint %s\n\n", (yyvsp[-3])); }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 114 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "parser.y" /* yacc.c:1646  */
    { printf("\tpop\n\n"); }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "parser.y" /* yacc.c:1646  */
    { printf("\t$%s\n", (yyvsp[-3])); }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 127 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 132 "parser.y" /* yacc.c:1646  */
    { printf("\tret ~\n\n"); }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 133 "parser.y" /* yacc.c:1646  */
    { printf("\tret\n\n"); }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 148 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 152 "parser.y" /* yacc.c:1646  */
    { _BEG_IF; printf("_begIf_%d:\n", _i); }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 156 "parser.y" /* yacc.c:1646  */
    { printf("\tjz _elIf_%d\n", _i); }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 160 "parser.y" /* yacc.c:1646  */
    { printf("\tjmp _endIf_%d\n_elIf_%d:\n", _i, _i); }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 168 "parser.y" /* yacc.c:1646  */
    { printf("_endIf_%d:\n\n", _i); _END_IF; }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 173 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 177 "parser.y" /* yacc.c:1646  */
    { _BEG_WHILE; printf("_begWhile_%d:\n", _w); }
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 181 "parser.y" /* yacc.c:1646  */
    { printf("\tjz _endWhile_%d\n", _w); }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "parser.y" /* yacc.c:1646  */
    { printf("\tjmp _begWhile_%d\n_endWhile_%d:\n\n",
                                _w, _w); _END_WHILE; }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 190 "parser.y" /* yacc.c:1646  */
    { printf("\tjmp _endWhile_%d\n", _w); }
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 194 "parser.y" /* yacc.c:1646  */
    { printf("\tjmp _begWhile_%d\n", _w); }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 198 "parser.y" /* yacc.c:1646  */
    { printf("\tadd\n"); }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 199 "parser.y" /* yacc.c:1646  */
    { printf("\tsub\n"); }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 200 "parser.y" /* yacc.c:1646  */
    { printf("\tmul\n"); }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 201 "parser.y" /* yacc.c:1646  */
    { printf("\tdiv\n"); }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 202 "parser.y" /* yacc.c:1646  */
    { printf("\tmod\n"); }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "parser.y" /* yacc.c:1646  */
    { printf("\tcmpgt\n"); }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 204 "parser.y" /* yacc.c:1646  */
    { printf("\tcmplt\n"); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 205 "parser.y" /* yacc.c:1646  */
    { printf("\tcmpge\n"); }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 206 "parser.y" /* yacc.c:1646  */
    { printf("\tcmple\n"); }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 207 "parser.y" /* yacc.c:1646  */
    { printf("\tcmpeq\n"); }
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 208 "parser.y" /* yacc.c:1646  */
    { printf("\tcmpne\n"); }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 209 "parser.y" /* yacc.c:1646  */
    { printf("\tor\n"); }
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 210 "parser.y" /* yacc.c:1646  */
    { printf("\tand\n"); }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 211 "parser.y" /* yacc.c:1646  */
    { printf("\tnot\n"); }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "parser.y" /* yacc.c:1646  */
    { printf("\tpush %s\n", (yyvsp[0])); }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 213 "parser.y" /* yacc.c:1646  */
    { printf("\tpush %s\n", (yyvsp[0])); }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 214 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 215 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 216 "parser.y" /* yacc.c:1646  */
    { /* empty */ }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 220 "parser.y" /* yacc.c:1646  */
    { printf("\treadint %s\n", (yyvsp[-1])); }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2052 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 225 "parser.y" /* yacc.c:1906  */


int main() {
    return yyparse();
}
