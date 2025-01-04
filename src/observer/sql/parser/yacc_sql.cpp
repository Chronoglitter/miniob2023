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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* First part of user prologue.  */
#line 2 "yacc_sql.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#include "common/log/log.h"
#include "common/lang/string.h"
#include "sql/parser/parse_defs.h"
#include "sql/parser/yacc_sql.hpp"
#include "sql/parser/lex_sql.h"
#include "sql/expr/expression.h"

using namespace std;

string token_name(const char *sql_string, YYLTYPE *llocp)
{
  return string(sql_string + llocp->first_column, llocp->last_column - llocp->first_column + 1);
}

int yyerror(YYLTYPE *llocp, const char *sql_string, ParsedSqlResult *sql_result, yyscan_t scanner, const char *msg,
    enum SqlCommandFlag flag = SCF_ERROR)
{
  std::unique_ptr<ParsedSqlNode> error_sql_node = std::make_unique<ParsedSqlNode>(flag);
  error_sql_node->error.error_msg = msg;
  error_sql_node->error.line = llocp->first_line;
  error_sql_node->error.column = llocp->first_column;
  sql_result->add_sql_node(std::move(error_sql_node));
  return 0;
}

ArithmeticExpr *create_arithmetic_expression(
    ArithmeticExpr::Type type, Expression *left, Expression *right, const char *sql_string, YYLTYPE *llocp)
{
  ArithmeticExpr *expr = new ArithmeticExpr(type, left, right);
  expr->set_name(token_name(sql_string, llocp));
  return expr;
}

#line 115 "yacc_sql.cpp"

#ifndef YY_CAST
#ifdef __cplusplus
#define YY_CAST(Type, Val) static_cast<Type>(Val)
#define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type>(Val)
#else
#define YY_CAST(Type, Val) ((Type)(Val))
#define YY_REINTERPRET_CAST(Type, Val) ((Type)(Val))
#endif
#endif
#ifndef YY_NULLPTR
#if defined __cplusplus
#if 201103L <= __cplusplus
#define YY_NULLPTR nullptr
#else
#define YY_NULLPTR 0
#endif
#else
#define YY_NULLPTR ((void *)0)
#endif
#endif

#include "yacc_sql.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* SEMICOLON  */
  YYSYMBOL_CREATE = 4,                     /* CREATE  */
  YYSYMBOL_DROP = 5,                       /* DROP  */
  YYSYMBOL_TABLE = 6,                      /* TABLE  */
  YYSYMBOL_TABLES = 7,                     /* TABLES  */
  YYSYMBOL_VIEW = 8,                       /* VIEW  */
  YYSYMBOL_INDEX = 9,                      /* INDEX  */
  YYSYMBOL_UNIQUE = 10,                    /* UNIQUE  */
  YYSYMBOL_CALC = 11,                      /* CALC  */
  YYSYMBOL_SELECT = 12,                    /* SELECT  */
  YYSYMBOL_SHOW = 13,                      /* SHOW  */
  YYSYMBOL_SYNC = 14,                      /* SYNC  */
  YYSYMBOL_INSERT = 15,                    /* INSERT  */
  YYSYMBOL_DELETE = 16,                    /* DELETE  */
  YYSYMBOL_UPDATE = 17,                    /* UPDATE  */
  YYSYMBOL_LBRACE = 18,                    /* LBRACE  */
  YYSYMBOL_AGGR_MAX = 19,                  /* AGGR_MAX  */
  YYSYMBOL_AGGR_MIN = 20,                  /* AGGR_MIN  */
  YYSYMBOL_AGGR_SUM = 21,                  /* AGGR_SUM  */
  YYSYMBOL_AGGR_AVG = 22,                  /* AGGR_AVG  */
  YYSYMBOL_AGGR_COUNT = 23,                /* AGGR_COUNT  */
  YYSYMBOL_LENGTH = 24,                    /* LENGTH  */
  YYSYMBOL_ROUND = 25,                     /* ROUND  */
  YYSYMBOL_DATE_FORMAT = 26,               /* DATE_FORMAT  */
  YYSYMBOL_ASC = 27,                       /* ASC  */
  YYSYMBOL_DESC = 28,                      /* DESC  */
  YYSYMBOL_RBRACE = 29,                    /* RBRACE  */
  YYSYMBOL_INNER = 30,                     /* INNER  */
  YYSYMBOL_JOIN = 31,                      /* JOIN  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_TRX_BEGIN = 33,                 /* TRX_BEGIN  */
  YYSYMBOL_TRX_COMMIT = 34,                /* TRX_COMMIT  */
  YYSYMBOL_TRX_ROLLBACK = 35,              /* TRX_ROLLBACK  */
  YYSYMBOL_INT_T = 36,                     /* INT_T  */
  YYSYMBOL_ORDER = 37,                     /* ORDER  */
  YYSYMBOL_GROUP = 38,                     /* GROUP  */
  YYSYMBOL_BY = 39,                        /* BY  */
  YYSYMBOL_STRING_T = 40,                  /* STRING_T  */
  YYSYMBOL_TEXT_T = 41,                    /* TEXT_T  */
  YYSYMBOL_FLOAT_T = 42,                   /* FLOAT_T  */
  YYSYMBOL_DATE_T = 43,                    /* DATE_T  */
  YYSYMBOL_HELP = 44,                      /* HELP  */
  YYSYMBOL_EXIT = 45,                      /* EXIT  */
  YYSYMBOL_DOT = 46,                       /* DOT  */
  YYSYMBOL_INTO = 47,                      /* INTO  */
  YYSYMBOL_VALUES = 48,                    /* VALUES  */
  YYSYMBOL_FROM = 49,                      /* FROM  */
  YYSYMBOL_WHERE = 50,                     /* WHERE  */
  YYSYMBOL_AND = 51,                       /* AND  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_SET = 53,                       /* SET  */
  YYSYMBOL_ON = 54,                        /* ON  */
  YYSYMBOL_LOAD = 55,                      /* LOAD  */
  YYSYMBOL_DATA = 56,                      /* DATA  */
  YYSYMBOL_INFILE = 57,                    /* INFILE  */
  YYSYMBOL_EXPLAIN = 58,                   /* EXPLAIN  */
  YYSYMBOL_EQ = 59,                        /* EQ  */
  YYSYMBOL_LT = 60,                        /* LT  */
  YYSYMBOL_GT = 61,                        /* GT  */
  YYSYMBOL_LE = 62,                        /* LE  */
  YYSYMBOL_GE = 63,                        /* GE  */
  YYSYMBOL_NE = 64,                        /* NE  */
  YYSYMBOL_NOT = 65,                       /* NOT  */
  YYSYMBOL_IS = 66,                        /* IS  */
  YYSYMBOL_AS = 67,                        /* AS  */
  YYSYMBOL_LIKE = 68,                      /* LIKE  */
  YYSYMBOL_EXISTS = 69,                    /* EXISTS  */
  YYSYMBOL_IN = 70,                        /* IN  */
  YYSYMBOL_DEFAULT = 71,                   /* DEFAULT  */
  YYSYMBOL_HAVING = 72,                    /* HAVING  */
  YYSYMBOL_NULL_T = 73,                    /* NULL_T  */
  YYSYMBOL_NUMBER = 74,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 75,                     /* FLOAT  */
  YYSYMBOL_ID = 76,                        /* ID  */
  YYSYMBOL_SSS = 77,                       /* SSS  */
  YYSYMBOL_DATE = 78,                      /* DATE  */
  YYSYMBOL_79_ = 79,                       /* '+'  */
  YYSYMBOL_80_ = 80,                       /* '-'  */
  YYSYMBOL_81_ = 81,                       /* '*'  */
  YYSYMBOL_82_ = 82,                       /* '/'  */
  YYSYMBOL_83_ = 83,                       /* '%'  */
  YYSYMBOL_UMINUS = 84,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_commands = 86,                  /* commands  */
  YYSYMBOL_command_wrapper = 87,           /* command_wrapper  */
  YYSYMBOL_exit_stmt = 88,                 /* exit_stmt  */
  YYSYMBOL_help_stmt = 89,                 /* help_stmt  */
  YYSYMBOL_sync_stmt = 90,                 /* sync_stmt  */
  YYSYMBOL_begin_stmt = 91,                /* begin_stmt  */
  YYSYMBOL_commit_stmt = 92,               /* commit_stmt  */
  YYSYMBOL_rollback_stmt = 93,             /* rollback_stmt  */
  YYSYMBOL_drop_table_stmt = 94,           /* drop_table_stmt  */
  YYSYMBOL_show_tables_stmt = 95,          /* show_tables_stmt  */
  YYSYMBOL_desc_table_stmt = 96,           /* desc_table_stmt  */
  YYSYMBOL_load_data_stmt = 97,            /* load_data_stmt  */
  YYSYMBOL_explain_stmt = 98,              /* explain_stmt  */
  YYSYMBOL_set_variable_stmt = 99,         /* set_variable_stmt  */
  YYSYMBOL_create_index_stmt = 100,        /* create_index_stmt  */
  YYSYMBOL_drop_index_stmt = 101,          /* drop_index_stmt  */
  YYSYMBOL_create_table_stmt = 102,        /* create_table_stmt  */
  YYSYMBOL_create_table_select_stmt = 103, /* create_table_select_stmt  */
  YYSYMBOL_create_view_stmt = 104,         /* create_view_stmt  */
  YYSYMBOL_insert_stmt = 105,              /* insert_stmt  */
  YYSYMBOL_delete_stmt = 106,              /* delete_stmt  */
  YYSYMBOL_update_stmt = 107,              /* update_stmt  */
  YYSYMBOL_select_stmt = 108,              /* select_stmt  */
  YYSYMBOL_calc_stmt = 109,                /* calc_stmt  */
  YYSYMBOL_assignment_list = 110,          /* assignment_list  */
  YYSYMBOL_select_attr = 111,              /* select_attr  */
  YYSYMBOL_select_attr_list = 112,         /* select_attr_list  */
  YYSYMBOL_select_from = 113,              /* select_from  */
  YYSYMBOL_from_list = 114,                /* from_list  */
  YYSYMBOL_inner_join = 115,               /* inner_join  */
  YYSYMBOL_where = 116,                    /* where  */
  YYSYMBOL_group_by = 117,                 /* group_by  */
  YYSYMBOL_group_by_list = 118,            /* group_by_list  */
  YYSYMBOL_having = 119,                   /* having  */
  YYSYMBOL_order_by = 120,                 /* order_by  */
  YYSYMBOL_order_condtions = 121,          /* order_condtions  */
  YYSYMBOL_subquery_pexpr = 122,           /* subquery_pexpr  */
  YYSYMBOL_id_list = 123,                  /* id_list  */
  YYSYMBOL_attr_def_list = 124,            /* attr_def_list  */
  YYSYMBOL_attr_def = 125,                 /* attr_def  */
  YYSYMBOL_number = 126,                   /* number  */
  YYSYMBOL_type = 127,                     /* type  */
  YYSYMBOL_value = 128,                    /* value  */
  YYSYMBOL_rel_attr = 129,                 /* rel_attr  */
  YYSYMBOL_expression_list = 130,          /* expression_list  */
  YYSYMBOL_expression = 131,               /* expression  */
  YYSYMBOL_unary_pexpr = 132,              /* unary_pexpr  */
  YYSYMBOL_cond_pexpr = 133,               /* cond_pexpr  */
  YYSYMBOL_arith_pexpr = 134,              /* arith_pexpr  */
  YYSYMBOL_func_pexpr = 135,               /* func_pexpr  */
  YYSYMBOL_list_pexpr = 136,               /* list_pexpr  */
  YYSYMBOL_aggr_func_type = 137,           /* aggr_func_type  */
  YYSYMBOL_aggr_pexpr = 138,               /* aggr_pexpr  */
  YYSYMBOL_aggr_pexpr_list = 139,          /* aggr_pexpr_list  */
  YYSYMBOL_pexpr = 140,                    /* pexpr  */
  YYSYMBOL_pexpr_list = 141,               /* pexpr_list  */
  YYSYMBOL_opt_semicolon = 142             /* opt_semicolon  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;

#ifdef short
#undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
#include <limits.h> /* INFRINGES ON USER NAME SPACE */
#if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#define YY_STDINT_H
#endif
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
#undef UINT_LEAST8_MAX
#undef UINT_LEAST16_MAX
#define UINT_LEAST8_MAX 255
#define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
#if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#define YYPTRDIFF_T __PTRDIFF_TYPE__
#define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
#elif defined PTRDIFF_MAX
#ifndef ptrdiff_t
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#endif
#define YYPTRDIFF_T ptrdiff_t
#define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
#else
#define YYPTRDIFF_T long
#define YYPTRDIFF_MAXIMUM LONG_MAX
#endif
#endif

#ifndef YYSIZE_T
#ifdef __SIZE_TYPE__
#define YYSIZE_T __SIZE_TYPE__
#elif defined size_t
#define YYSIZE_T size_t
#elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#define YYSIZE_T size_t
#else
#define YYSIZE_T unsigned
#endif
#endif

#define YYSIZE_MAXIMUM \
  YY_CAST(YYPTRDIFF_T, (YYPTRDIFF_MAXIMUM < YY_CAST(YYSIZE_T, -1) ? YYPTRDIFF_MAXIMUM : YY_CAST(YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST(YYPTRDIFF_T, sizeof(X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#define YY_(Msgid) dgettext("bison-runtime", Msgid)
#endif
#endif
#ifndef YY_
#define YY_(Msgid) Msgid
#endif
#endif

#ifndef YY_ATTRIBUTE_PURE
#if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_PURE __attribute__((__pure__))
#else
#define YY_ATTRIBUTE_PURE
#endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
#if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_UNUSED __attribute__((__unused__))
#else
#define YY_ATTRIBUTE_UNUSED
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YY_USE(E) ((void)(E))
#else
#define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && !defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
#if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
  _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuninitialized\"")
#else
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                                            \
  _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuninitialized\"") \
      _Pragma("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
#endif
#define YY_IGNORE_MAYBE_UNINITIALIZED_END _Pragma("GCC diagnostic pop")
#else
#define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
#define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
#define YY_IGNORE_USELESS_CAST_BEGIN _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuseless-cast\"")
#define YY_IGNORE_USELESS_CAST_END _Pragma("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_END
#endif

#define YY_ASSERT(E) ((void)(0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

#ifdef YYSTACK_USE_ALLOCA
#if YYSTACK_USE_ALLOCA
#ifdef __GNUC__
#define YYSTACK_ALLOC __builtin_alloca
#elif defined __BUILTIN_VA_ARG_INCR
#include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#elif defined _AIX
#define YYSTACK_ALLOC __alloca
#elif defined _MSC_VER
#include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#define alloca _alloca
#else
#define YYSTACK_ALLOC alloca
#if !defined _ALLOCA_H && !defined EXIT_SUCCESS
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
/* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#endif
#endif
#endif

#ifdef YYSTACK_ALLOC
/* Pacify GCC's 'empty if-body' warning.  */
#define YYSTACK_FREE(Ptr) \
  do { /* empty */        \
    ;                     \
  } while (0)
#ifndef YYSTACK_ALLOC_MAXIMUM
/* The OS might guarantee only one guard page at the bottom of the stack,
   and a page size can be as small as 4096 bytes.  So we cannot safely
   invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
   to allow for a few compiler-allocated temporary stack slots.  */
#define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#endif
#else
#define YYSTACK_ALLOC YYMALLOC
#define YYSTACK_FREE YYFREE
#ifndef YYSTACK_ALLOC_MAXIMUM
#define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#endif
#if (defined __cplusplus && !defined EXIT_SUCCESS && \
     !((defined YYMALLOC || defined malloc) && (defined YYFREE || defined free)))
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#ifndef YYMALLOC
#define YYMALLOC malloc
#if !defined malloc && !defined EXIT_SUCCESS
void *malloc(YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#ifndef YYFREE
#define YYFREE free
#if !defined free && !defined EXIT_SUCCESS
void free(void *);      /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#endif
#endif /* 1 */

#if (!defined yyoverflow && (!defined __cplusplus || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL && \
                                                         defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
#define YYSTACK_GAP_MAXIMUM (YYSIZEOF(union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
#define YYSTACK_BYTES(N) \
  ((N) * (YYSIZEOF(yy_state_t) + YYSIZEOF(YYSTYPE) + YYSIZEOF(YYLTYPE)) + 2 * YYSTACK_GAP_MAXIMUM)

#define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
#define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
  do {                                                                 \
    YYPTRDIFF_T yynewbytes;                                            \
    YYCOPY(&yyptr->Stack_alloc, Stack, yysize);                        \
    Stack = &yyptr->Stack_alloc;                                       \
    yynewbytes = yystacksize * YYSIZEOF(*Stack) + YYSTACK_GAP_MAXIMUM; \
    yyptr += yynewbytes / YYSIZEOF(*yyptr);                            \
  } while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
#ifndef YYCOPY
#if defined __GNUC__ && 1 < __GNUC__
#define YYCOPY(Dst, Src, Count) __builtin_memcpy(Dst, Src, YY_CAST(YYSIZE_T, (Count)) * sizeof(*(Src)))
#else
#define YYCOPY(Dst, Src, Count)         \
  do {                                  \
    YYPTRDIFF_T yyi;                    \
    for (yyi = 0; yyi < (Count); yyi++) \
      (Dst)[yyi] = (Src)[yyi];          \
  } while (0)
#endif
#endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL 93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST 764

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS 85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS 58
/* YYNRULES -- Number of rules.  */
#define YYNRULES 179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES 400

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK 334

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX) \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? YY_CAST(yysymbol_kind_t, yytranslate[YYX]) : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] = {0,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    83,
    2,
    2,
    2,
    2,
    81,
    79,
    2,
    80,
    2,
    82,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    84};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] = {0,
    240,
    240,
    248,
    249,
    250,
    251,
    252,
    253,
    254,
    255,
    256,
    257,
    258,
    259,
    260,
    261,
    262,
    263,
    264,
    265,
    266,
    267,
    268,
    269,
    273,
    279,
    284,
    290,
    296,
    302,
    308,
    315,
    321,
    329,
    342,
    350,
    361,
    383,
    408,
    418,
    437,
    473,
    522,
    558,
    609,
    624,
    634,
    659,
    690,
    701,
    714,
    717,
    736,
    745,
    757,
    770,
    795,
    809,
    812,
    820,
    831,
    842,
    867,
    881,
    894,
    909,
    926,
    929,
    940,
    953,
    966,
    978,
    992,
    1009,
    1012,
    1020,
    1023,
    1029,
    1032,
    1044,
    1061,
    1064,
    1075,
    1092,
    1095,
    1102,
    1105,
    1118,
    1131,
    1147,
    1150,
    1162,
    1174,
    1189,
    1227,
    1230,
    1244,
    1247,
    1260,
    1269,
    1278,
    1287,
    1296,
    1311,
    1326,
    1341,
    1358,
    1361,
    1362,
    1363,
    1364,
    1365,
    1369,
    1373,
    1377,
    1385,
    1389,
    1401,
    1406,
    1412,
    1417,
    1427,
    1432,
    1444,
    1447,
    1450,
    1453,
    1456,
    1460,
    1463,
    1472,
    1479,
    1488,
    1492,
    1496,
    1501,
    1506,
    1511,
    1516,
    1521,
    1526,
    1531,
    1536,
    1547,
    1558,
    1562,
    1566,
    1570,
    1577,
    1581,
    1585,
    1589,
    1593,
    1599,
    1605,
    1612,
    1620,
    1632,
    1646,
    1647,
    1648,
    1649,
    1650,
    1654,
    1685,
    1688,
    1694,
    1697,
    1702,
    1709,
    1716,
    1723,
    1730,
    1737,
    1744,
    1755,
    1758,
    1768,
    1769};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST(yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name(yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] = {"\"end of file\"",
    "error",
    "\"invalid token\"",
    "SEMICOLON",
    "CREATE",
    "DROP",
    "TABLE",
    "TABLES",
    "VIEW",
    "INDEX",
    "UNIQUE",
    "CALC",
    "SELECT",
    "SHOW",
    "SYNC",
    "INSERT",
    "DELETE",
    "UPDATE",
    "LBRACE",
    "AGGR_MAX",
    "AGGR_MIN",
    "AGGR_SUM",
    "AGGR_AVG",
    "AGGR_COUNT",
    "LENGTH",
    "ROUND",
    "DATE_FORMAT",
    "ASC",
    "DESC",
    "RBRACE",
    "INNER",
    "JOIN",
    "COMMA",
    "TRX_BEGIN",
    "TRX_COMMIT",
    "TRX_ROLLBACK",
    "INT_T",
    "ORDER",
    "GROUP",
    "BY",
    "STRING_T",
    "TEXT_T",
    "FLOAT_T",
    "DATE_T",
    "HELP",
    "EXIT",
    "DOT",
    "INTO",
    "VALUES",
    "FROM",
    "WHERE",
    "AND",
    "OR",
    "SET",
    "ON",
    "LOAD",
    "DATA",
    "INFILE",
    "EXPLAIN",
    "EQ",
    "LT",
    "GT",
    "LE",
    "GE",
    "NE",
    "NOT",
    "IS",
    "AS",
    "LIKE",
    "EXISTS",
    "IN",
    "DEFAULT",
    "HAVING",
    "NULL_T",
    "NUMBER",
    "FLOAT",
    "ID",
    "SSS",
    "DATE",
    "'+'",
    "'-'",
    "'*'",
    "'/'",
    "'%'",
    "UMINUS",
    "$accept",
    "commands",
    "command_wrapper",
    "exit_stmt",
    "help_stmt",
    "sync_stmt",
    "begin_stmt",
    "commit_stmt",
    "rollback_stmt",
    "drop_table_stmt",
    "show_tables_stmt",
    "desc_table_stmt",
    "load_data_stmt",
    "explain_stmt",
    "set_variable_stmt",
    "create_index_stmt",
    "drop_index_stmt",
    "create_table_stmt",
    "create_table_select_stmt",
    "create_view_stmt",
    "insert_stmt",
    "delete_stmt",
    "update_stmt",
    "select_stmt",
    "calc_stmt",
    "assignment_list",
    "select_attr",
    "select_attr_list",
    "select_from",
    "from_list",
    "inner_join",
    "where",
    "group_by",
    "group_by_list",
    "having",
    "order_by",
    "order_condtions",
    "subquery_pexpr",
    "id_list",
    "attr_def_list",
    "attr_def",
    "number",
    "type",
    "value",
    "rel_attr",
    "expression_list",
    "expression",
    "unary_pexpr",
    "cond_pexpr",
    "arith_pexpr",
    "func_pexpr",
    "list_pexpr",
    "aggr_func_type",
    "aggr_pexpr",
    "aggr_pexpr_list",
    "pexpr",
    "pexpr_list",
    "opt_semicolon",
    YY_NULLPTR};

static const char *yysymbol_name(yysymbol_kind_t yysymbol) { return yytname[yysymbol]; }
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) 0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] = {330,
    314,
    101,
    127,
    252,
    13,
    -345,
    -24,
    38,
    36,
    40,
    -345,
    -345,
    -345,
    -345,
    -345,
    44,
    78,
    330,
    135,
    149,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    64,
    86,
    105,
    188,
    130,
    144,
    127,
    -345,
    -345,
    -345,
    -345,
    -345,
    127,
    -345,
    -345,
    137,
    216,
    -345,
    -345,
    -345,
    -345,
    -345,
    204,
    205,
    208,
    158,
    252,
    183,
    252,
    -345,
    199,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    214,
    -345,
    469,
    -345,
    173,
    175,
    201,
    -345,
    193,
    209,
    -345,
    -345,
    -345,
    -345,
    -9,
    4,
    211,
    192,
    -345,
    215,
    98,
    -345,
    127,
    127,
    127,
    127,
    127,
    252,
    521,
    252,
    252,
    252,
    252,
    682,
    -55,
    -345,
    206,
    238,
    252,
    252,
    252,
    252,
    252,
    252,
    252,
    252,
    252,
    104,
    -41,
    14,
    252,
    252,
    251,
    252,
    252,
    252,
    252,
    -345,
    236,
    245,
    210,
    303,
    222,
    225,
    290,
    229,
    296,
    234,
    255,
    264,
    -345,
    -345,
    -38,
    -38,
    -345,
    -345,
    282,
    252,
    320,
    386,
    338,
    546,
    682,
    -345,
    -345,
    61,
    245,
    -345,
    362,
    495,
    669,
    645,
    682,
    257,
    257,
    257,
    257,
    682,
    252,
    252,
    277,
    -345,
    251,
    251,
    251,
    682,
    132,
    -345,
    106,
    106,
    -345,
    -345,
    333,
    252,
    -345,
    297,
    -345,
    310,
    312,
    327,
    252,
    328,
    252,
    343,
    286,
    -345,
    206,
    521,
    -345,
    -345,
    -345,
    252,
    252,
    335,
    292,
    293,
    71,
    -345,
    334,
    -345,
    252,
    224,
    251,
    -345,
    682,
    132,
    -345,
    -345,
    -345,
    -345,
    252,
    11,
    621,
    252,
    365,
    -345,
    -345,
    -345,
    -345,
    -345,
    33,
    225,
    344,
    337,
    306,
    350,
    346,
    308,
    369,
    245,
    -345,
    410,
    434,
    316,
    154,
    71,
    -345,
    354,
    324,
    572,
    251,
    251,
    251,
    -345,
    521,
    597,
    329,
    336,
    339,
    356,
    -345,
    327,
    395,
    206,
    328,
    342,
    206,
    328,
    340,
    334,
    -345,
    -345,
    -48,
    355,
    71,
    -345,
    -345,
    357,
    252,
    374,
    252,
    405,
    -345,
    -345,
    -345,
    406,
    360,
    245,
    -345,
    -345,
    411,
    -345,
    -345,
    -345,
    252,
    245,
    -345,
    441,
    245,
    426,
    328,
    324,
    252,
    381,
    404,
    71,
    71,
    -345,
    -19,
    250,
    420,
    -345,
    572,
    -345,
    -345,
    401,
    -345,
    233,
    415,
    334,
    252,
    334,
    -345,
    448,
    374,
    153,
    404,
    71,
    -345,
    -345,
    403,
    407,
    -345,
    16,
    -345,
    252,
    408,
    409,
    -345,
    206,
    324,
    435,
    324,
    -345,
    458,
    71,
    -345,
    -17,
    456,
    97,
    597,
    -345,
    -345,
    245,
    374,
    206,
    374,
    -345,
    -345,
    427,
    -345,
    -345,
    473,
    473,
    16,
    -345,
    -345,
    334,
    -345,
    245,
    -345,
    456,
    -345,
    -345,
    119,
    324,
    334,
    -345,
    473,
    473,
    -345,
    374,
    324,
    -345,
    -345,
    -345,
    374,
    -345};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] = {0,
    0,
    0,
    0,
    0,
    0,
    27,
    0,
    0,
    0,
    0,
    28,
    29,
    30,
    26,
    25,
    0,
    0,
    0,
    0,
    178,
    24,
    23,
    16,
    17,
    18,
    19,
    11,
    12,
    13,
    20,
    21,
    22,
    14,
    15,
    8,
    9,
    10,
    5,
    7,
    6,
    4,
    3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    116,
    113,
    114,
    115,
    117,
    0,
    130,
    50,
    122,
    0,
    159,
    160,
    161,
    162,
    163,
    0,
    0,
    0,
    0,
    0,
    120,
    0,
    118,
    49,
    173,
    131,
    132,
    171,
    169,
    170,
    172,
    174,
    0,
    175,
    58,
    32,
    0,
    0,
    0,
    33,
    0,
    0,
    35,
    1,
    179,
    2,
    0,
    0,
    0,
    0,
    31,
    0,
    0,
    129,
    0,
    0,
    0,
    0,
    0,
    0,
    176,
    0,
    0,
    0,
    0,
    147,
    0,
    153,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    58,
    0,
    0,
    0,
    0,
    53,
    0,
    76,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    128,
    123,
    124,
    125,
    126,
    127,
    0,
    0,
    0,
    0,
    0,
    0,
    148,
    121,
    119,
    67,
    76,
    166,
    0,
    58,
    134,
    133,
    135,
    137,
    138,
    139,
    140,
    136,
    0,
    0,
    0,
    143,
    58,
    58,
    58,
    141,
    145,
    54,
    149,
    150,
    151,
    152,
    0,
    0,
    46,
    0,
    36,
    0,
    0,
    97,
    0,
    95,
    0,
    0,
    0,
    39,
    0,
    176,
    158,
    154,
    155,
    0,
    0,
    0,
    0,
    0,
    67,
    64,
    78,
    164,
    0,
    0,
    58,
    59,
    142,
    146,
    144,
    57,
    55,
    56,
    0,
    169,
    0,
    0,
    0,
    108,
    109,
    110,
    111,
    112,
    103,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    76,
    177,
    0,
    0,
    0,
    67,
    67,
    65,
    0,
    84,
    167,
    58,
    58,
    58,
    60,
    176,
    51,
    0,
    0,
    0,
    0,
    104,
    97,
    40,
    0,
    95,
    0,
    0,
    95,
    0,
    78,
    156,
    157,
    74,
    0,
    67,
    68,
    66,
    0,
    0,
    86,
    0,
    0,
    63,
    61,
    62,
    0,
    0,
    76,
    34,
    107,
    0,
    106,
    105,
    98,
    0,
    76,
    96,
    0,
    76,
    0,
    95,
    84,
    0,
    0,
    74,
    67,
    67,
    69,
    81,
    169,
    0,
    48,
    167,
    165,
    45,
    0,
    47,
    99,
    0,
    78,
    0,
    78,
    37,
    0,
    86,
    169,
    74,
    67,
    71,
    70,
    0,
    0,
    79,
    0,
    168,
    0,
    0,
    0,
    100,
    0,
    84,
    0,
    84,
    38,
    0,
    67,
    72,
    81,
    81,
    90,
    51,
    102,
    101,
    76,
    86,
    0,
    86,
    94,
    73,
    0,
    82,
    80,
    90,
    90,
    0,
    87,
    52,
    78,
    41,
    76,
    43,
    81,
    89,
    88,
    90,
    84,
    78,
    83,
    90,
    90,
    91,
    86,
    84,
    93,
    92,
    42,
    86,
    44};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] = {-345,
    -345,
    488,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    -345,
    145,
    -108,
    -54,
    -203,
    -168,
    -300,
    -166,
    -274,
    -342,
    -268,
    -255,
    -344,
    -345,
    -137,
    235,
    266,
    -345,
    -345,
    53,
    -337,
    413,
    60,
    -345,
    -191,
    -345,
    -345,
    -345,
    -128,
    -345,
    186,
    -59,
    -184,
    -345};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] = {0,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    299,
    73,
    139,
    168,
    219,
    317,
    196,
    260,
    344,
    291,
    323,
    377,
    74,
    247,
    244,
    201,
    302,
    242,
    75,
    76,
    57,
    58,
    77,
    78,
    79,
    80,
    81,
    82,
    83,
    293,
    84,
    160,
    95};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] = {110,
    158,
    220,
    186,
    233,
    251,
    314,
    313,
    361,
    145,
    115,
    -77,
    117,
    342,
    -77,
    342,
    339,
    372,
    373,
    315,
    85,
    165,
    147,
    86,
    182,
    252,
    166,
    343,
    316,
    371,
    384,
    385,
    183,
    60,
    61,
    62,
    63,
    64,
    357,
    386,
    -77,
    389,
    392,
    107,
    108,
    336,
    395,
    396,
    -77,
    -77,
    258,
    269,
    161,
    162,
    163,
    164,
    56,
    352,
    146,
    354,
    170,
    171,
    172,
    173,
    174,
    175,
    176,
    177,
    178,
    179,
    184,
    148,
    307,
    187,
    188,
    310,
    190,
    191,
    192,
    193,
    189,
    356,
    297,
    -77,
    366,
    281,
    368,
    87,
    287,
    288,
    185,
    215,
    70,
    216,
    245,
    264,
    248,
    72,
    270,
    321,
    209,
    215,
    56,
    216,
    271,
    387,
    272,
    47,
    56,
    102,
    48,
    380,
    88,
    382,
    394,
    103,
    89,
    225,
    319,
    393,
    90,
    226,
    227,
    337,
    374,
    375,
    398,
    152,
    217,
    376,
    229,
    230,
    231,
    328,
    91,
    93,
    234,
    218,
    397,
    308,
    96,
    331,
    311,
    399,
    333,
    49,
    390,
    391,
    365,
    340,
    341,
    376,
    94,
    -75,
    253,
    254,
    -75,
    56,
    56,
    56,
    56,
    56,
    97,
    261,
    381,
    154,
    155,
    156,
    157,
    104,
    265,
    358,
    180,
    266,
    181,
    335,
    267,
    105,
    106,
    107,
    108,
    98,
    -75,
    -75,
    215,
    -75,
    216,
    137,
    138,
    370,
    -75,
    -75,
    124,
    125,
    126,
    127,
    198,
    99,
    330,
    379,
    50,
    51,
    52,
    -75,
    53,
    54,
    100,
    55,
    294,
    295,
    296,
    135,
    136,
    137,
    138,
    388,
    105,
    106,
    107,
    108,
    101,
    285,
    111,
    112,
    353,
    -75,
    113,
    114,
    109,
    116,
    286,
    234,
    119,
    324,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    60,
    61,
    62,
    63,
    64,
    118,
    140,
    -85,
    141,
    143,
    -85,
    142,
    234,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    149,
    144,
    169,
    150,
    151,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    -85,
    262,
    68,
    167,
    120,
    194,
    69,
    197,
    -85,
    362,
    50,
    51,
    52,
    70,
    53,
    54,
    195,
    71,
    72,
    348,
    199,
    263,
    200,
    202,
    68,
    349,
    203,
    350,
    69,
    204,
    206,
    205,
    50,
    51,
    52,
    70,
    53,
    54,
    68,
    71,
    72,
    43,
    69,
    44,
    45,
    46,
    50,
    51,
    52,
    70,
    53,
    54,
    208,
    71,
    72,
    1,
    2,
    135,
    136,
    137,
    138,
    207,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    237,
    210,
    228,
    232,
    238,
    239,
    240,
    241,
    235,
    236,
    10,
    243,
    246,
    249,
    250,
    11,
    12,
    13,
    255,
    212,
    256,
    257,
    213,
    268,
    259,
    274,
    14,
    15,
    50,
    51,
    52,
    277,
    53,
    54,
    276,
    16,
    279,
    17,
    275,
    280,
    18,
    121,
    122,
    221,
    284,
    289,
    222,
    278,
    290,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    300,
    132,
    306,
    133,
    309,
    301,
    322,
    303,
    121,
    122,
    211,
    312,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    304,
    132,
    318,
    133,
    320,
    325,
    326,
    327,
    121,
    122,
    282,
    329,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    332,
    132,
    334,
    133,
    338,
    314,
    345,
    347,
    121,
    122,
    283,
    351,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    355,
    132,
    359,
    133,
    363,
    364,
    360,
    367,
    121,
    122,
    369,
    342,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    120,
    132,
    383,
    133,
    376,
    92,
    378,
    305,
    273,
    346,
    0,
    0,
    135,
    136,
    137,
    138,
    153,
    0,
    0,
    121,
    122,
    0,
    0,
    0,
    0,
    0,
    120,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    131,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    0,
    134,
    121,
    122,
    135,
    136,
    137,
    138,
    0,
    159,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    223,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    0,
    224,
    121,
    122,
    135,
    136,
    137,
    138,
    214,
    0,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    0,
    121,
    122,
    0,
    135,
    136,
    137,
    138,
    292,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    0,
    0,
    121,
    122,
    135,
    136,
    137,
    138,
    298,
    0,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    0,
    121,
    122,
    0,
    135,
    136,
    137,
    138,
    0,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    121,
    122,
    0,
    0,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    121,
    0,
    0,
    0,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    135,
    136,
    137,
    138,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    0,
    132,
    0,
    133,
    0,
    0,
    124,
    125,
    126,
    127,
    0,
    129,
    135,
    136,
    137,
    138,
    133,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    135,
    136,
    137,
    138};

static const yytype_int16 yycheck[] = {59,
    109,
    168,
    131,
    195,
    208,
    54,
    281,
    345,
    18,
    69,
    0,
    71,
    32,
    3,
    32,
    316,
    359,
    360,
    67,
    7,
    76,
    18,
    47,
    65,
    209,
    81,
    46,
    76,
    46,
    374,
    375,
    73,
    19,
    20,
    21,
    22,
    23,
    338,
    376,
    29,
    383,
    386,
    81,
    82,
    313,
    390,
    391,
    37,
    38,
    218,
    18,
    111,
    112,
    113,
    114,
    3,
    331,
    67,
    333,
    119,
    120,
    121,
    122,
    123,
    124,
    125,
    126,
    127,
    128,
    56,
    67,
    275,
    132,
    133,
    278,
    135,
    136,
    137,
    138,
    134,
    336,
    266,
    72,
    352,
    251,
    354,
    49,
    256,
    257,
    76,
    30,
    76,
    32,
    202,
    223,
    204,
    81,
    65,
    290,
    159,
    30,
    49,
    32,
    71,
    379,
    73,
    6,
    55,
    49,
    9,
    366,
    76,
    368,
    388,
    55,
    76,
    171,
    286,
    387,
    76,
    180,
    181,
    314,
    27,
    28,
    394,
    29,
    67,
    32,
    184,
    185,
    186,
    299,
    56,
    0,
    195,
    76,
    393,
    276,
    76,
    307,
    279,
    398,
    310,
    18,
    27,
    28,
    351,
    317,
    318,
    32,
    3,
    0,
    213,
    214,
    3,
    104,
    105,
    106,
    107,
    108,
    76,
    222,
    367,
    105,
    106,
    107,
    108,
    32,
    224,
    339,
    68,
    232,
    70,
    312,
    235,
    79,
    80,
    81,
    82,
    76,
    29,
    30,
    30,
    32,
    32,
    81,
    82,
    357,
    37,
    38,
    60,
    61,
    62,
    63,
    143,
    9,
    306,
    365,
    73,
    74,
    75,
    50,
    77,
    78,
    76,
    80,
    262,
    263,
    264,
    79,
    80,
    81,
    82,
    381,
    79,
    80,
    81,
    82,
    76,
    67,
    18,
    18,
    332,
    72,
    18,
    69,
    12,
    46,
    76,
    290,
    18,
    292,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    19,
    20,
    21,
    22,
    23,
    49,
    76,
    0,
    76,
    59,
    3,
    53,
    314,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    54,
    57,
    29,
    76,
    54,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    29,
    56,
    65,
    76,
    32,
    48,
    69,
    76,
    37,
    347,
    73,
    74,
    75,
    76,
    77,
    78,
    50,
    80,
    81,
    65,
    77,
    76,
    76,
    12,
    65,
    71,
    76,
    73,
    69,
    12,
    54,
    76,
    73,
    74,
    75,
    76,
    77,
    78,
    65,
    80,
    81,
    6,
    69,
    8,
    9,
    10,
    73,
    74,
    75,
    76,
    77,
    78,
    49,
    80,
    81,
    4,
    5,
    79,
    80,
    81,
    82,
    76,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    36,
    29,
    73,
    18,
    40,
    41,
    42,
    43,
    59,
    47,
    28,
    32,
    32,
    18,
    76,
    33,
    34,
    35,
    31,
    29,
    76,
    76,
    32,
    6,
    38,
    29,
    44,
    45,
    73,
    74,
    75,
    29,
    77,
    78,
    76,
    53,
    76,
    55,
    49,
    18,
    58,
    51,
    52,
    29,
    76,
    39,
    32,
    49,
    72,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    76,
    68,
    12,
    70,
    67,
    74,
    37,
    73,
    51,
    52,
    29,
    76,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    73,
    68,
    76,
    70,
    76,
    29,
    29,
    76,
    51,
    52,
    29,
    29,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    12,
    68,
    29,
    70,
    76,
    54,
    39,
    59,
    51,
    52,
    29,
    49,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    29,
    68,
    76,
    70,
    73,
    73,
    76,
    49,
    51,
    52,
    29,
    32,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    32,
    68,
    76,
    70,
    32,
    18,
    362,
    273,
    243,
    324,
    -1,
    -1,
    79,
    80,
    81,
    82,
    104,
    -1,
    -1,
    51,
    52,
    -1,
    -1,
    -1,
    -1,
    -1,
    32,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    76,
    51,
    52,
    79,
    80,
    81,
    82,
    -1,
    32,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    76,
    51,
    52,
    79,
    80,
    81,
    82,
    32,
    -1,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    51,
    52,
    -1,
    79,
    80,
    81,
    82,
    32,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    51,
    52,
    79,
    80,
    81,
    82,
    32,
    -1,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    51,
    52,
    -1,
    79,
    80,
    81,
    82,
    -1,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    51,
    52,
    -1,
    -1,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    51,
    -1,
    -1,
    -1,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    79,
    80,
    81,
    82,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    -1,
    68,
    -1,
    70,
    -1,
    -1,
    60,
    61,
    62,
    63,
    -1,
    65,
    79,
    80,
    81,
    82,
    70,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    79,
    80,
    81,
    82};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] = {0,
    4,
    5,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    28,
    33,
    34,
    35,
    44,
    45,
    53,
    55,
    58,
    86,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    6,
    8,
    9,
    10,
    6,
    9,
    18,
    73,
    74,
    75,
    77,
    78,
    80,
    128,
    130,
    131,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    65,
    69,
    76,
    80,
    81,
    111,
    122,
    128,
    129,
    132,
    133,
    134,
    135,
    136,
    137,
    138,
    140,
    7,
    47,
    49,
    76,
    76,
    76,
    56,
    87,
    0,
    3,
    142,
    76,
    76,
    76,
    9,
    76,
    76,
    131,
    131,
    32,
    79,
    80,
    81,
    82,
    12,
    140,
    18,
    18,
    18,
    69,
    140,
    46,
    140,
    49,
    18,
    32,
    51,
    52,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    70,
    76,
    79,
    80,
    81,
    82,
    112,
    76,
    76,
    53,
    59,
    57,
    18,
    67,
    18,
    67,
    54,
    76,
    54,
    29,
    130,
    131,
    131,
    131,
    131,
    111,
    32,
    141,
    140,
    140,
    140,
    140,
    76,
    81,
    76,
    113,
    29,
    140,
    140,
    140,
    140,
    140,
    140,
    140,
    140,
    140,
    140,
    68,
    70,
    65,
    73,
    56,
    76,
    137,
    140,
    140,
    112,
    140,
    140,
    140,
    140,
    48,
    50,
    116,
    76,
    128,
    77,
    76,
    125,
    12,
    76,
    12,
    76,
    54,
    76,
    49,
    140,
    29,
    29,
    29,
    32,
    32,
    30,
    32,
    67,
    76,
    114,
    116,
    29,
    32,
    67,
    76,
    112,
    140,
    140,
    73,
    112,
    112,
    112,
    18,
    133,
    140,
    59,
    47,
    36,
    40,
    41,
    42,
    43,
    127,
    32,
    124,
    111,
    32,
    123,
    111,
    18,
    76,
    113,
    141,
    140,
    140,
    31,
    76,
    76,
    114,
    38,
    117,
    140,
    56,
    76,
    137,
    112,
    140,
    140,
    6,
    18,
    65,
    71,
    73,
    125,
    29,
    49,
    76,
    29,
    49,
    76,
    18,
    116,
    29,
    29,
    76,
    67,
    76,
    114,
    114,
    39,
    72,
    119,
    32,
    139,
    112,
    112,
    112,
    141,
    32,
    110,
    76,
    74,
    126,
    73,
    73,
    124,
    12,
    113,
    123,
    67,
    113,
    123,
    76,
    117,
    54,
    67,
    76,
    115,
    76,
    114,
    76,
    133,
    37,
    120,
    140,
    29,
    29,
    76,
    116,
    29,
    111,
    116,
    12,
    116,
    29,
    123,
    119,
    133,
    76,
    115,
    114,
    114,
    32,
    46,
    118,
    39,
    139,
    59,
    65,
    71,
    73,
    49,
    117,
    111,
    117,
    29,
    120,
    115,
    114,
    76,
    76,
    129,
    140,
    73,
    73,
    113,
    119,
    49,
    119,
    29,
    114,
    46,
    118,
    118,
    27,
    28,
    32,
    121,
    110,
    116,
    120,
    113,
    120,
    76,
    121,
    121,
    129,
    117,
    116,
    118,
    27,
    28,
    121,
    119,
    117,
    121,
    121,
    120,
    119,
    120};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] = {0,
    85,
    86,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    100,
    101,
    102,
    103,
    103,
    104,
    104,
    105,
    106,
    107,
    108,
    108,
    109,
    110,
    110,
    111,
    111,
    111,
    111,
    111,
    112,
    112,
    112,
    112,
    112,
    112,
    113,
    113,
    113,
    114,
    114,
    114,
    114,
    114,
    114,
    114,
    115,
    115,
    116,
    116,
    117,
    117,
    117,
    118,
    118,
    118,
    119,
    119,
    120,
    120,
    120,
    120,
    121,
    121,
    121,
    121,
    122,
    123,
    123,
    124,
    124,
    125,
    125,
    125,
    125,
    125,
    125,
    125,
    125,
    126,
    127,
    127,
    127,
    127,
    127,
    128,
    128,
    128,
    128,
    128,
    129,
    129,
    129,
    129,
    130,
    130,
    131,
    131,
    131,
    131,
    131,
    131,
    131,
    132,
    132,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    133,
    134,
    134,
    134,
    134,
    134,
    135,
    135,
    135,
    135,
    136,
    137,
    137,
    137,
    137,
    137,
    138,
    138,
    138,
    139,
    139,
    140,
    140,
    140,
    140,
    140,
    140,
    140,
    141,
    141,
    142,
    142};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] = {0,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    2,
    2,
    7,
    2,
    4,
    9,
    10,
    5,
    7,
    12,
    15,
    12,
    16,
    8,
    4,
    8,
    8,
    2,
    2,
    0,
    5,
    2,
    3,
    4,
    4,
    4,
    0,
    3,
    4,
    5,
    5,
    5,
    2,
    3,
    4,
    0,
    3,
    4,
    5,
    5,
    6,
    7,
    0,
    2,
    0,
    2,
    0,
    4,
    6,
    0,
    3,
    5,
    0,
    2,
    0,
    4,
    5,
    5,
    0,
    3,
    4,
    4,
    10,
    0,
    3,
    0,
    3,
    5,
    6,
    7,
    7,
    2,
    3,
    4,
    4,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    1,
    3,
    1,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    1,
    1,
    1,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    3,
    4,
    3,
    4,
    2,
    3,
    3,
    3,
    3,
    3,
    2,
    4,
    4,
    6,
    6,
    4,
    1,
    1,
    1,
    1,
    1,
    4,
    7,
    3,
    0,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    3,
    0,
    1};

enum
{
  YYENOMEM = -2
};

#define yyerrok (yyerrstatus = 0)
#define yyclearin (yychar = YYEMPTY)

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab
#define YYNOMEM goto yyexhaustedlab

#define YYRECOVERING() (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                                                \
  do                                                                                          \
    if (yychar == YYEMPTY) {                                                                  \
      yychar = (Token);                                                                       \
      yylval = (Value);                                                                       \
      YYPOPSTACK(yylen);                                                                      \
      yystate = *yyssp;                                                                       \
      goto yybackup;                                                                          \
    } else {                                                                                  \
      yyerror(&yylloc, sql_string, sql_result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                                                \
    }                                                                                         \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(Current, Rhs, N)                                              \
  do                                                                                 \
    if (N) {                                                                         \
      (Current).first_line = YYRHSLOC(Rhs, 1).first_line;                            \
      (Current).first_column = YYRHSLOC(Rhs, 1).first_column;                        \
      (Current).last_line = YYRHSLOC(Rhs, N).last_line;                              \
      (Current).last_column = YYRHSLOC(Rhs, N).last_column;                          \
    } else {                                                                         \
      (Current).first_line = (Current).last_line = YYRHSLOC(Rhs, 0).last_line;       \
      (Current).first_column = (Current).last_column = YYRHSLOC(Rhs, 0).last_column; \
    }                                                                                \
  while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])

/* Enable debugging if requested.  */
#if YYDEBUG

#ifndef YYFPRINTF
#include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#define YYFPRINTF fprintf
#endif

#define YYDPRINTF(Args) \
  do {                  \
    if (yydebug)        \
      YYFPRINTF Args;   \
  } while (0)

/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YYLOCATION_PRINT

#if defined YY_LOCATION_PRINT

/* Temporary convenience wrapper in case some people defined the
   undocumented and private YY_LOCATION_PRINT macros.  */
#define YYLOCATION_PRINT(File, Loc) YY_LOCATION_PRINT(File, *(Loc))

#elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int yy_location_print_(FILE *yyo, YYLTYPE const *const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line) {
    res += YYFPRINTF(yyo, "%d", yylocp->first_line);
    if (0 <= yylocp->first_column)
      res += YYFPRINTF(yyo, ".%d", yylocp->first_column);
  }
  if (0 <= yylocp->last_line) {
    if (yylocp->first_line < yylocp->last_line) {
      res += YYFPRINTF(yyo, "-%d", yylocp->last_line);
      if (0 <= end_col)
        res += YYFPRINTF(yyo, ".%d", end_col);
    } else if (0 <= end_col && yylocp->first_column < end_col)
      res += YYFPRINTF(yyo, "-%d", end_col);
  }
  return res;
}

#define YYLOCATION_PRINT yy_location_print_

/* Temporary convenience wrapper in case some people defined the
   undocumented and private YY_LOCATION_PRINT macros.  */
#define YY_LOCATION_PRINT(File, Loc) YYLOCATION_PRINT(File, &(Loc))

#else

#define YYLOCATION_PRINT(File, Loc) ((void)0)
/* Temporary convenience wrapper in case some people defined the
   undocumented and private YY_LOCATION_PRINT macros.  */
#define YY_LOCATION_PRINT YYLOCATION_PRINT

#endif
#endif /* !defined YYLOCATION_PRINT */

#define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                                  \
  do {                                                                                 \
    if (yydebug) {                                                                     \
      YYFPRINTF(stderr, "%s ", Title);                                                 \
      yy_symbol_print(stderr, Kind, Value, Location, sql_string, sql_result, scanner); \
      YYFPRINTF(stderr, "\n");                                                         \
    }                                                                                  \
  } while (0)

/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void yy_symbol_value_print(FILE *yyo, yysymbol_kind_t yykind, YYSTYPE const *const yyvaluep,
    YYLTYPE const *const yylocationp, const char *sql_string, ParsedSqlResult *sql_result, void *scanner)
{
  FILE *yyoutput = yyo;
  YY_USE(yyoutput);
  YY_USE(yylocationp);
  YY_USE(sql_string);
  YY_USE(sql_result);
  YY_USE(scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE(yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void yy_symbol_print(FILE *yyo, yysymbol_kind_t yykind, YYSTYPE const *const yyvaluep,
    YYLTYPE const *const yylocationp, const char *sql_string, ParsedSqlResult *sql_result, void *scanner)
{
  YYFPRINTF(yyo, "%s %s (", yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name(yykind));

  YYLOCATION_PRINT(yyo, yylocationp);
  YYFPRINTF(yyo, ": ");
  yy_symbol_value_print(yyo, yykind, yyvaluep, yylocationp, sql_string, sql_result, scanner);
  YYFPRINTF(yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void yy_stack_print(yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF(stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++) {
    int yybot = *yybottom;
    YYFPRINTF(stderr, " %d", yybot);
  }
  YYFPRINTF(stderr, "\n");
}

#define YY_STACK_PRINT(Bottom, Top)    \
  do {                                 \
    if (yydebug)                       \
      yy_stack_print((Bottom), (Top)); \
  } while (0)

/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void yy_reduce_print(yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, const char *sql_string,
    ParsedSqlResult *sql_result, void *scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF(stderr, "Reducing stack by rule %d (line %d):\n", yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++) {
    YYFPRINTF(stderr, "   $%d = ", yyi + 1);
    yy_symbol_print(stderr,
        YY_ACCESSING_SYMBOL(+yyssp[yyi + 1 - yynrhs]),
        &yyvsp[(yyi + 1) - (yynrhs)],
        &(yylsp[(yyi + 1) - (yynrhs)]),
        sql_string,
        sql_result,
        scanner);
    YYFPRINTF(stderr, "\n");
  }
}

#define YY_REDUCE_PRINT(Rule)                                                      \
  do {                                                                             \
    if (yydebug)                                                                   \
      yy_reduce_print(yyssp, yyvsp, yylsp, Rule, sql_string, sql_result, scanner); \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
#define YYDPRINTF(Args) ((void)0)
#define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
#define YY_STACK_PRINT(Bottom, Top)
#define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int yypcontext_expected_tokens(const yypcontext_t *yyctx, yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default(yyn)) {
    /* Start YYX at -YYN if negative to avoid negative indexes in
       YYCHECK.  In other words, skip the first -YYN actions for
       this state because they are default actions.  */
    int yyxbegin = yyn < 0 ? -yyn : 0;
    /* Stay within bounds of both yycheck and yytname.  */
    int yychecklim = YYLAST - yyn + 1;
    int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
    int yyx;
    for (yyx = yyxbegin; yyx < yyxend; ++yyx)
      if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror && !yytable_value_is_error(yytable[yyx + yyn])) {
        if (!yyarg)
          ++yycount;
        else if (yycount == yyargn)
          return 0;
        else
          yyarg[yycount++] = YY_CAST(yysymbol_kind_t, yyx);
      }
  }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}

#ifndef yystrlen
#if defined __GLIBC__ && defined _STRING_H
#define yystrlen(S) (YY_CAST(YYPTRDIFF_T, strlen(S)))
#else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T yystrlen(const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#endif
#endif

#ifndef yystpcpy
#if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#define yystpcpy stpcpy
#else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *yystpcpy(char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T yytnamerr(char *yyres, const char *yystr)
{
  if (*yystr == '"') {
    YYPTRDIFF_T yyn = 0;
    char const *yyp = yystr;
    for (;;)
      switch (*++yyp) {
        case '\'':
        case ',': goto do_not_strip_quotes;

        case '\\':
          if (*++yyp != '\\')
            goto do_not_strip_quotes;
          else
            goto append;

        append:
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
  do_not_strip_quotes:;
  }

  if (yyres)
    return yystpcpy(yyres, yystr) - yyres;
  else
    return yystrlen(yystr);
}
#endif

static int yy_syntax_error_arguments(const yypcontext_t *yyctx, yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY) {
    int yyn;
    if (yyarg)
      yyarg[yycount] = yyctx->yytoken;
    ++yycount;
    yyn = yypcontext_expected_tokens(yyctx, yyarg ? yyarg + 1 : yyarg, yyargn - 1);
    if (yyn == YYENOMEM)
      return YYENOMEM;
    else
      yycount += yyn;
  }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int yysyntax_error(YYPTRDIFF_T *yymsg_alloc, char **yymsg, const yypcontext_t *yyctx)
{
  enum
  {
    YYARGS_MAX = 5
  };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments(yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount) {
#define YYCASE_(N, S) \
  case N: yyformat = S; break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
  }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen(yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi) {
      YYPTRDIFF_T yysize1 = yysize + yytnamerr(YY_NULLPTR, yytname[yyarg[yyi]]);
      if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
        yysize = yysize1;
      else
        return YYENOMEM;
    }
  }

  if (*yymsg_alloc < yysize) {
    *yymsg_alloc = 2 * yysize;
    if (!(yysize <= *yymsg_alloc && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
      *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
    return -1;
  }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
        yyp += yytnamerr(yyp, yytname[yyarg[yyi++]]);
        yyformat += 2;
      } else {
        ++yyp;
        ++yyformat;
      }
  }
  return 0;
}

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void yydestruct(const char *yymsg, yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp,
    const char *sql_string, ParsedSqlResult *sql_result, void *scanner)
{
  YY_USE(yyvaluep);
  YY_USE(yylocationp);
  YY_USE(sql_string);
  YY_USE(sql_result);
  YY_USE(scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT(yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE(yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/*----------.
| yyparse.  |
`----------*/

int yyparse(const char *sql_string, ParsedSqlResult *sql_result, void *scanner)
{
  /* Lookahead token kind.  */
  int yychar;

  /* The semantic value of the lookahead symbol.  */
  /* Default value used for initialization, for pacifying older GCCs
     or non-GCC compilers.  */
  YY_INITIAL_VALUE(static YYSTYPE yyval_default;)
  YYSTYPE yylval YY_INITIAL_VALUE(= yyval_default);

  /* Location data for the lookahead symbol.  */
  static YYLTYPE yyloc_default
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
      = {1, 1, 1, 1}
#endif
  ;
  YYLTYPE yylloc = yyloc_default;

  /* Number of syntax errors so far.  */
  int yynerrs = 0;

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

  /* The location stack: array, bottom, top.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N) (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YYDPRINTF((stderr, "Entering state %d\n", yystate));
  YY_ASSERT(0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST(yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT(yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
  {
    /* Get the current used size of the three stacks, in elements.  */
    YYPTRDIFF_T yysize = yyssp - yyss + 1;

#if defined yyoverflow
    {
      /* Give user a chance to reallocate the stack.  Use copies of
         these so that the &'s don't force the real ones into
         memory.  */
      yy_state_t *yyss1 = yyss;
      YYSTYPE *yyvs1 = yyvs;
      YYLTYPE *yyls1 = yyls;

      /* Each stack pointer address is followed by the size of the
         data in use in that stack, in bytes.  This used to be a
         conditional around just the two extra args, but that might
         be undefined if yyoverflow is a macro.  */
      yyoverflow(YY_("memory exhausted"),
          &yyss1,
          yysize * YYSIZEOF(*yyssp),
          &yyvs1,
          yysize * YYSIZEOF(*yyvsp),
          &yyls1,
          yysize * YYSIZEOF(*yylsp),
          &yystacksize);
      yyss = yyss1;
      yyvs = yyvs1;
      yyls = yyls1;
    }
#else /* defined YYSTACK_RELOCATE */
    /* Extend the stack our own way.  */
    if (YYMAXDEPTH <= yystacksize)
      YYNOMEM;
    yystacksize *= 2;
    if (YYMAXDEPTH < yystacksize)
      yystacksize = YYMAXDEPTH;

    {
      yy_state_t *yyss1 = yyss;
      union yyalloc *yyptr = YY_CAST(union yyalloc *, YYSTACK_ALLOC(YY_CAST(YYSIZE_T, YYSTACK_BYTES(yystacksize))));
      if (!yyptr)
        YYNOMEM;
      YYSTACK_RELOCATE(yyss_alloc, yyss);
      YYSTACK_RELOCATE(yyvs_alloc, yyvs);
      YYSTACK_RELOCATE(yyls_alloc, yyls);
#undef YYSTACK_RELOCATE
      if (yyss1 != yyssa)
        YYSTACK_FREE(yyss1);
    }
#endif

    yyssp = yyss + yysize - 1;
    yyvsp = yyvs + yysize - 1;
    yylsp = yyls + yysize - 1;

    YY_IGNORE_USELESS_CAST_BEGIN
    YYDPRINTF((stderr, "Stack size increased to %ld\n", YY_CAST(long, yystacksize)));
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
  if (yypact_value_is_default(yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY) {
    YYDPRINTF((stderr, "Reading a token\n"));
    yychar = yylex(&yylval, &yylloc, scanner);
  }

  if (yychar <= YYEOF) {
    yychar = YYEOF;
    yytoken = YYSYMBOL_YYEOF;
    YYDPRINTF((stderr, "Now at end of input.\n"));
  } else if (yychar == YYerror) {
    /* The scanner already issued an error message, process directly
       to error recovery.  But do not keep the error token as
       lookahead, it is too special and may lead us to an endless
       loop in error recovery. */
    yychar = YYUNDEF;
    yytoken = YYSYMBOL_YYerror;
    yyerror_range[1] = yylloc;
    goto yyerrlab1;
  } else {
    yytoken = YYTRANSLATE(yychar);
    YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
  }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0) {
    if (yytable_value_is_error(yyn))
      goto yyerrlab;
    yyn = -yyn;
    goto yyreduce;
  }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

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
  yyval = yyvsp[1 - yylen];

  /* Default location. */
  YYLLOC_DEFAULT(yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT(yyn);
  switch (yyn) {
    case 2: /* commands: command_wrapper opt_semicolon  */
#line 241 "yacc_sql.y"
    {
      std::unique_ptr<ParsedSqlNode> sql_node = std::unique_ptr<ParsedSqlNode>((yyvsp[-1].sql_node));
      sql_result->add_sql_node(std::move(sql_node));
    }
#line 1995 "yacc_sql.cpp"
    break;

    case 25: /* exit_stmt: EXIT  */
#line 273 "yacc_sql.y"
    {
      (void)yynerrs;  // 这么写为了消除yynerrs未使用的告警。如果你有更好的方法欢迎提PR
      (yyval.sql_node) = new ParsedSqlNode(SCF_EXIT);
    }
#line 2004 "yacc_sql.cpp"
    break;

    case 26: /* help_stmt: HELP  */
#line 279 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_HELP);
    }
#line 2012 "yacc_sql.cpp"
    break;

    case 27: /* sync_stmt: SYNC  */
#line 284 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_SYNC);
    }
#line 2020 "yacc_sql.cpp"
    break;

    case 28: /* begin_stmt: TRX_BEGIN  */
#line 290 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_BEGIN);
    }
#line 2028 "yacc_sql.cpp"
    break;

    case 29: /* commit_stmt: TRX_COMMIT  */
#line 296 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_COMMIT);
    }
#line 2036 "yacc_sql.cpp"
    break;

    case 30: /* rollback_stmt: TRX_ROLLBACK  */
#line 302 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_ROLLBACK);
    }
#line 2044 "yacc_sql.cpp"
    break;

    case 31: /* drop_table_stmt: DROP TABLE ID  */
#line 308 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_DROP_TABLE);
      (yyval.sql_node)->drop_table.relation_name = (yyvsp[0].string);
      free((yyvsp[0].string));
    }
#line 2054 "yacc_sql.cpp"
    break;

    case 32: /* show_tables_stmt: SHOW TABLES  */
#line 315 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_SHOW_TABLES);
    }
#line 2062 "yacc_sql.cpp"
    break;

    case 33: /* desc_table_stmt: DESC ID  */
#line 321 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_DESC_TABLE);
      (yyval.sql_node)->desc_table.relation_name = (yyvsp[0].string);
      free((yyvsp[0].string));
    }
#line 2072 "yacc_sql.cpp"
    break;

    case 34: /* load_data_stmt: LOAD DATA INFILE SSS INTO TABLE ID  */
#line 330 "yacc_sql.y"
    {
      char *tmp_file_name = common::substr((yyvsp[-3].string), 1, strlen((yyvsp[-3].string)) - 2);

      (yyval.sql_node) = new ParsedSqlNode(SCF_LOAD_DATA);
      (yyval.sql_node)->load_data.relation_name = (yyvsp[0].string);
      (yyval.sql_node)->load_data.file_name = tmp_file_name;
      free((yyvsp[0].string));
      free(tmp_file_name);
    }
#line 2086 "yacc_sql.cpp"
    break;

    case 35: /* explain_stmt: EXPLAIN command_wrapper  */
#line 343 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_EXPLAIN);
      (yyval.sql_node)->explain.sql_node = std::unique_ptr<ParsedSqlNode>((yyvsp[0].sql_node));
    }
#line 2095 "yacc_sql.cpp"
    break;

    case 36: /* set_variable_stmt: SET ID EQ value  */
#line 351 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_SET_VARIABLE);
      (yyval.sql_node)->set_variable.name = (yyvsp[-2].string);
      (yyval.sql_node)->set_variable.value = *(yyvsp[0].value);
      free((yyvsp[-2].string));
      delete (yyvsp[0].value);
    }
#line 2107 "yacc_sql.cpp"
    break;

    case 37: /* create_index_stmt: CREATE INDEX ID ON ID LBRACE ID id_list RBRACE  */
#line 362 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_INDEX);
      CreateIndexSqlNode &create_index = (yyval.sql_node)->create_index;
      create_index.index_name = (yyvsp[-6].string);
      create_index.relation_name = (yyvsp[-4].string);
      create_index.is_unique = false;

      std::vector<std::string> *attribute_names = (yyvsp[-1].std_string_list);

      if (attribute_names != nullptr) {
        create_index.attribute_name.swap(*attribute_names);
      }

      create_index.attribute_name.emplace_back((yyvsp[-2].string));
      std::reverse(create_index.attribute_name.begin(), create_index.attribute_name.end());

      free((yyvsp[-6].string));
      free((yyvsp[-4].string));
      free((yyvsp[-2].string));
      free((yyvsp[-1].std_string_list));
    }
#line 2133 "yacc_sql.cpp"
    break;

    case 38: /* create_index_stmt: CREATE UNIQUE INDEX ID ON ID LBRACE ID id_list RBRACE  */
#line 384 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_INDEX);
      CreateIndexSqlNode &create_index = (yyval.sql_node)->create_index;
      create_index.index_name = (yyvsp[-6].string);
      create_index.relation_name = (yyvsp[-4].string);
      create_index.is_unique = true;

      std::vector<std::string> *attribute_names = (yyvsp[-1].std_string_list);

      if (attribute_names != nullptr) {
        create_index.attribute_name.swap(*attribute_names);
      }

      create_index.attribute_name.emplace_back((yyvsp[-2].string));
      std::reverse(create_index.attribute_name.begin(), create_index.attribute_name.end());

      free((yyvsp[-6].string));
      free((yyvsp[-4].string));
      free((yyvsp[-2].string));
      free((yyvsp[-1].std_string_list));
    }
#line 2159 "yacc_sql.cpp"
    break;

    case 39: /* drop_index_stmt: DROP INDEX ID ON ID  */
#line 409 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_DROP_INDEX);
      (yyval.sql_node)->drop_index.index_name = (yyvsp[-2].string);
      (yyval.sql_node)->drop_index.relation_name = (yyvsp[0].string);
      free((yyvsp[-2].string));
      free((yyvsp[0].string));
    }
#line 2171 "yacc_sql.cpp"
    break;

    case 40: /* create_table_stmt: CREATE TABLE ID LBRACE attr_def attr_def_list RBRACE  */
#line 419 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_TABLE);
      CreateTableSqlNode &create_table = (yyval.sql_node)->create_table;
      create_table.relation_name = (yyvsp[-4].string);
      free((yyvsp[-4].string));

      std::vector<AttrInfoSqlNode> *src_attrs = (yyvsp[-1].attr_infos);

      if (src_attrs != nullptr) {
        create_table.attr_infos.swap(*src_attrs);
      }
      create_table.attr_infos.emplace_back(*(yyvsp[-2].attr_info));
      std::reverse(create_table.attr_infos.begin(), create_table.attr_infos.end());
      delete (yyvsp[-2].attr_info);
    }
#line 2191 "yacc_sql.cpp"
    break;

    case 41: /* create_table_select_stmt: CREATE TABLE ID AS SELECT select_attr FROM select_from where group_by having
                order_by  */
#line 438 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_TABLE_SELECT);
      CreateTableSelectSqlNode &create_table_select = (yyval.sql_node)->create_table_select;
      create_table_select.relation_name = (yyvsp[-9].string);
      free((yyvsp[-9].string));

      SelectSqlNode &select = create_table_select.select;

      if ((yyvsp[-4].from_node) != nullptr) {
        FromSqlNode *from_node = (yyvsp[-4].from_node);
        select.relations.swap(from_node->relations);
        select.join_conds.swap(from_node->join_conds);
        delete (yyvsp[-4].from_node);
      }

      select.conditions = (yyvsp[-3].cond_pexpr);

      if ((yyvsp[-2].rel_attr_list) != nullptr) {
        select.groupbys = *(yyvsp[-2].rel_attr_list);
        delete (yyvsp[-2].rel_attr_list);
      }

      select.havings = (yyvsp[-1].cond_pexpr);

      if ((yyvsp[0].orderby_list) != nullptr) {
        select.orderbys = *(yyvsp[0].orderby_list);
        delete (yyvsp[0].orderby_list);
      }

      if ((yyvsp[-6].pexpr_list) != nullptr) {
        select.attributes.swap(*(yyvsp[-6].pexpr_list));
        delete (yyvsp[-6].pexpr_list);
      }
    }
#line 2231 "yacc_sql.cpp"
    break;

    case 42: /* create_table_select_stmt: CREATE TABLE ID LBRACE attr_def attr_def_list RBRACE SELECT select_attr FROM
                select_from where group_by having order_by  */
#line 474 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_TABLE_SELECT);
      CreateTableSelectSqlNode &create_table_select = (yyval.sql_node)->create_table_select;
      create_table_select.relation_name = (yyvsp[-12].string);
      free((yyvsp[-12].string));

      std::vector<AttrInfoSqlNode> *src_attrs = (yyvsp[-9].attr_infos);

      if (src_attrs != nullptr) {
        create_table_select.attr_infos.swap(*src_attrs);
      }
      create_table_select.attr_infos.emplace_back(*(yyvsp[-10].attr_info));
      std::reverse(create_table_select.attr_infos.begin(), create_table_select.attr_infos.end());

      delete (yyvsp[-10].attr_info);

      SelectSqlNode &select = create_table_select.select;

      if ((yyvsp[-4].from_node) != nullptr) {
        FromSqlNode *from_node = (yyvsp[-4].from_node);
        select.relations.swap(from_node->relations);
        select.join_conds.swap(from_node->join_conds);
        delete (yyvsp[-4].from_node);
      }

      select.conditions = (yyvsp[-3].cond_pexpr);

      if ((yyvsp[-2].rel_attr_list) != nullptr) {
        select.groupbys = *(yyvsp[-2].rel_attr_list);
        delete (yyvsp[-2].rel_attr_list);
      }

      select.havings = (yyvsp[-1].cond_pexpr);

      if ((yyvsp[0].orderby_list) != nullptr) {
        select.orderbys = *(yyvsp[0].orderby_list);
        delete (yyvsp[0].orderby_list);
      }

      if ((yyvsp[-6].pexpr_list) != nullptr) {
        select.attributes.swap(*(yyvsp[-6].pexpr_list));
        delete (yyvsp[-6].pexpr_list);
      }
    }
#line 2281 "yacc_sql.cpp"
    break;

    case 43: /* create_view_stmt: CREATE VIEW ID AS SELECT select_attr FROM select_from where group_by having order_by
              */
#line 523 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_VIEW);
      CreateViewSqlNode &create_view = (yyval.sql_node)->create_view;
      create_view.relation_name = (yyvsp[-9].string);
      free((yyvsp[-9].string));

      SelectSqlNode &select = create_view.select;

      if ((yyvsp[-4].from_node) != nullptr) {
        FromSqlNode *from_node = (yyvsp[-4].from_node);
        select.relations.swap(from_node->relations);
        select.join_conds.swap(from_node->join_conds);
        delete (yyvsp[-4].from_node);
      }

      select.conditions = (yyvsp[-3].cond_pexpr);

      if ((yyvsp[-2].rel_attr_list) != nullptr) {
        select.groupbys = *(yyvsp[-2].rel_attr_list);
        delete (yyvsp[-2].rel_attr_list);
      }

      select.havings = (yyvsp[-1].cond_pexpr);

      if ((yyvsp[0].orderby_list) != nullptr) {
        select.orderbys = *(yyvsp[0].orderby_list);
        delete (yyvsp[0].orderby_list);
      }

      if ((yyvsp[-6].pexpr_list) != nullptr) {
        select.attributes.swap(*(yyvsp[-6].pexpr_list));
        delete (yyvsp[-6].pexpr_list);
      }
    }
#line 2321 "yacc_sql.cpp"
    break;

    case 44: /* create_view_stmt: CREATE VIEW ID LBRACE ID id_list RBRACE AS SELECT select_attr FROM select_from where
                group_by having order_by  */
#line 559 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CREATE_VIEW);
      CreateViewSqlNode &create_view = (yyval.sql_node)->create_view;
      create_view.relation_name = (yyvsp[-13].string);
      free((yyvsp[-13].string));

      std::vector<std::string> *alias = (yyvsp[-10].std_string_list);

      if (alias != nullptr) {
        create_view.alias.swap(*alias);
      }

      create_view.alias.emplace_back((yyvsp[-11].string));
      std::reverse(create_view.alias.begin(), create_view.alias.end());

      free((yyvsp[-11].string));
      free((yyvsp[-10].std_string_list));

      SelectSqlNode &select = create_view.select;

      if ((yyvsp[-4].from_node) != nullptr) {
        FromSqlNode *from_node = (yyvsp[-4].from_node);
        select.relations.swap(from_node->relations);
        select.join_conds.swap(from_node->join_conds);
        delete (yyvsp[-4].from_node);
      }

      select.conditions = (yyvsp[-3].cond_pexpr);

      if ((yyvsp[-2].rel_attr_list) != nullptr) {
        select.groupbys = *(yyvsp[-2].rel_attr_list);
        delete (yyvsp[-2].rel_attr_list);
      }

      select.havings = (yyvsp[-1].cond_pexpr);

      if ((yyvsp[0].orderby_list) != nullptr) {
        select.orderbys = *(yyvsp[0].orderby_list);
        delete (yyvsp[0].orderby_list);
      }

      if ((yyvsp[-6].pexpr_list) != nullptr) {
        select.attributes.swap(*(yyvsp[-6].pexpr_list));
        delete (yyvsp[-6].pexpr_list);
      }
    }
#line 2373 "yacc_sql.cpp"
    break;

    case 45: /* insert_stmt: INSERT INTO ID VALUES LBRACE pexpr pexpr_list RBRACE  */
#line 610 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_INSERT);
      (yyval.sql_node)->insertion.relation_name = (yyvsp[-5].string);
      if ((yyvsp[-1].pexpr_list) != nullptr) {
        (yyval.sql_node)->insertion.values.swap(*(yyvsp[-1].pexpr_list));
        delete (yyvsp[-1].pexpr_list);
      }
      (yyval.sql_node)->insertion.values.emplace_back((yyvsp[-2].pexpr));
      std::reverse((yyval.sql_node)->insertion.values.begin(), (yyval.sql_node)->insertion.values.end());
      free((yyvsp[-5].string));
    }
#line 2389 "yacc_sql.cpp"
    break;

    case 46: /* delete_stmt: DELETE FROM ID where  */
#line 625 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_DELETE);
      (yyval.sql_node)->deletion.relation_name = (yyvsp[-1].string);
      (yyval.sql_node)->deletion.conditions = (yyvsp[0].cond_pexpr);
      free((yyvsp[-1].string));
    }
#line 2400 "yacc_sql.cpp"
    break;

    case 47: /* update_stmt: UPDATE ID SET ID EQ pexpr assignment_list where  */
#line 635 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_UPDATE);
      (yyval.sql_node)->update.relation_name = (yyvsp[-6].string);

      if ((yyvsp[-1].assignment_list) != nullptr) {
        (yyval.sql_node)->update.assignments.swap(*(yyvsp[-1].assignment_list));
        delete (yyvsp[-1].assignment_list);
      }

      (yyval.sql_node)->update.conditions = (yyvsp[0].cond_pexpr);

      AssignmentSqlNode node;
      node.attribute_name = std::string{(yyvsp[-4].string)};
      node.expr = (yyvsp[-2].pexpr);

      (yyval.sql_node)->update.assignments.push_back(std::move(node));
      std::reverse((yyval.sql_node)->update.assignments.begin(), (yyval.sql_node)->update.assignments.end());

      free((yyvsp[-6].string));
      free((yyvsp[-4].string));
    }
#line 2426 "yacc_sql.cpp"
    break;

    case 48: /* select_stmt: SELECT select_attr FROM select_from where group_by having order_by  */
#line 660 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_SELECT);

      if ((yyvsp[-4].from_node) != nullptr) {
        FromSqlNode *from_node = (yyvsp[-4].from_node);
        (yyval.sql_node)->selection.relations.swap(from_node->relations);
        (yyval.sql_node)->selection.join_conds.swap(from_node->join_conds);
        delete (yyvsp[-4].from_node);
      }

      (yyval.sql_node)->selection.conditions = (yyvsp[-3].cond_pexpr);

      if ((yyvsp[-2].rel_attr_list) != nullptr) {
        (yyval.sql_node)->selection.groupbys = *(yyvsp[-2].rel_attr_list);
        delete (yyvsp[-2].rel_attr_list);
      }

      (yyval.sql_node)->selection.havings = (yyvsp[-1].cond_pexpr);

      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.sql_node)->selection.orderbys = *(yyvsp[0].orderby_list);
        delete (yyvsp[0].orderby_list);
      }

      if ((yyvsp[-6].pexpr_list) != nullptr) {
        (yyval.sql_node)->selection.attributes.swap(*(yyvsp[-6].pexpr_list));
        delete (yyvsp[-6].pexpr_list);
      }
    }
#line 2461 "yacc_sql.cpp"
    break;

    case 49: /* select_stmt: SELECT select_attr  */
#line 690 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CALC);
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.sql_node)->selection.attributes.swap(*(yyvsp[0].pexpr_list));
        std::reverse((yyval.sql_node)->selection.attributes.begin(), (yyval.sql_node)->selection.attributes.end());
        delete (yyvsp[0].pexpr_list);
      }
    }
#line 2474 "yacc_sql.cpp"
    break;

    case 50: /* calc_stmt: CALC expression_list  */
#line 702 "yacc_sql.y"
    {
      (yyval.sql_node) = new ParsedSqlNode(SCF_CALC);
      std::reverse((yyvsp[0].expression_list)->begin(), (yyvsp[0].expression_list)->end());
      (yyval.sql_node)->calc.expressions.swap(*(yyvsp[0].expression_list));
      delete (yyvsp[0].expression_list);
    }
#line 2485 "yacc_sql.cpp"
    break;

    case 51: /* assignment_list: %empty  */
#line 714 "yacc_sql.y"
    {
      (yyval.assignment_list) = nullptr;
    }
#line 2493 "yacc_sql.cpp"
    break;

    case 52: /* assignment_list: COMMA ID EQ pexpr assignment_list  */
#line 718 "yacc_sql.y"
    {
      if ((yyvsp[0].assignment_list) != nullptr) {
        (yyval.assignment_list) = (yyvsp[0].assignment_list);
      } else {
        (yyval.assignment_list) = new std::vector<AssignmentSqlNode>;
      }

      AssignmentSqlNode node = {.attribute_name = std::string{(yyvsp[-3].string)}, .expr = (yyvsp[-1].pexpr)};

      (yyval.assignment_list)->push_back(std::move(node));
      free((yyvsp[-3].string));
    }
#line 2513 "yacc_sql.cpp"
    break;

    case 53: /* select_attr: pexpr select_attr_list  */
#line 736 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      (yyval.pexpr_list)->push_back((yyvsp[-1].pexpr));
      // std::reverse($$->begin(), $$->end());
    }
#line 2527 "yacc_sql.cpp"
    break;

    case 54: /* select_attr: pexpr ID select_attr_list  */
#line 745 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-2].pexpr);
      pexpr->alias = (yyvsp[-1].string);
      (yyval.pexpr_list)->push_back(pexpr);
      // std::reverse($$->begin(), $$->end());
      free((yyvsp[-1].string));
    }
#line 2544 "yacc_sql.cpp"
    break;

    case 55: /* select_attr: pexpr AS ID select_attr_list  */
#line 757 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-3].pexpr);
      pexpr->alias = (yyvsp[-1].string);
      (yyval.pexpr_list)->push_back(pexpr);
      // std::reverse($$->begin(), $$->end());
      free((yyvsp[-1].string));
    }
#line 2561 "yacc_sql.cpp"
    break;

    case 56: /* select_attr: pexpr AS aggr_func_type select_attr_list  */
#line 770 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-3].pexpr);
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::MIN) {
        pexpr->alias = "min";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::MAX) {
        pexpr->alias = "max";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::SUM) {
        pexpr->alias = "sum";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::AVG) {
        pexpr->alias = "avg";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::COUNT) {
        pexpr->alias = "count";
      }
      (yyval.pexpr_list)->push_back(pexpr);
      // std::reverse($$->begin(), $$->end());
    }
#line 2591 "yacc_sql.cpp"
    break;

    case 57: /* select_attr: pexpr AS DATA select_attr_list  */
#line 795 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-3].pexpr);
      pexpr->alias = "data";
      (yyval.pexpr_list)->push_back(pexpr);
      // std::reverse($$->begin(), $$->end());
    }
#line 2607 "yacc_sql.cpp"
    break;

    case 58: /* select_attr_list: %empty  */
#line 809 "yacc_sql.y"
    {
      (yyval.pexpr_list) = nullptr;
    }
#line 2615 "yacc_sql.cpp"
    break;

    case 59: /* select_attr_list: COMMA pexpr select_attr_list  */
#line 812 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      (yyval.pexpr_list)->push_back((yyvsp[-1].pexpr));
    }
#line 2628 "yacc_sql.cpp"
    break;

    case 60: /* select_attr_list: COMMA pexpr ID select_attr_list  */
#line 820 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-2].pexpr);
      pexpr->alias = (yyvsp[-1].string);
      (yyval.pexpr_list)->push_back(pexpr);
      free((yyvsp[-1].string));
    }
#line 2644 "yacc_sql.cpp"
    break;

    case 61: /* select_attr_list: COMMA pexpr AS ID select_attr_list  */
#line 831 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-3].pexpr);
      pexpr->alias = (yyvsp[-1].string);
      (yyval.pexpr_list)->push_back(pexpr);
      free((yyvsp[-1].string));
    }
#line 2660 "yacc_sql.cpp"
    break;

    case 62: /* select_attr_list: COMMA pexpr AS aggr_func_type select_attr_list  */
#line 842 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-3].pexpr);
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::MIN) {
        pexpr->alias = "min";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::MAX) {
        pexpr->alias = "max";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::SUM) {
        pexpr->alias = "sum";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::AVG) {
        pexpr->alias = "avg";
      }
      if ((yyvsp[-1].aggr_func_type) == AggrFuncType::COUNT) {
        pexpr->alias = "count";
      }
      (yyval.pexpr_list)->push_back(pexpr);
      // std::reverse($$->begin(), $$->end());
    }
#line 2690 "yacc_sql.cpp"
    break;

    case 63: /* select_attr_list: COMMA pexpr AS DATA select_attr_list  */
#line 867 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      PExpr *pexpr = (yyvsp[-3].pexpr);
      pexpr->alias = "data";
      (yyval.pexpr_list)->push_back(pexpr);
      // std::reverse($$->begin(), $$->end());
    }
#line 2706 "yacc_sql.cpp"
    break;

    case 64: /* select_from: ID from_list  */
#line 881 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-1].string);
      (yyval.from_node)->relations.push_back(std::move(rel));
      std::reverse((yyval.from_node)->relations.begin(), (yyval.from_node)->relations.end());
      std::reverse((yyval.from_node)->join_conds.begin(), (yyval.from_node)->join_conds.end());
      free((yyvsp[-1].string));
    }
#line 2724 "yacc_sql.cpp"
    break;

    case 65: /* select_from: ID ID from_list  */
#line 894 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-2].string);
      rel.alias = (yyvsp[-1].string);
      (yyval.from_node)->relations.push_back(std::move(rel));
      std::reverse((yyval.from_node)->relations.begin(), (yyval.from_node)->relations.end());
      std::reverse((yyval.from_node)->join_conds.begin(), (yyval.from_node)->join_conds.end());
      free((yyvsp[-2].string));
      free((yyvsp[-1].string));
    }
#line 2744 "yacc_sql.cpp"
    break;

    case 66: /* select_from: ID AS ID from_list  */
#line 909 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-3].string);
      rel.alias = (yyvsp[-1].string);
      (yyval.from_node)->relations.push_back(std::move(rel));
      std::reverse((yyval.from_node)->relations.begin(), (yyval.from_node)->relations.end());
      std::reverse((yyval.from_node)->join_conds.begin(), (yyval.from_node)->join_conds.end());
      free((yyvsp[-3].string));
      free((yyvsp[-1].string));
    }
#line 2764 "yacc_sql.cpp"
    break;

    case 67: /* from_list: %empty  */
#line 926 "yacc_sql.y"
    {
      (yyval.from_node) = nullptr;
    }
#line 2772 "yacc_sql.cpp"
    break;

    case 68: /* from_list: COMMA ID from_list  */
#line 929 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-1].string);
      (yyval.from_node)->relations.push_back(rel);
      free((yyvsp[-1].string));
    }
#line 2788 "yacc_sql.cpp"
    break;

    case 69: /* from_list: COMMA ID ID from_list  */
#line 940 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-2].string);
      rel.alias = (yyvsp[-1].string);
      (yyval.from_node)->relations.push_back(rel);
      free((yyvsp[-2].string));
      free((yyvsp[-1].string));
    }
#line 2806 "yacc_sql.cpp"
    break;

    case 70: /* from_list: COMMA ID AS ID from_list  */
#line 953 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-3].string);
      rel.alias = (yyvsp[-1].string);
      (yyval.from_node)->relations.push_back(rel);
      free((yyvsp[-3].string));
      free((yyvsp[-1].string));
    }
#line 2824 "yacc_sql.cpp"
    break;

    case 71: /* from_list: INNER JOIN ID inner_join from_list  */
#line 966 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-2].string);
      (yyval.from_node)->relations.push_back(rel);
      (yyval.from_node)->join_conds.push_back((yyvsp[-1].cond_pexpr));
      free((yyvsp[-2].string));
    }
#line 2841 "yacc_sql.cpp"
    break;

    case 72: /* from_list: INNER JOIN ID ID inner_join from_list  */
#line 978 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-3].string);
      rel.alias = (yyvsp[-2].string);
      (yyval.from_node)->relations.push_back(rel);
      (yyval.from_node)->join_conds.push_back((yyvsp[-1].cond_pexpr));
      free((yyvsp[-3].string));
      free((yyvsp[-2].string));
    }
#line 2860 "yacc_sql.cpp"
    break;

    case 73: /* from_list: INNER JOIN ID AS ID inner_join from_list  */
#line 992 "yacc_sql.y"
    {
      if ((yyvsp[0].from_node) != nullptr) {
        (yyval.from_node) = (yyvsp[0].from_node);
      } else {
        (yyval.from_node) = new FromSqlNode;
      }
      Relation rel;
      rel.relation_name = (yyvsp[-4].string);
      rel.alias = (yyvsp[-2].string);
      (yyval.from_node)->relations.push_back(rel);
      (yyval.from_node)->join_conds.push_back((yyvsp[-1].cond_pexpr));
      free((yyvsp[-4].string));
      free((yyvsp[-2].string));
    }
#line 2879 "yacc_sql.cpp"
    break;

    case 74: /* inner_join: %empty  */
#line 1009 "yacc_sql.y"
    {
      (yyval.cond_pexpr) = nullptr;
    }
#line 2887 "yacc_sql.cpp"
    break;

    case 75: /* inner_join: ON cond_pexpr  */
#line 1012 "yacc_sql.y"
    {
      (yyval.cond_pexpr) = (yyvsp[0].cond_pexpr);
    }
#line 2895 "yacc_sql.cpp"
    break;

    case 76: /* where: %empty  */
#line 1020 "yacc_sql.y"
    {
      (yyval.cond_pexpr) = nullptr;
    }
#line 2903 "yacc_sql.cpp"
    break;

    case 77: /* where: WHERE cond_pexpr  */
#line 1023 "yacc_sql.y"
    {
      (yyval.cond_pexpr) = (yyvsp[0].cond_pexpr);
    }
#line 2911 "yacc_sql.cpp"
    break;

    case 78: /* group_by: %empty  */
#line 1029 "yacc_sql.y"
    {
      (yyval.rel_attr_list) = nullptr;
    }
#line 2919 "yacc_sql.cpp"
    break;

    case 79: /* group_by: GROUP BY ID group_by_list  */
#line 1032 "yacc_sql.y"
    {
      if ((yyvsp[0].rel_attr_list) != nullptr) {
        (yyval.rel_attr_list) = (yyvsp[0].rel_attr_list);
      } else {
        (yyval.rel_attr_list) = new std::vector<RelAttrSqlNode>;
      }
      RelAttrSqlNode rel_attr;
      rel_attr.attribute_name = (yyvsp[-1].string);
      (yyval.rel_attr_list)->push_back(rel_attr);
      std::reverse((yyval.rel_attr_list)->begin(), (yyval.rel_attr_list)->end());
      free((yyvsp[-1].string));
    }
#line 2936 "yacc_sql.cpp"
    break;

    case 80: /* group_by: GROUP BY ID DOT ID group_by_list  */
#line 1044 "yacc_sql.y"
    {
      if ((yyvsp[0].rel_attr_list) != nullptr) {
        (yyval.rel_attr_list) = (yyvsp[0].rel_attr_list);
      } else {
        (yyval.rel_attr_list) = new std::vector<RelAttrSqlNode>;
      }
      RelAttrSqlNode rel_attr;
      rel_attr.relation_name = (yyvsp[-3].string);
      rel_attr.attribute_name = (yyvsp[-1].string);
      (yyval.rel_attr_list)->push_back(rel_attr);
      std::reverse((yyval.rel_attr_list)->begin(), (yyval.rel_attr_list)->end());
      free((yyvsp[-3].string));
      free((yyvsp[-1].string));
    }
#line 2955 "yacc_sql.cpp"
    break;

    case 81: /* group_by_list: %empty  */
#line 1061 "yacc_sql.y"
    {
      (yyval.rel_attr_list) = nullptr;
    }
#line 2963 "yacc_sql.cpp"
    break;

    case 82: /* group_by_list: COMMA ID group_by_list  */
#line 1064 "yacc_sql.y"
    {
      if ((yyvsp[0].rel_attr_list) != nullptr) {
        (yyval.rel_attr_list) = (yyvsp[0].rel_attr_list);
      } else {
        (yyval.rel_attr_list) = new std::vector<RelAttrSqlNode>;
      }
      RelAttrSqlNode rel_attr;
      rel_attr.attribute_name = (yyvsp[-1].string);
      (yyval.rel_attr_list)->push_back(rel_attr);
      free((yyvsp[-1].string));
    }
#line 2979 "yacc_sql.cpp"
    break;

    case 83: /* group_by_list: COMMA ID DOT ID group_by_list  */
#line 1075 "yacc_sql.y"
    {
      if ((yyvsp[0].rel_attr_list) != nullptr) {
        (yyval.rel_attr_list) = (yyvsp[0].rel_attr_list);
      } else {
        (yyval.rel_attr_list) = new std::vector<RelAttrSqlNode>;
      }
      RelAttrSqlNode rel_attr;
      rel_attr.relation_name = (yyvsp[-3].string);
      rel_attr.attribute_name = (yyvsp[-1].string);
      (yyval.rel_attr_list)->push_back(rel_attr);
      free((yyvsp[-3].string));
      free((yyvsp[-1].string));
    }
#line 2997 "yacc_sql.cpp"
    break;

    case 84: /* having: %empty  */
#line 1092 "yacc_sql.y"
    {
      (yyval.cond_pexpr) = nullptr;
    }
#line 3005 "yacc_sql.cpp"
    break;

    case 85: /* having: HAVING cond_pexpr  */
#line 1095 "yacc_sql.y"
    {
      (yyval.cond_pexpr) = (yyvsp[0].cond_pexpr);
    }
#line 3013 "yacc_sql.cpp"
    break;

    case 86: /* order_by: %empty  */
#line 1102 "yacc_sql.y"
    {
      (yyval.orderby_list) = nullptr;
    }
#line 3021 "yacc_sql.cpp"
    break;

    case 87: /* order_by: ORDER BY rel_attr order_condtions  */
#line 1105 "yacc_sql.y"
    {
      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.orderby_list) = (yyvsp[0].orderby_list);
      } else {
        (yyval.orderby_list) = new std::vector<OrderBy>;
      }
      OrderBy order;
      order.attr = *(yyvsp[-1].rel_attr);
      order.sort_type = SortType::ASC;
      (yyval.orderby_list)->push_back(order);
      std::reverse((yyval.orderby_list)->begin(), (yyval.orderby_list)->end());
      delete ((yyvsp[-1].rel_attr));
    }
#line 3039 "yacc_sql.cpp"
    break;

    case 88: /* order_by: ORDER BY rel_attr DESC order_condtions  */
#line 1118 "yacc_sql.y"
    {
      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.orderby_list) = (yyvsp[0].orderby_list);
      } else {
        (yyval.orderby_list) = new std::vector<OrderBy>;
      }
      OrderBy order;
      order.attr = *(yyvsp[-2].rel_attr);
      order.sort_type = SortType::DESC;
      (yyval.orderby_list)->push_back(order);
      std::reverse((yyval.orderby_list)->begin(), (yyval.orderby_list)->end());
      delete ((yyvsp[-2].rel_attr));
    }
#line 3057 "yacc_sql.cpp"
    break;

    case 89: /* order_by: ORDER BY rel_attr ASC order_condtions  */
#line 1131 "yacc_sql.y"
    {
      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.orderby_list) = (yyvsp[0].orderby_list);
      } else {
        (yyval.orderby_list) = new std::vector<OrderBy>;
      }
      OrderBy order;
      order.attr = *(yyvsp[-2].rel_attr);
      order.sort_type = SortType::ASC;
      (yyval.orderby_list)->push_back(order);
      std::reverse((yyval.orderby_list)->begin(), (yyval.orderby_list)->end());
      delete ((yyvsp[-2].rel_attr));
    }
#line 3075 "yacc_sql.cpp"
    break;

    case 90: /* order_condtions: %empty  */
#line 1147 "yacc_sql.y"
    {
      (yyval.orderby_list) = nullptr;
    }
#line 3083 "yacc_sql.cpp"
    break;

    case 91: /* order_condtions: COMMA rel_attr order_condtions  */
#line 1150 "yacc_sql.y"
    {
      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.orderby_list) = (yyvsp[0].orderby_list);
      } else {
        (yyval.orderby_list) = new std::vector<OrderBy>;
      }
      OrderBy order;
      order.attr = *(yyvsp[-1].rel_attr);
      order.sort_type = SortType::ASC;
      (yyval.orderby_list)->push_back(order);
      delete ((yyvsp[-1].rel_attr));
    }
#line 3100 "yacc_sql.cpp"
    break;

    case 92: /* order_condtions: COMMA rel_attr DESC order_condtions  */
#line 1162 "yacc_sql.y"
    {
      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.orderby_list) = (yyvsp[0].orderby_list);
      } else {
        (yyval.orderby_list) = new std::vector<OrderBy>;
      }
      OrderBy order;
      order.attr = *(yyvsp[-2].rel_attr);
      order.sort_type = SortType::DESC;
      (yyval.orderby_list)->push_back(order);
      delete ((yyvsp[-2].rel_attr));
    }
#line 3117 "yacc_sql.cpp"
    break;

    case 93: /* order_condtions: COMMA rel_attr ASC order_condtions  */
#line 1174 "yacc_sql.y"
    {
      if ((yyvsp[0].orderby_list) != nullptr) {
        (yyval.orderby_list) = (yyvsp[0].orderby_list);
      } else {
        (yyval.orderby_list) = new std::vector<OrderBy>;
      }
      OrderBy order;
      order.attr = *(yyvsp[-2].rel_attr);
      order.sort_type = SortType::ASC;
      (yyval.orderby_list)->push_back(order);
      delete ((yyvsp[-2].rel_attr));
    }
#line 3134 "yacc_sql.cpp"
    break;

    case 94: /* subquery_pexpr: LBRACE SELECT select_attr FROM select_from where group_by having order_by RBRACE  */
#line 1190 "yacc_sql.y"
    {
      (yyval.subquery_pexpr) = new PSubQueryExpr;
      (yyval.subquery_pexpr)->sub_select = new SelectSqlNode();
      SelectSqlNode *sub_select = (yyval.subquery_pexpr)->sub_select;

      if ((yyvsp[-5].from_node) != nullptr) {
        FromSqlNode *from_node = (yyvsp[-5].from_node);
        sub_select->relations.swap(from_node->relations);
        sub_select->join_conds.swap(from_node->join_conds);
        delete (yyvsp[-5].from_node);
      }

      sub_select->conditions = (yyvsp[-4].cond_pexpr);

      if ((yyvsp[-3].rel_attr_list) != nullptr) {
        sub_select->groupbys = *(yyvsp[-3].rel_attr_list);
        delete (yyvsp[-3].rel_attr_list);
      }

      sub_select->havings = (yyvsp[-2].cond_pexpr);

      if ((yyvsp[-1].orderby_list) != nullptr) {
        sub_select->orderbys = *(yyvsp[-1].orderby_list);
        delete (yyvsp[-1].orderby_list);
      }

      if ((yyvsp[-7].pexpr_list) != nullptr) {
        sub_select->attributes.swap(*(yyvsp[-7].pexpr_list));
        delete (yyvsp[-7].pexpr_list);
      }
    }
#line 3171 "yacc_sql.cpp"
    break;

    case 95: /* id_list: %empty  */
#line 1227 "yacc_sql.y"
    {
      (yyval.std_string_list) = nullptr;
    }
#line 3179 "yacc_sql.cpp"
    break;

    case 96: /* id_list: COMMA ID id_list  */
#line 1231 "yacc_sql.y"
    {
      if ((yyvsp[0].std_string_list) != nullptr) {
        (yyval.std_string_list) = (yyvsp[0].std_string_list);
      } else {
        (yyval.std_string_list) = new std::vector<std::string>;
      }
      (yyval.std_string_list)->emplace_back((yyvsp[-1].string));
      free((yyvsp[-1].string));
    }
#line 3193 "yacc_sql.cpp"
    break;

    case 97: /* attr_def_list: %empty  */
#line 1244 "yacc_sql.y"
    {
      (yyval.attr_infos) = nullptr;
    }
#line 3201 "yacc_sql.cpp"
    break;

    case 98: /* attr_def_list: COMMA attr_def attr_def_list  */
#line 1248 "yacc_sql.y"
    {
      if ((yyvsp[0].attr_infos) != nullptr) {
        (yyval.attr_infos) = (yyvsp[0].attr_infos);
      } else {
        (yyval.attr_infos) = new std::vector<AttrInfoSqlNode>;
      }
      (yyval.attr_infos)->emplace_back(*(yyvsp[-1].attr_info));
      delete (yyvsp[-1].attr_info);
    }
#line 3215 "yacc_sql.cpp"
    break;

    case 99: /* attr_def: ID type LBRACE number RBRACE  */
#line 1261 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-3].number);
      (yyval.attr_info)->name = (yyvsp[-4].string);
      (yyval.attr_info)->length = (yyvsp[-1].number);
      (yyval.attr_info)->is_not_null = false;
      free((yyvsp[-4].string));
    }
#line 3228 "yacc_sql.cpp"
    break;

    case 100: /* attr_def: ID type LBRACE number RBRACE NULL_T  */
#line 1270 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-4].number);
      (yyval.attr_info)->name = (yyvsp[-5].string);
      (yyval.attr_info)->length = (yyvsp[-2].number);
      (yyval.attr_info)->is_not_null = false;
      free((yyvsp[-5].string));
    }
#line 3241 "yacc_sql.cpp"
    break;

    case 101: /* attr_def: ID type LBRACE number RBRACE DEFAULT NULL_T  */
#line 1279 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-5].number);
      (yyval.attr_info)->name = (yyvsp[-6].string);
      (yyval.attr_info)->length = (yyvsp[-3].number);
      (yyval.attr_info)->is_not_null = false;
      free((yyvsp[-6].string));
    }
#line 3254 "yacc_sql.cpp"
    break;

    case 102: /* attr_def: ID type LBRACE number RBRACE NOT NULL_T  */
#line 1288 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-5].number);
      (yyval.attr_info)->name = (yyvsp[-6].string);
      (yyval.attr_info)->length = (yyvsp[-3].number);
      (yyval.attr_info)->is_not_null = true;
      free((yyvsp[-6].string));
    }
#line 3267 "yacc_sql.cpp"
    break;

    case 103: /* attr_def: ID type  */
#line 1297 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[0].number);
      (yyval.attr_info)->name = (yyvsp[-1].string);
      (yyval.attr_info)->is_not_null = false;
      if ((yyval.attr_info)->type == AttrType::TEXTS) {
        (yyval.attr_info)->length = 68;  // 字段长度为68， 在record中存储为16+1个指向文本数据的溢出页
      } else {
        (yyval.attr_info)->length = 4;
      }
      free((yyvsp[-1].string));
    }
#line 3286 "yacc_sql.cpp"
    break;

    case 104: /* attr_def: ID type NULL_T  */
#line 1312 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-1].number);
      (yyval.attr_info)->name = (yyvsp[-2].string);
      (yyval.attr_info)->is_not_null = false;
      if ((yyval.attr_info)->type == AttrType::TEXTS) {
        (yyval.attr_info)->length = 68;  // 字段长度为68， 在record中存储为16+1个指向文本数据的溢出页
      } else {
        (yyval.attr_info)->length = 4;
      }
      free((yyvsp[-2].string));
    }
#line 3305 "yacc_sql.cpp"
    break;

    case 105: /* attr_def: ID type DEFAULT NULL_T  */
#line 1327 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-2].number);
      (yyval.attr_info)->name = (yyvsp[-3].string);
      (yyval.attr_info)->is_not_null = false;
      if ((yyval.attr_info)->type == AttrType::TEXTS) {
        (yyval.attr_info)->length = 68;  // 字段长度为68， 在record中存储为16+1个指向文本数据的溢出页
      } else {
        (yyval.attr_info)->length = 4;
      }
      free((yyvsp[-3].string));
    }
#line 3324 "yacc_sql.cpp"
    break;

    case 106: /* attr_def: ID type NOT NULL_T  */
#line 1342 "yacc_sql.y"
    {
      (yyval.attr_info) = new AttrInfoSqlNode;
      (yyval.attr_info)->type = (AttrType)(yyvsp[-2].number);
      (yyval.attr_info)->name = (yyvsp[-3].string);
      (yyval.attr_info)->is_not_null = true;
      if ((yyval.attr_info)->type == AttrType::TEXTS) {
        (yyval.attr_info)->length = 68;  // 字段长度为68， 在record中存储为16+1个指向文本数据的溢出页
      } else {
        (yyval.attr_info)->length = 4;
      }
      free((yyvsp[-3].string));
    }
#line 3343 "yacc_sql.cpp"
    break;

    case 107: /* number: NUMBER  */
#line 1358 "yacc_sql.y"
    {
      (yyval.number) = (yyvsp[0].number);
    }
#line 3349 "yacc_sql.cpp"
    break;

    case 108: /* type: INT_T  */
#line 1361 "yacc_sql.y"
    {
      (yyval.number) = AttrType::INTS;
    }
#line 3355 "yacc_sql.cpp"
    break;

    case 109: /* type: STRING_T  */
#line 1362 "yacc_sql.y"
    {
      (yyval.number) = AttrType::CHARS;
    }
#line 3361 "yacc_sql.cpp"
    break;

    case 110: /* type: TEXT_T  */
#line 1363 "yacc_sql.y"
    {
      (yyval.number) = AttrType::TEXTS;
    }
#line 3367 "yacc_sql.cpp"
    break;

    case 111: /* type: FLOAT_T  */
#line 1364 "yacc_sql.y"
    {
      (yyval.number) = AttrType::FLOATS;
    }
#line 3373 "yacc_sql.cpp"
    break;

    case 112: /* type: DATE_T  */
#line 1365 "yacc_sql.y"
    {
      (yyval.number) = AttrType::DATES;
    }
#line 3379 "yacc_sql.cpp"
    break;

    case 113: /* value: NUMBER  */
#line 1369 "yacc_sql.y"
    {
      (yyval.value) = new Value((int)(yyvsp[0].number));
      (yyloc) = (yylsp[0]);
    }
#line 3388 "yacc_sql.cpp"
    break;

    case 114: /* value: FLOAT  */
#line 1373 "yacc_sql.y"
    {
      (yyval.value) = new Value((float)(yyvsp[0].floats));
      (yyloc) = (yylsp[0]);
    }
#line 3397 "yacc_sql.cpp"
    break;

    case 115: /* value: SSS  */
#line 1377 "yacc_sql.y"
    {
      char *tmp = common::substr((yyvsp[0].string), 1, strlen((yyvsp[0].string)) - 2);
      if (strlen(tmp) > 65535) {
        yyerror(&(yyloc), sql_string, sql_result, scanner, "invalid text", SCF_INVALID);
      }
      (yyval.value) = new Value(tmp);
      free(tmp);
    }
#line 3410 "yacc_sql.cpp"
    break;

    case 116: /* value: NULL_T  */
#line 1385 "yacc_sql.y"
    {
      (yyval.value) = new Value(AttrType::NULLS);
      (yyloc) = (yylsp[0]);
    }
#line 3419 "yacc_sql.cpp"
    break;

    case 117: /* value: DATE  */
#line 1389 "yacc_sql.y"
    {
      char *tmp = common::substr((yyvsp[0].string), 1, strlen((yyvsp[0].string)) - 2);
      (yyval.value) = new Value(tmp, DATES);
      free(tmp);
      if (!(yyval.value)->check_date()) {
        yyerror(&(yyloc), sql_string, sql_result, scanner, "invalid date", SCF_INVALID);
      }
    }
#line 3432 "yacc_sql.cpp"
    break;

    case 118: /* rel_attr: '*'  */
#line 1401 "yacc_sql.y"
    {
      (yyval.rel_attr) = new RelAttrSqlNode;
      (yyval.rel_attr)->relation_name = "";
      (yyval.rel_attr)->attribute_name = "*";
    }
#line 3442 "yacc_sql.cpp"
    break;

    case 119: /* rel_attr: ID DOT '*'  */
#line 1406 "yacc_sql.y"
    {
      (yyval.rel_attr) = new RelAttrSqlNode;
      (yyval.rel_attr)->relation_name = (yyvsp[-2].string);
      (yyval.rel_attr)->attribute_name = "*";
      free((yyvsp[-2].string));
    }
#line 3453 "yacc_sql.cpp"
    break;

    case 120: /* rel_attr: ID  */
#line 1412 "yacc_sql.y"
    {
      (yyval.rel_attr) = new RelAttrSqlNode;
      (yyval.rel_attr)->attribute_name = (yyvsp[0].string);
      free((yyvsp[0].string));
    }
#line 3463 "yacc_sql.cpp"
    break;

    case 121: /* rel_attr: ID DOT ID  */
#line 1417 "yacc_sql.y"
    {
      (yyval.rel_attr) = new RelAttrSqlNode;
      (yyval.rel_attr)->relation_name = (yyvsp[-2].string);
      (yyval.rel_attr)->attribute_name = (yyvsp[0].string);
      free((yyvsp[-2].string));
      free((yyvsp[0].string));
    }
#line 3475 "yacc_sql.cpp"
    break;

    case 122: /* expression_list: expression  */
#line 1428 "yacc_sql.y"
    {
      (yyval.expression_list) = new std::vector<Expression *>;
      (yyval.expression_list)->emplace_back((yyvsp[0].expression));
    }
#line 3484 "yacc_sql.cpp"
    break;

    case 123: /* expression_list: expression COMMA expression_list  */
#line 1433 "yacc_sql.y"
    {
      if ((yyvsp[0].expression_list) != nullptr) {
        (yyval.expression_list) = (yyvsp[0].expression_list);
      } else {
        (yyval.expression_list) = new std::vector<Expression *>;
      }
      (yyval.expression_list)->emplace_back((yyvsp[-2].expression));
    }
#line 3497 "yacc_sql.cpp"
    break;

    case 124: /* expression: expression '+' expression  */
#line 1444 "yacc_sql.y"
    {
      (yyval.expression) = create_arithmetic_expression(
          ArithmeticExpr::Type::ADD, (yyvsp[-2].expression), (yyvsp[0].expression), sql_string, &(yyloc));
    }
#line 3505 "yacc_sql.cpp"
    break;

    case 125: /* expression: expression '-' expression  */
#line 1447 "yacc_sql.y"
    {
      (yyval.expression) = create_arithmetic_expression(
          ArithmeticExpr::Type::SUB, (yyvsp[-2].expression), (yyvsp[0].expression), sql_string, &(yyloc));
    }
#line 3513 "yacc_sql.cpp"
    break;

    case 126: /* expression: expression '*' expression  */
#line 1450 "yacc_sql.y"
    {
      (yyval.expression) = create_arithmetic_expression(
          ArithmeticExpr::Type::MUL, (yyvsp[-2].expression), (yyvsp[0].expression), sql_string, &(yyloc));
    }
#line 3521 "yacc_sql.cpp"
    break;

    case 127: /* expression: expression '/' expression  */
#line 1453 "yacc_sql.y"
    {
      (yyval.expression) = create_arithmetic_expression(
          ArithmeticExpr::Type::DIV, (yyvsp[-2].expression), (yyvsp[0].expression), sql_string, &(yyloc));
    }
#line 3529 "yacc_sql.cpp"
    break;

    case 128: /* expression: LBRACE expression RBRACE  */
#line 1456 "yacc_sql.y"
    {
      (yyval.expression) = (yyvsp[-1].expression);
      (yyval.expression)->set_name(token_name(sql_string, &(yyloc)));
    }
#line 3538 "yacc_sql.cpp"
    break;

    case 129: /* expression: '-' expression  */
#line 1460 "yacc_sql.y"
    {
      (yyval.expression) = create_arithmetic_expression(
          ArithmeticExpr::Type::NEGATIVE, (yyvsp[0].expression), nullptr, sql_string, &(yyloc));
    }
#line 3546 "yacc_sql.cpp"
    break;

    case 130: /* expression: value  */
#line 1463 "yacc_sql.y"
    {
      (yyval.expression) = new ValueExpr(*(yyvsp[0].value));
      (yyval.expression)->set_name(token_name(sql_string, &(yyloc)));
      delete (yyvsp[0].value);
    }
#line 3556 "yacc_sql.cpp"
    break;

    case 131: /* unary_pexpr: value  */
#line 1472 "yacc_sql.y"
    {
      PUnaryExpr *unary_pexpr = new PUnaryExpr;
      unary_pexpr->is_attr = false;
      unary_pexpr->value = *(yyvsp[0].value);
      (yyval.unary_pexpr) = unary_pexpr;
      delete (yyvsp[0].value);
    }
#line 3568 "yacc_sql.cpp"
    break;

    case 132: /* unary_pexpr: rel_attr  */
#line 1479 "yacc_sql.y"
    {
      PUnaryExpr *unary_pexpr = new PUnaryExpr;
      unary_pexpr->is_attr = true;
      unary_pexpr->attr = *(yyvsp[0].rel_attr);
      (yyval.unary_pexpr) = unary_pexpr;
      delete (yyvsp[0].rel_attr);
    }
#line 3580 "yacc_sql.cpp"
    break;

    case 133: /* cond_pexpr: pexpr OR pexpr  */
#line 1488 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::OR, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3589 "yacc_sql.cpp"
    break;

    case 134: /* cond_pexpr: pexpr AND pexpr  */
#line 1492 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::AND, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3598 "yacc_sql.cpp"
    break;

    case 135: /* cond_pexpr: pexpr EQ pexpr  */
#line 1497 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::EQUAL_TO, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3607 "yacc_sql.cpp"
    break;

    case 136: /* cond_pexpr: pexpr NE pexpr  */
#line 1502 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::NOT_EQUAL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3616 "yacc_sql.cpp"
    break;

    case 137: /* cond_pexpr: pexpr LT pexpr  */
#line 1507 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::LESS_THAN, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3625 "yacc_sql.cpp"
    break;

    case 138: /* cond_pexpr: pexpr GT pexpr  */
#line 1512 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::GREAT_THAN, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3634 "yacc_sql.cpp"
    break;

    case 139: /* cond_pexpr: pexpr LE pexpr  */
#line 1517 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::LESS_EQUAL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3643 "yacc_sql.cpp"
    break;

    case 140: /* cond_pexpr: pexpr GE pexpr  */
#line 1522 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::GREAT_EQUAL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3652 "yacc_sql.cpp"
    break;

    case 141: /* cond_pexpr: pexpr LIKE pexpr  */
#line 1527 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::LIKE, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3661 "yacc_sql.cpp"
    break;

    case 142: /* cond_pexpr: pexpr NOT LIKE pexpr  */
#line 1532 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::NOT_LIKE, (yyvsp[-3].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3670 "yacc_sql.cpp"
    break;

    case 143: /* cond_pexpr: pexpr IS NULL_T  */
#line 1537 "yacc_sql.y"
    {
      PUnaryExpr *unary_pexpr = new PUnaryExpr;
      unary_pexpr->is_attr = false;
      unary_pexpr->value = Value(AttrType::NULLS);
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::UNARY;
      pexpr->uexp = unary_pexpr;
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::IS_NULL, (yyvsp[-2].pexpr), pexpr);
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3685 "yacc_sql.cpp"
    break;

    case 144: /* cond_pexpr: pexpr IS NOT NULL_T  */
#line 1548 "yacc_sql.y"
    {
      PUnaryExpr *unary_pexpr = new PUnaryExpr;
      unary_pexpr->is_attr = false;
      unary_pexpr->value = Value(AttrType::NULLS);
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::UNARY;
      pexpr->uexp = unary_pexpr;
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::IS_NOT_NULL, (yyvsp[-3].pexpr), pexpr);
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3700 "yacc_sql.cpp"
    break;

    case 145: /* cond_pexpr: pexpr IN pexpr  */
#line 1558 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::IN, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3709 "yacc_sql.cpp"
    break;

    case 146: /* cond_pexpr: pexpr NOT IN pexpr  */
#line 1562 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::NOT_IN, (yyvsp[-3].pexpr), (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3718 "yacc_sql.cpp"
    break;

    case 147: /* cond_pexpr: EXISTS pexpr  */
#line 1566 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::EXISTS, nullptr, (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3727 "yacc_sql.cpp"
    break;

    case 148: /* cond_pexpr: NOT EXISTS pexpr  */
#line 1570 "yacc_sql.y"
    {
      PConditionExpr *condition_pexpr = new PConditionExpr(CompOp::NOT_EXISTS, nullptr, (yyvsp[0].pexpr));
      (yyval.cond_pexpr) = condition_pexpr;
    }
#line 3736 "yacc_sql.cpp"
    break;

    case 149: /* arith_pexpr: pexpr '+' pexpr  */
#line 1577 "yacc_sql.y"
    {
      PArithmeticExpr *arith_pexpr = new PArithmeticExpr(PArithmeticType::ADD, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.arith_pexpr) = arith_pexpr;
    }
#line 3745 "yacc_sql.cpp"
    break;

    case 150: /* arith_pexpr: pexpr '-' pexpr  */
#line 1581 "yacc_sql.y"
    {
      PArithmeticExpr *arith_pexpr = new PArithmeticExpr(PArithmeticType::SUB, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.arith_pexpr) = arith_pexpr;
    }
#line 3754 "yacc_sql.cpp"
    break;

    case 151: /* arith_pexpr: pexpr '*' pexpr  */
#line 1585 "yacc_sql.y"
    {
      PArithmeticExpr *arith_pexpr = new PArithmeticExpr(PArithmeticType::MUL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.arith_pexpr) = arith_pexpr;
    }
#line 3763 "yacc_sql.cpp"
    break;

    case 152: /* arith_pexpr: pexpr '/' pexpr  */
#line 1589 "yacc_sql.y"
    {
      PArithmeticExpr *arith_pexpr = new PArithmeticExpr(PArithmeticType::DIV, (yyvsp[-2].pexpr), (yyvsp[0].pexpr));
      (yyval.arith_pexpr) = arith_pexpr;
    }
#line 3772 "yacc_sql.cpp"
    break;

    case 153: /* arith_pexpr: '-' pexpr  */
#line 1593 "yacc_sql.y"
    {
      PArithmeticExpr *arith_pexpr = new PArithmeticExpr(PArithmeticType::NEGATIVE, (yyvsp[0].pexpr), nullptr);
      (yyval.arith_pexpr) = arith_pexpr;
    }
#line 3781 "yacc_sql.cpp"
    break;

    case 154: /* func_pexpr: LENGTH LBRACE pexpr RBRACE  */
#line 1599 "yacc_sql.y"
    {
      PFuncExpr *func_pexpr = new PFuncExpr;
      func_pexpr->type = PFuncType::LENGTH;
      func_pexpr->params.push_back((yyvsp[-1].pexpr));
      (yyval.func_pexpr) = func_pexpr;
    }
#line 3792 "yacc_sql.cpp"
    break;

    case 155: /* func_pexpr: ROUND LBRACE pexpr RBRACE  */
#line 1606 "yacc_sql.y"
    {
      PFuncExpr *func_pexpr = new PFuncExpr;
      func_pexpr->type = PFuncType::ROUND;
      func_pexpr->params.push_back((yyvsp[-1].pexpr));
      (yyval.func_pexpr) = func_pexpr;
    }
#line 3803 "yacc_sql.cpp"
    break;

    case 156: /* func_pexpr: ROUND LBRACE pexpr COMMA pexpr RBRACE  */
#line 1613 "yacc_sql.y"
    {
      PFuncExpr *func_pexpr = new PFuncExpr;
      func_pexpr->type = PFuncType::ROUND;
      func_pexpr->params.push_back((yyvsp[-3].pexpr));
      func_pexpr->params.push_back((yyvsp[-1].pexpr));
      (yyval.func_pexpr) = func_pexpr;
    }
#line 3815 "yacc_sql.cpp"
    break;

    case 157: /* func_pexpr: DATE_FORMAT LBRACE pexpr COMMA pexpr RBRACE  */
#line 1621 "yacc_sql.y"
    {
      PFuncExpr *func_pexpr = new PFuncExpr;
      func_pexpr->type = PFuncType::DATE_FORMAT;
      func_pexpr->params.push_back((yyvsp[-3].pexpr));
      func_pexpr->params.push_back((yyvsp[-1].pexpr));
      (yyval.func_pexpr) = func_pexpr;
    }
#line 3827 "yacc_sql.cpp"
    break;

    case 158: /* list_pexpr: LBRACE pexpr pexpr_list RBRACE  */
#line 1633 "yacc_sql.y"
    {
      PListExpr *list_pexpr = new PListExpr;
      if ((yyvsp[-1].pexpr_list) != nullptr) {
        list_pexpr->expr_list = *(yyvsp[-1].pexpr_list);
        delete (yyvsp[-1].pexpr_list);
      }
      list_pexpr->expr_list.push_back((yyvsp[-2].pexpr));
      std::reverse(list_pexpr->expr_list.begin(), list_pexpr->expr_list.end());
      (yyval.list_pexpr) = list_pexpr;
    }
#line 3842 "yacc_sql.cpp"
    break;

    case 159: /* aggr_func_type: AGGR_MAX  */
#line 1646 "yacc_sql.y"
    {
      (yyval.aggr_func_type) = AggrFuncType::MAX;
    }
#line 3848 "yacc_sql.cpp"
    break;

    case 160: /* aggr_func_type: AGGR_MIN  */
#line 1647 "yacc_sql.y"
    {
      (yyval.aggr_func_type) = AggrFuncType::MIN;
    }
#line 3854 "yacc_sql.cpp"
    break;

    case 161: /* aggr_func_type: AGGR_SUM  */
#line 1648 "yacc_sql.y"
    {
      (yyval.aggr_func_type) = AggrFuncType::SUM;
    }
#line 3860 "yacc_sql.cpp"
    break;

    case 162: /* aggr_func_type: AGGR_AVG  */
#line 1649 "yacc_sql.y"
    {
      (yyval.aggr_func_type) = AggrFuncType::AVG;
    }
#line 3866 "yacc_sql.cpp"
    break;

    case 163: /* aggr_func_type: AGGR_COUNT  */
#line 1650 "yacc_sql.y"
    {
      (yyval.aggr_func_type) = AggrFuncType::COUNT;
    }
#line 3872 "yacc_sql.cpp"
    break;

    case 164: /* aggr_pexpr: aggr_func_type LBRACE pexpr RBRACE  */
#line 1654 "yacc_sql.y"
    {
      // 注意pexpr当unary的时候可能是 *
      PAggrExpr *agexpr = new PAggrExpr;
      if ((yyvsp[-1].pexpr)->type == PExpType::UNARY) {
        if ((yyvsp[-1].pexpr)->uexp->is_attr) {
          if ((yyvsp[-1].pexpr)->uexp->attr.relation_name == "*") {
            yyerror(&(yyloc), sql_string, sql_result, scanner, "invalid aggr func", SCF_INVALID);
          } else if ((yyvsp[-1].pexpr)->uexp->attr.attribute_name == "*") {
            agexpr->is_star = true;
          } else {
            agexpr->is_star = false;
          }
        }
      } else {
        agexpr->is_star = false;
      }

      // 如果is_star为true, 必须是count, AggrFuncType 则为COUNT_STAR
      if (agexpr->is_star) {
        if ((yyvsp[-3].aggr_func_type) != AggrFuncType::COUNT) {
          yyerror(&(yyloc), sql_string, sql_result, scanner, "invalid aggr func", SCF_INVALID);
        } else {
          agexpr->type = AggrFuncType::COUNT_STAR;
        }
      } else {
        agexpr->type = (yyvsp[-3].aggr_func_type);
      }
      agexpr->expr = (yyvsp[-1].pexpr);
      (yyval.aggr_pexpr) = agexpr;
    }
#line 3908 "yacc_sql.cpp"
    break;

    case 165: /* aggr_pexpr: aggr_func_type LBRACE pexpr COMMA pexpr aggr_pexpr_list RBRACE  */
#line 1685 "yacc_sql.y"
    {
      yyerror(&(yyloc), sql_string, sql_result, scanner, "invalid aggr func", SCF_INVALID);
    }
#line 3916 "yacc_sql.cpp"
    break;

    case 166: /* aggr_pexpr: aggr_func_type LBRACE RBRACE  */
#line 1688 "yacc_sql.y"
    {
      yyerror(&(yyloc), sql_string, sql_result, scanner, "invalid aggr func", SCF_INVALID);
    }
#line 3924 "yacc_sql.cpp"
    break;

    case 167: /* aggr_pexpr_list: %empty  */
#line 1694 "yacc_sql.y"
    {
      // do_nothing;
    }
#line 3932 "yacc_sql.cpp"
    break;

    case 168: /* aggr_pexpr_list: COMMA pexpr aggr_pexpr_list  */
#line 1697 "yacc_sql.y"
    {
      // do_nothing;
    }
#line 3940 "yacc_sql.cpp"
    break;

    case 169: /* pexpr: cond_pexpr  */
#line 1702 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::COMPARISON;
      pexpr->cexp = (yyvsp[0].cond_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 3952 "yacc_sql.cpp"
    break;

    case 170: /* pexpr: arith_pexpr  */
#line 1709 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::ARITHMETIC;
      pexpr->aexp = (yyvsp[0].arith_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 3964 "yacc_sql.cpp"
    break;

    case 171: /* pexpr: unary_pexpr  */
#line 1716 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::UNARY;
      pexpr->uexp = (yyvsp[0].unary_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 3976 "yacc_sql.cpp"
    break;

    case 172: /* pexpr: func_pexpr  */
#line 1723 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::FUNC;
      pexpr->fexp = (yyvsp[0].func_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 3988 "yacc_sql.cpp"
    break;

    case 173: /* pexpr: subquery_pexpr  */
#line 1730 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::SUBQUERY;
      pexpr->sexp = (yyvsp[0].subquery_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 4000 "yacc_sql.cpp"
    break;

    case 174: /* pexpr: list_pexpr  */
#line 1737 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::LIST;
      pexpr->lexp = (yyvsp[0].list_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 4012 "yacc_sql.cpp"
    break;

    case 175: /* pexpr: aggr_pexpr  */
#line 1744 "yacc_sql.y"
    {
      PExpr *pexpr = new PExpr;
      pexpr->type = PExpType::AGGRFUNC;
      pexpr->agexp = (yyvsp[0].aggr_pexpr);
      pexpr->name = token_name(sql_string, &(yyloc));
      (yyval.pexpr) = pexpr;
    }
#line 4024 "yacc_sql.cpp"
    break;

    case 176: /* pexpr_list: %empty  */
#line 1755 "yacc_sql.y"
    {
      (yyval.pexpr_list) = nullptr;
    }
#line 4032 "yacc_sql.cpp"
    break;

    case 177: /* pexpr_list: COMMA pexpr pexpr_list  */
#line 1759 "yacc_sql.y"
    {
      if ((yyvsp[0].pexpr_list) != nullptr) {
        (yyval.pexpr_list) = (yyvsp[0].pexpr_list);
      } else {
        (yyval.pexpr_list) = new std::vector<PExpr *>;
      }
      (yyval.pexpr_list)->emplace_back((yyvsp[-1].pexpr));
    }
#line 4045 "yacc_sql.cpp"
    break;

#line 4049 "yacc_sql.cpp"

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
  YY_SYMBOL_PRINT("-> $$ =", YY_CAST(yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK(yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp ? yytable[yyi] : yydefgoto[yylhs]);
  }

  goto yynewstate;

/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE(yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus) {
    ++yynerrs;
    {
      yypcontext_t yyctx = {yyssp, yytoken, &yylloc};
      char const *yymsgp = YY_("syntax error");
      int yysyntax_error_status;
      yysyntax_error_status = yysyntax_error(&yymsg_alloc, &yymsg, &yyctx);
      if (yysyntax_error_status == 0)
        yymsgp = yymsg;
      else if (yysyntax_error_status == -1) {
        if (yymsg != yymsgbuf)
          YYSTACK_FREE(yymsg);
        yymsg = YY_CAST(char *, YYSTACK_ALLOC(YY_CAST(YYSIZE_T, yymsg_alloc)));
        if (yymsg) {
          yysyntax_error_status = yysyntax_error(&yymsg_alloc, &yymsg, &yyctx);
          yymsgp = yymsg;
        } else {
          yymsg = yymsgbuf;
          yymsg_alloc = sizeof yymsgbuf;
          yysyntax_error_status = YYENOMEM;
        }
      }
      yyerror(&yylloc, sql_string, sql_result, scanner, yymsgp);
      if (yysyntax_error_status == YYENOMEM)
        YYNOMEM;
    }
  }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3) {
    /* If just tried and failed to reuse lookahead token after an
       error, discard it.  */

    if (yychar <= YYEOF) {
      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        YYABORT;
    } else {
      yydestruct("Error: discarding", yytoken, &yylval, &yylloc, sql_string, sql_result, scanner);
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
  YYPOPSTACK(yylen);
  yylen = 0;
  YY_STACK_PRINT(yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;

/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3; /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;) {
    yyn = yypact[yystate];
    if (!yypact_value_is_default(yyn)) {
      yyn += YYSYMBOL_YYerror;
      if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror) {
        yyn = yytable[yyn];
        if (0 < yyn)
          break;
      }
    }

    /* Pop the current state because it cannot handle the error token.  */
    if (yyssp == yyss)
      YYABORT;

    yyerror_range[1] = *yylsp;
    yydestruct("Error: popping", YY_ACCESSING_SYMBOL(yystate), yyvsp, yylsp, sql_string, sql_result, scanner);
    YYPOPSTACK(1);
    yystate = *yyssp;
    YY_STACK_PRINT(yyss, yyssp);
  }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT(*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT("Shifting", YY_ACCESSING_SYMBOL(yyn), yyvsp, yylsp);

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
  yyerror(&yylloc, sql_string, sql_result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY) {
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = YYTRANSLATE(yychar);
    yydestruct("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc, sql_string, sql_result, scanner);
  }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK(yylen);
  YY_STACK_PRINT(yyss, yyssp);
  while (yyssp != yyss) {
    yydestruct("Cleanup: popping", YY_ACCESSING_SYMBOL(+*yyssp), yyvsp, yylsp, sql_string, sql_result, scanner);
    YYPOPSTACK(1);
  }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE(yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE(yymsg);
  return yyresult;
}

#line 1771 "yacc_sql.y"

//_____________________________________________________________________
extern void scan_string(const char *str, yyscan_t scanner);

int sql_parse(const char *s, ParsedSqlResult *sql_result)
{
  yyscan_t scanner;
  yylex_init(&scanner);
  scan_string(s, scanner);
  int result = yyparse(s, sql_result, scanner);
  yylex_destroy(scanner);
  return result;
}
