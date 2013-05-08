/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 25 "conf_parser.y"


#define YY_NO_UNPUT
#include <sys/types.h>
#include <string.h>

#include "config.h"
#include "stdinc.h"
#include "ircd.h"
#include "list.h"
#include "conf.h"
#include "conf_class.h"
#include "event.h"
#include "log.h"
#include "client.h"	/* for UMODE_ALL only */
#include "irc_string.h"
#include "memory.h"
#include "modules.h"
#include "s_serv.h"
#include "hostmask.h"
#include "send.h"
#include "listener.h"
#include "resv.h"
#include "numeric.h"
#include "s_user.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <openssl/dh.h>
#endif

#include "rsa.h"

int yylex(void);

static struct
{
  struct {
    dlink_list list;
  } mask,
    leaf,
    hub;

  struct {
    char buf[IRCD_BUFSIZE];
  } name,
    user,
    host,
    addr,
    bind,
    file,
    ciph,
    rpass,
    spass,
    class;

  struct {
    unsigned int value;
  } flags,
    modes,
    size,
    type,
    port,
    aftype,
    ping_freq,
    max_perip,
    con_freq,
    min_idle,
    max_idle,
    max_total,
    max_global,
    max_local,
    max_ident,
    max_sendq,
    max_recvq,
    cidr_bitlen_ipv4,
    cidr_bitlen_ipv6,
    number_per_cidr;
} block_state;

static void
reset_block_state(void)
{
  dlink_node *ptr = NULL, *ptr_next = NULL;

  DLINK_FOREACH_SAFE(ptr, ptr_next, block_state.mask.list.head)
  {
    MyFree(ptr->data);
    dlinkDelete(ptr, &block_state.mask.list);
    free_dlink_node(ptr);
  }

  DLINK_FOREACH_SAFE(ptr, ptr_next, block_state.leaf.list.head)
  {
    MyFree(ptr->data);
    dlinkDelete(ptr, &block_state.leaf.list);
    free_dlink_node(ptr);
  }

  DLINK_FOREACH_SAFE(ptr, ptr_next, block_state.hub.list.head)
  {
    MyFree(ptr->data);
    dlinkDelete(ptr, &block_state.hub.list);
    free_dlink_node(ptr);
  }

  memset(&block_state, 0, sizeof(block_state));
}


/* Line 371 of yacc.c  */
#line 181 "conf_parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
#ifndef YY_YY_CONF_PARSER_H_INCLUDED
# define YY_YY_CONF_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ACCEPT_PASSWORD = 258,
     ADMIN = 259,
     AFTYPE = 260,
     ANTI_NICK_FLOOD = 261,
     ANTI_SPAM_EXIT_MESSAGE_TIME = 262,
     AUTOCONN = 263,
     BYTES = 264,
     KBYTES = 265,
     MBYTES = 266,
     CALLER_ID_WAIT = 267,
     CAN_FLOOD = 268,
     CHANNEL = 269,
     CIDR_BITLEN_IPV4 = 270,
     CIDR_BITLEN_IPV6 = 271,
     CLASS = 272,
     CONNECT = 273,
     CONNECTFREQ = 274,
     DEFAULT_FLOODCOUNT = 275,
     DEFAULT_SPLIT_SERVER_COUNT = 276,
     DEFAULT_SPLIT_USER_COUNT = 277,
     DENY = 278,
     DESCRIPTION = 279,
     DIE = 280,
     DISABLE_AUTH = 281,
     DISABLE_FAKE_CHANNELS = 282,
     DISABLE_REMOTE_COMMANDS = 283,
     DOTS_IN_IDENT = 284,
     EGDPOOL_PATH = 285,
     EMAIL = 286,
     ENCRYPTED = 287,
     EXCEED_LIMIT = 288,
     EXEMPT = 289,
     FAILED_OPER_NOTICE = 290,
     IRCD_FLAGS = 291,
     FLATTEN_LINKS = 292,
     GECOS = 293,
     GENERAL = 294,
     GLINE = 295,
     GLINE_DURATION = 296,
     GLINE_ENABLE = 297,
     GLINE_EXEMPT = 298,
     GLINE_REQUEST_DURATION = 299,
     GLINE_MIN_CIDR = 300,
     GLINE_MIN_CIDR6 = 301,
     GLOBAL_KILL = 302,
     IRCD_AUTH = 303,
     NEED_IDENT = 304,
     HAVENT_READ_CONF = 305,
     HIDDEN = 306,
     HIDDEN_NAME = 307,
     HIDE_SERVER_IPS = 308,
     HIDE_SERVERS = 309,
     HIDE_SERVICES = 310,
     HIDE_SPOOF_IPS = 311,
     HOST = 312,
     HUB = 313,
     HUB_MASK = 314,
     IGNORE_BOGUS_TS = 315,
     INVISIBLE_ON_CONNECT = 316,
     IP = 317,
     KILL = 318,
     KILL_CHASE_TIME_LIMIT = 319,
     KLINE = 320,
     KLINE_EXEMPT = 321,
     KNOCK_DELAY = 322,
     KNOCK_DELAY_CHANNEL = 323,
     LEAF_MASK = 324,
     LINKS_DELAY = 325,
     LISTEN = 326,
     T_LOG = 327,
     MASK = 328,
     MAX_ACCEPT = 329,
     MAX_BANS = 330,
     MAX_CHANS_PER_OPER = 331,
     MAX_CHANS_PER_USER = 332,
     MAX_GLOBAL = 333,
     MAX_IDENT = 334,
     MAX_LOCAL = 335,
     MAX_NICK_CHANGES = 336,
     MAX_NICK_LENGTH = 337,
     MAX_NICK_TIME = 338,
     MAX_NUMBER = 339,
     MAX_TARGETS = 340,
     MAX_TOPIC_LENGTH = 341,
     MAX_WATCH = 342,
     MIN_NONWILDCARD = 343,
     MIN_NONWILDCARD_SIMPLE = 344,
     MIN_IDLE = 345,
     MAX_IDLE = 346,
     RANDOM_IDLE = 347,
     HIDE_IDLE_FROM_OPERS = 348,
     MODULE = 349,
     MODULES = 350,
     NAME = 351,
     NEED_PASSWORD = 352,
     NETWORK_DESC = 353,
     NETWORK_NAME = 354,
     NICK = 355,
     NO_CREATE_ON_SPLIT = 356,
     NO_JOIN_ON_SPLIT = 357,
     NO_OPER_FLOOD = 358,
     NO_TILDE = 359,
     NUMBER = 360,
     NUMBER_PER_CIDR = 361,
     NUMBER_PER_IP = 362,
     OPERATOR = 363,
     OPERS_BYPASS_CALLERID = 364,
     OPER_ONLY_UMODES = 365,
     OPER_PASS_RESV = 366,
     OPER_SPY_T = 367,
     OPER_UMODES = 368,
     JOIN_FLOOD_COUNT = 369,
     JOIN_FLOOD_TIME = 370,
     PACE_WAIT = 371,
     PACE_WAIT_SIMPLE = 372,
     PASSWORD = 373,
     PATH = 374,
     PING_COOKIE = 375,
     PING_TIME = 376,
     PORT = 377,
     QSTRING = 378,
     REASON = 379,
     REDIRPORT = 380,
     REDIRSERV = 381,
     REHASH = 382,
     REMOTE = 383,
     REMOTEBAN = 384,
     RSA_PRIVATE_KEY_FILE = 385,
     RSA_PUBLIC_KEY_FILE = 386,
     SSL_CERTIFICATE_FILE = 387,
     SSL_DH_PARAM_FILE = 388,
     T_SSL_CLIENT_METHOD = 389,
     T_SSL_SERVER_METHOD = 390,
     T_SSLV3 = 391,
     T_TLSV1 = 392,
     RESV = 393,
     RESV_EXEMPT = 394,
     SECONDS = 395,
     MINUTES = 396,
     HOURS = 397,
     DAYS = 398,
     WEEKS = 399,
     MONTHS = 400,
     YEARS = 401,
     SENDQ = 402,
     SEND_PASSWORD = 403,
     SERVERHIDE = 404,
     SERVERINFO = 405,
     IRCD_SID = 406,
     TKLINE_EXPIRE_NOTICES = 407,
     T_SHARED = 408,
     T_CLUSTER = 409,
     TYPE = 410,
     SHORT_MOTD = 411,
     SPOOF = 412,
     SPOOF_NOTICE = 413,
     STATS_E_DISABLED = 414,
     STATS_I_OPER_ONLY = 415,
     STATS_K_OPER_ONLY = 416,
     STATS_O_OPER_ONLY = 417,
     STATS_P_OPER_ONLY = 418,
     TBOOL = 419,
     TMASKED = 420,
     TS_MAX_DELTA = 421,
     TS_WARN_DELTA = 422,
     TWODOTS = 423,
     T_ALL = 424,
     T_BOTS = 425,
     T_SOFTCALLERID = 426,
     T_CALLERID = 427,
     T_CCONN = 428,
     T_CCONN_FULL = 429,
     T_SSL_CIPHER_LIST = 430,
     T_DEAF = 431,
     T_DEBUG = 432,
     T_DLINE = 433,
     T_EXTERNAL = 434,
     T_FARCONNECT = 435,
     T_FULL = 436,
     T_INVISIBLE = 437,
     T_IPV4 = 438,
     T_IPV6 = 439,
     T_LOCOPS = 440,
     T_MAX_CLIENTS = 441,
     T_NCHANGE = 442,
     T_NONONREG = 443,
     T_OPERWALL = 444,
     T_RECVQ = 445,
     T_REJ = 446,
     T_SERVER = 447,
     T_SERVNOTICE = 448,
     T_SET = 449,
     T_SKILL = 450,
     T_SPY = 451,
     T_SSL = 452,
     T_UMODES = 453,
     T_UNAUTH = 454,
     T_UNDLINE = 455,
     T_UNLIMITED = 456,
     T_UNRESV = 457,
     T_UNXLINE = 458,
     T_GLOBOPS = 459,
     T_WALLOP = 460,
     T_WEBIRC = 461,
     T_RESTART = 462,
     T_SERVICE = 463,
     T_SERVICES_NAME = 464,
     THROTTLE_TIME = 465,
     TRUE_NO_OPER_FLOOD = 466,
     UNKLINE = 467,
     USER = 468,
     USE_EGD = 469,
     USE_LOGGING = 470,
     VHOST = 471,
     VHOST6 = 472,
     XLINE = 473,
     WARN_NO_NLINE = 474,
     T_SIZE = 475,
     T_FILE = 476
   };
#endif
/* Tokens.  */
#define ACCEPT_PASSWORD 258
#define ADMIN 259
#define AFTYPE 260
#define ANTI_NICK_FLOOD 261
#define ANTI_SPAM_EXIT_MESSAGE_TIME 262
#define AUTOCONN 263
#define BYTES 264
#define KBYTES 265
#define MBYTES 266
#define CALLER_ID_WAIT 267
#define CAN_FLOOD 268
#define CHANNEL 269
#define CIDR_BITLEN_IPV4 270
#define CIDR_BITLEN_IPV6 271
#define CLASS 272
#define CONNECT 273
#define CONNECTFREQ 274
#define DEFAULT_FLOODCOUNT 275
#define DEFAULT_SPLIT_SERVER_COUNT 276
#define DEFAULT_SPLIT_USER_COUNT 277
#define DENY 278
#define DESCRIPTION 279
#define DIE 280
#define DISABLE_AUTH 281
#define DISABLE_FAKE_CHANNELS 282
#define DISABLE_REMOTE_COMMANDS 283
#define DOTS_IN_IDENT 284
#define EGDPOOL_PATH 285
#define EMAIL 286
#define ENCRYPTED 287
#define EXCEED_LIMIT 288
#define EXEMPT 289
#define FAILED_OPER_NOTICE 290
#define IRCD_FLAGS 291
#define FLATTEN_LINKS 292
#define GECOS 293
#define GENERAL 294
#define GLINE 295
#define GLINE_DURATION 296
#define GLINE_ENABLE 297
#define GLINE_EXEMPT 298
#define GLINE_REQUEST_DURATION 299
#define GLINE_MIN_CIDR 300
#define GLINE_MIN_CIDR6 301
#define GLOBAL_KILL 302
#define IRCD_AUTH 303
#define NEED_IDENT 304
#define HAVENT_READ_CONF 305
#define HIDDEN 306
#define HIDDEN_NAME 307
#define HIDE_SERVER_IPS 308
#define HIDE_SERVERS 309
#define HIDE_SERVICES 310
#define HIDE_SPOOF_IPS 311
#define HOST 312
#define HUB 313
#define HUB_MASK 314
#define IGNORE_BOGUS_TS 315
#define INVISIBLE_ON_CONNECT 316
#define IP 317
#define KILL 318
#define KILL_CHASE_TIME_LIMIT 319
#define KLINE 320
#define KLINE_EXEMPT 321
#define KNOCK_DELAY 322
#define KNOCK_DELAY_CHANNEL 323
#define LEAF_MASK 324
#define LINKS_DELAY 325
#define LISTEN 326
#define T_LOG 327
#define MASK 328
#define MAX_ACCEPT 329
#define MAX_BANS 330
#define MAX_CHANS_PER_OPER 331
#define MAX_CHANS_PER_USER 332
#define MAX_GLOBAL 333
#define MAX_IDENT 334
#define MAX_LOCAL 335
#define MAX_NICK_CHANGES 336
#define MAX_NICK_LENGTH 337
#define MAX_NICK_TIME 338
#define MAX_NUMBER 339
#define MAX_TARGETS 340
#define MAX_TOPIC_LENGTH 341
#define MAX_WATCH 342
#define MIN_NONWILDCARD 343
#define MIN_NONWILDCARD_SIMPLE 344
#define MIN_IDLE 345
#define MAX_IDLE 346
#define RANDOM_IDLE 347
#define HIDE_IDLE_FROM_OPERS 348
#define MODULE 349
#define MODULES 350
#define NAME 351
#define NEED_PASSWORD 352
#define NETWORK_DESC 353
#define NETWORK_NAME 354
#define NICK 355
#define NO_CREATE_ON_SPLIT 356
#define NO_JOIN_ON_SPLIT 357
#define NO_OPER_FLOOD 358
#define NO_TILDE 359
#define NUMBER 360
#define NUMBER_PER_CIDR 361
#define NUMBER_PER_IP 362
#define OPERATOR 363
#define OPERS_BYPASS_CALLERID 364
#define OPER_ONLY_UMODES 365
#define OPER_PASS_RESV 366
#define OPER_SPY_T 367
#define OPER_UMODES 368
#define JOIN_FLOOD_COUNT 369
#define JOIN_FLOOD_TIME 370
#define PACE_WAIT 371
#define PACE_WAIT_SIMPLE 372
#define PASSWORD 373
#define PATH 374
#define PING_COOKIE 375
#define PING_TIME 376
#define PORT 377
#define QSTRING 378
#define REASON 379
#define REDIRPORT 380
#define REDIRSERV 381
#define REHASH 382
#define REMOTE 383
#define REMOTEBAN 384
#define RSA_PRIVATE_KEY_FILE 385
#define RSA_PUBLIC_KEY_FILE 386
#define SSL_CERTIFICATE_FILE 387
#define SSL_DH_PARAM_FILE 388
#define T_SSL_CLIENT_METHOD 389
#define T_SSL_SERVER_METHOD 390
#define T_SSLV3 391
#define T_TLSV1 392
#define RESV 393
#define RESV_EXEMPT 394
#define SECONDS 395
#define MINUTES 396
#define HOURS 397
#define DAYS 398
#define WEEKS 399
#define MONTHS 400
#define YEARS 401
#define SENDQ 402
#define SEND_PASSWORD 403
#define SERVERHIDE 404
#define SERVERINFO 405
#define IRCD_SID 406
#define TKLINE_EXPIRE_NOTICES 407
#define T_SHARED 408
#define T_CLUSTER 409
#define TYPE 410
#define SHORT_MOTD 411
#define SPOOF 412
#define SPOOF_NOTICE 413
#define STATS_E_DISABLED 414
#define STATS_I_OPER_ONLY 415
#define STATS_K_OPER_ONLY 416
#define STATS_O_OPER_ONLY 417
#define STATS_P_OPER_ONLY 418
#define TBOOL 419
#define TMASKED 420
#define TS_MAX_DELTA 421
#define TS_WARN_DELTA 422
#define TWODOTS 423
#define T_ALL 424
#define T_BOTS 425
#define T_SOFTCALLERID 426
#define T_CALLERID 427
#define T_CCONN 428
#define T_CCONN_FULL 429
#define T_SSL_CIPHER_LIST 430
#define T_DEAF 431
#define T_DEBUG 432
#define T_DLINE 433
#define T_EXTERNAL 434
#define T_FARCONNECT 435
#define T_FULL 436
#define T_INVISIBLE 437
#define T_IPV4 438
#define T_IPV6 439
#define T_LOCOPS 440
#define T_MAX_CLIENTS 441
#define T_NCHANGE 442
#define T_NONONREG 443
#define T_OPERWALL 444
#define T_RECVQ 445
#define T_REJ 446
#define T_SERVER 447
#define T_SERVNOTICE 448
#define T_SET 449
#define T_SKILL 450
#define T_SPY 451
#define T_SSL 452
#define T_UMODES 453
#define T_UNAUTH 454
#define T_UNDLINE 455
#define T_UNLIMITED 456
#define T_UNRESV 457
#define T_UNXLINE 458
#define T_GLOBOPS 459
#define T_WALLOP 460
#define T_WEBIRC 461
#define T_RESTART 462
#define T_SERVICE 463
#define T_SERVICES_NAME 464
#define THROTTLE_TIME 465
#define TRUE_NO_OPER_FLOOD 466
#define UNKLINE 467
#define USER 468
#define USE_EGD 469
#define USE_LOGGING 470
#define VHOST 471
#define VHOST6 472
#define XLINE 473
#define WARN_NO_NLINE 474
#define T_SIZE 475
#define T_FILE 476



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 138 "conf_parser.y"

  int number;
  char *string;


/* Line 387 of yacc.c  */
#line 672 "conf_parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 700 "conf_parser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  227
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  280
/* YYNRULES -- Number of rules.  */
#define YYNRULES  632
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1234

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   476

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   226,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   222,
       2,   225,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   224,     2,   223,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    50,    53,    54,    56,    59,
      63,    67,    71,    75,    79,    83,    87,    88,    90,    93,
      97,   101,   105,   111,   114,   116,   118,   120,   123,   128,
     133,   139,   142,   144,   146,   148,   150,   152,   154,   156,
     158,   160,   162,   164,   166,   168,   170,   172,   174,   176,
     178,   181,   186,   191,   195,   197,   199,   201,   205,   207,
     209,   211,   216,   221,   226,   231,   236,   241,   246,   251,
     256,   261,   266,   271,   276,   281,   286,   292,   295,   297,
     299,   301,   303,   306,   311,   316,   321,   327,   330,   332,
     334,   336,   339,   344,   345,   352,   355,   357,   359,   361,
     363,   366,   371,   376,   381,   382,   388,   392,   394,   396,
     398,   400,   402,   404,   406,   408,   409,   416,   419,   421,
     423,   425,   427,   429,   431,   433,   435,   437,   440,   445,
     450,   455,   460,   465,   470,   471,   477,   481,   483,   485,
     487,   489,   491,   493,   495,   497,   499,   501,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   523,   525,
     527,   528,   534,   538,   540,   542,   544,   546,   548,   550,
     552,   554,   556,   558,   560,   562,   564,   566,   568,   570,
     572,   574,   576,   577,   584,   587,   589,   591,   593,   595,
     597,   599,   601,   603,   605,   607,   609,   611,   613,   615,
     617,   619,   621,   624,   629,   634,   639,   644,   649,   654,
     659,   664,   669,   674,   679,   684,   689,   694,   699,   700,
     706,   710,   712,   714,   716,   717,   724,   725,   731,   735,
     737,   739,   741,   743,   746,   748,   750,   752,   754,   756,
     759,   760,   766,   770,   772,   774,   778,   783,   788,   789,
     796,   799,   801,   803,   805,   807,   809,   811,   813,   815,
     817,   820,   825,   830,   835,   840,   841,   847,   851,   853,
     855,   857,   859,   861,   863,   865,   867,   869,   871,   873,
     878,   883,   888,   889,   896,   899,   901,   903,   905,   907,
     910,   915,   920,   925,   931,   934,   936,   938,   940,   945,
     946,   953,   956,   958,   960,   962,   964,   967,   972,   977,
     978,   984,   988,   990,   992,   994,   996,   998,  1000,  1002,
    1004,  1006,  1008,  1010,  1011,  1018,  1021,  1023,  1025,  1027,
    1030,  1035,  1036,  1042,  1046,  1048,  1050,  1052,  1054,  1056,
    1058,  1060,  1062,  1064,  1066,  1068,  1069,  1076,  1079,  1081,
    1083,  1085,  1087,  1089,  1091,  1093,  1095,  1097,  1099,  1101,
    1103,  1105,  1107,  1110,  1115,  1120,  1125,  1130,  1135,  1140,
    1145,  1150,  1151,  1157,  1161,  1163,  1165,  1167,  1172,  1177,
    1182,  1187,  1192,  1193,  1200,  1203,  1205,  1207,  1209,  1211,
    1216,  1221,  1222,  1229,  1232,  1234,  1236,  1238,  1240,  1245,
    1250,  1256,  1259,  1261,  1263,  1265,  1270,  1271,  1278,  1281,
    1283,  1285,  1287,  1289,  1294,  1299,  1305,  1308,  1310,  1312,
    1314,  1316,  1318,  1320,  1322,  1324,  1326,  1328,  1330,  1332,
    1334,  1336,  1338,  1340,  1342,  1344,  1346,  1348,  1350,  1352,
    1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,  1372,
    1374,  1376,  1378,  1380,  1382,  1384,  1386,  1388,  1390,  1392,
    1394,  1396,  1398,  1400,  1402,  1404,  1406,  1408,  1413,  1418,
    1423,  1428,  1433,  1438,  1443,  1448,  1453,  1458,  1463,  1468,
    1473,  1478,  1483,  1488,  1493,  1498,  1503,  1508,  1513,  1518,
    1523,  1528,  1533,  1538,  1543,  1548,  1553,  1558,  1563,  1568,
    1573,  1578,  1583,  1588,  1593,  1598,  1603,  1608,  1613,  1618,
    1623,  1628,  1633,  1634,  1640,  1644,  1646,  1648,  1650,  1652,
    1654,  1656,  1658,  1660,  1662,  1664,  1666,  1668,  1670,  1672,
    1674,  1676,  1678,  1680,  1682,  1684,  1686,  1688,  1690,  1691,
    1697,  1701,  1703,  1705,  1707,  1709,  1711,  1713,  1715,  1717,
    1719,  1721,  1723,  1725,  1727,  1729,  1731,  1733,  1735,  1737,
    1739,  1741,  1743,  1745,  1747,  1752,  1757,  1762,  1768,  1771,
    1773,  1775,  1777,  1779,  1781,  1783,  1785,  1787,  1789,  1791,
    1793,  1795,  1797,  1799,  1804,  1809,  1814,  1819,  1824,  1829,
    1834,  1839,  1844,  1849,  1854,  1859,  1865,  1868,  1870,  1872,
    1874,  1876,  1878,  1880,  1882,  1884,  1886,  1891,  1896,  1901,
    1906,  1911,  1916
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     228,     0,    -1,    -1,   228,   229,    -1,   263,    -1,   269,
      -1,   283,    -1,   482,    -1,   301,    -1,   324,    -1,   338,
      -1,   239,    -1,   497,    -1,   353,    -1,   360,    -1,   364,
      -1,   374,    -1,   383,    -1,   403,    -1,   409,    -1,   415,
      -1,   425,    -1,   419,    -1,   234,    -1,     1,   222,    -1,
       1,   223,    -1,    -1,   231,    -1,   105,   230,    -1,   105,
     140,   230,    -1,   105,   141,   230,    -1,   105,   142,   230,
      -1,   105,   143,   230,    -1,   105,   144,   230,    -1,   105,
     145,   230,    -1,   105,   146,   230,    -1,    -1,   233,    -1,
     105,   232,    -1,   105,     9,   232,    -1,   105,    10,   232,
      -1,   105,    11,   232,    -1,    95,   224,   235,   223,   222,
      -1,   235,   236,    -1,   236,    -1,   237,    -1,   238,    -1,
       1,   222,    -1,    94,   225,   123,   222,    -1,   119,   225,
     123,   222,    -1,   150,   224,   240,   223,   222,    -1,   240,
     241,    -1,   241,    -1,   252,    -1,   257,    -1,   262,    -1,
     254,    -1,   255,    -1,   256,    -1,   259,    -1,   260,    -1,
     261,    -1,   250,    -1,   249,    -1,   258,    -1,   253,    -1,
     248,    -1,   242,    -1,   243,    -1,   251,    -1,     1,   222,
      -1,   134,   225,   244,   222,    -1,   135,   225,   246,   222,
      -1,   244,   226,   245,    -1,   245,    -1,   136,    -1,   137,
      -1,   246,   226,   247,    -1,   247,    -1,   136,    -1,   137,
      -1,   132,   225,   123,   222,    -1,   130,   225,   123,   222,
      -1,   133,   225,   123,   222,    -1,   175,   225,   123,   222,
      -1,    96,   225,   123,   222,    -1,   151,   225,   123,   222,
      -1,    24,   225,   123,   222,    -1,    99,   225,   123,   222,
      -1,    98,   225,   123,   222,    -1,   216,   225,   123,   222,
      -1,   217,   225,   123,   222,    -1,   186,   225,   105,   222,
      -1,    82,   225,   105,   222,    -1,    86,   225,   105,   222,
      -1,    58,   225,   164,   222,    -1,     4,   224,   264,   223,
     222,    -1,   264,   265,    -1,   265,    -1,   266,    -1,   268,
      -1,   267,    -1,     1,   222,    -1,    96,   225,   123,   222,
      -1,    31,   225,   123,   222,    -1,    24,   225,   123,   222,
      -1,    72,   224,   270,   223,   222,    -1,   270,   271,    -1,
     271,    -1,   272,    -1,   273,    -1,     1,   222,    -1,   215,
     225,   164,   222,    -1,    -1,   274,   221,   224,   275,   223,
     222,    -1,   275,   276,    -1,   276,    -1,   277,    -1,   279,
      -1,   278,    -1,     1,   222,    -1,    96,   225,   123,   222,
      -1,   220,   225,   233,   222,    -1,   220,   225,   201,   222,
      -1,    -1,   155,   280,   225,   281,   222,    -1,   281,   226,
     282,    -1,   282,    -1,   213,    -1,   108,    -1,    40,    -1,
     178,    -1,    65,    -1,    63,    -1,   177,    -1,    -1,   108,
     284,   224,   285,   223,   222,    -1,   285,   286,    -1,   286,
      -1,   287,    -1,   288,    -1,   289,    -1,   293,    -1,   292,
      -1,   290,    -1,   291,    -1,   297,    -1,     1,   222,    -1,
      96,   225,   123,   222,    -1,   213,   225,   123,   222,    -1,
     118,   225,   123,   222,    -1,    32,   225,   164,   222,    -1,
     131,   225,   123,   222,    -1,    17,   225,   123,   222,    -1,
      -1,   198,   294,   225,   295,   222,    -1,   295,   226,   296,
      -1,   296,    -1,   170,    -1,   173,    -1,   174,    -1,   176,
      -1,   177,    -1,   181,    -1,    51,    -1,   195,    -1,   187,
      -1,   191,    -1,   199,    -1,   196,    -1,   179,    -1,   189,
      -1,   193,    -1,   182,    -1,   205,    -1,   171,    -1,   172,
      -1,   185,    -1,   188,    -1,   180,    -1,    -1,    36,   298,
     225,   299,   222,    -1,   299,   226,   300,    -1,   300,    -1,
      47,    -1,   128,    -1,    65,    -1,   212,    -1,   178,    -1,
     200,    -1,   218,    -1,    40,    -1,    25,    -1,   207,    -1,
     127,    -1,     4,    -1,   189,    -1,   204,    -1,   112,    -1,
     129,    -1,   194,    -1,    94,    -1,    -1,    17,   302,   224,
     303,   223,   222,    -1,   303,   304,    -1,   304,    -1,   305,
      -1,   315,    -1,   316,    -1,   306,    -1,   317,    -1,   307,
      -1,   308,    -1,   309,    -1,   310,    -1,   311,    -1,   312,
      -1,   313,    -1,   314,    -1,   318,    -1,   319,    -1,   320,
      -1,     1,   222,    -1,    96,   225,   123,   222,    -1,   121,
     225,   231,   222,    -1,   107,   225,   105,   222,    -1,    19,
     225,   231,   222,    -1,    84,   225,   105,   222,    -1,    78,
     225,   105,   222,    -1,    80,   225,   105,   222,    -1,    79,
     225,   105,   222,    -1,   147,   225,   233,   222,    -1,   190,
     225,   233,   222,    -1,    15,   225,   105,   222,    -1,    16,
     225,   105,   222,    -1,   106,   225,   105,   222,    -1,    90,
     225,   231,   222,    -1,    91,   225,   231,   222,    -1,    -1,
      36,   321,   225,   322,   222,    -1,   322,   226,   323,    -1,
     323,    -1,    92,    -1,    93,    -1,    -1,    71,   325,   224,
     330,   223,   222,    -1,    -1,    36,   327,   225,   328,   222,
      -1,   328,   226,   329,    -1,   329,    -1,   197,    -1,    51,
      -1,   192,    -1,   330,   331,    -1,   331,    -1,   332,    -1,
     326,    -1,   336,    -1,   337,    -1,     1,   222,    -1,    -1,
     122,   225,   334,   333,   222,    -1,   334,   226,   335,    -1,
     335,    -1,   105,    -1,   105,   168,   105,    -1,    62,   225,
     123,   222,    -1,    57,   225,   123,   222,    -1,    -1,    48,
     339,   224,   340,   223,   222,    -1,   340,   341,    -1,   341,
      -1,   342,    -1,   343,    -1,   344,    -1,   346,    -1,   350,
      -1,   351,    -1,   352,    -1,   345,    -1,     1,   222,    -1,
     213,   225,   123,   222,    -1,   118,   225,   123,   222,    -1,
      17,   225,   123,   222,    -1,    32,   225,   164,   222,    -1,
      -1,    36,   347,   225,   348,   222,    -1,   348,   226,   349,
      -1,   349,    -1,   158,    -1,    33,    -1,    66,    -1,    49,
      -1,    13,    -1,   104,    -1,    43,    -1,   139,    -1,   206,
      -1,    97,    -1,   157,   225,   123,   222,    -1,   126,   225,
     123,   222,    -1,   125,   225,   105,   222,    -1,    -1,   138,
     354,   224,   355,   223,   222,    -1,   355,   356,    -1,   356,
      -1,   357,    -1,   358,    -1,   359,    -1,     1,   222,    -1,
      73,   225,   123,   222,    -1,   124,   225,   123,   222,    -1,
      34,   225,   123,   222,    -1,   208,   224,   361,   223,   222,
      -1,   361,   362,    -1,   362,    -1,   363,    -1,     1,    -1,
      96,   225,   123,   222,    -1,    -1,   153,   365,   224,   366,
     223,   222,    -1,   366,   367,    -1,   367,    -1,   368,    -1,
     369,    -1,   370,    -1,     1,   222,    -1,    96,   225,   123,
     222,    -1,   213,   225,   123,   222,    -1,    -1,   155,   371,
     225,   372,   222,    -1,   372,   226,   373,    -1,   373,    -1,
      65,    -1,   212,    -1,   178,    -1,   200,    -1,   218,    -1,
     203,    -1,   138,    -1,   202,    -1,   185,    -1,   169,    -1,
      -1,   154,   375,   224,   376,   223,   222,    -1,   376,   377,
      -1,   377,    -1,   378,    -1,   379,    -1,     1,   222,    -1,
      96,   225,   123,   222,    -1,    -1,   155,   380,   225,   381,
     222,    -1,   381,   226,   382,    -1,   382,    -1,    65,    -1,
     212,    -1,   178,    -1,   200,    -1,   218,    -1,   203,    -1,
     138,    -1,   202,    -1,   185,    -1,   169,    -1,    -1,    18,
     384,   224,   385,   223,   222,    -1,   385,   386,    -1,   386,
      -1,   387,    -1,   388,    -1,   389,    -1,   390,    -1,   391,
      -1,   393,    -1,   392,    -1,   402,    -1,   394,    -1,   399,
      -1,   400,    -1,   401,    -1,   398,    -1,     1,   222,    -1,
      96,   225,   123,   222,    -1,    57,   225,   123,   222,    -1,
     216,   225,   123,   222,    -1,   148,   225,   123,   222,    -1,
       3,   225,   123,   222,    -1,   122,   225,   105,   222,    -1,
       5,   225,   183,   222,    -1,     5,   225,   184,   222,    -1,
      -1,    36,   395,   225,   396,   222,    -1,   396,   226,   397,
      -1,   397,    -1,     8,    -1,   197,    -1,    32,   225,   164,
     222,    -1,    59,   225,   123,   222,    -1,    69,   225,   123,
     222,    -1,    17,   225,   123,   222,    -1,   175,   225,   123,
     222,    -1,    -1,    63,   404,   224,   405,   223,   222,    -1,
     405,   406,    -1,   406,    -1,   407,    -1,   408,    -1,     1,
      -1,   213,   225,   123,   222,    -1,   124,   225,   123,   222,
      -1,    -1,    23,   410,   224,   411,   223,   222,    -1,   411,
     412,    -1,   412,    -1,   413,    -1,   414,    -1,     1,    -1,
      62,   225,   123,   222,    -1,   124,   225,   123,   222,    -1,
      34,   224,   416,   223,   222,    -1,   416,   417,    -1,   417,
      -1,   418,    -1,     1,    -1,    62,   225,   123,   222,    -1,
      -1,    38,   420,   224,   421,   223,   222,    -1,   421,   422,
      -1,   422,    -1,   423,    -1,   424,    -1,     1,    -1,    96,
     225,   123,   222,    -1,   124,   225,   123,   222,    -1,    39,
     224,   426,   223,   222,    -1,   426,   427,    -1,   427,    -1,
     436,    -1,   437,    -1,   439,    -1,   440,    -1,   441,    -1,
     442,    -1,   443,    -1,   444,    -1,   445,    -1,   446,    -1,
     435,    -1,   448,    -1,   449,    -1,   463,    -1,   451,    -1,
     453,    -1,   455,    -1,   454,    -1,   458,    -1,   452,    -1,
     459,    -1,   460,    -1,   461,    -1,   462,    -1,   475,    -1,
     464,    -1,   465,    -1,   466,    -1,   471,    -1,   456,    -1,
     457,    -1,   481,    -1,   479,    -1,   480,    -1,   438,    -1,
     470,    -1,   447,    -1,   468,    -1,   469,    -1,   434,    -1,
     429,    -1,   430,    -1,   431,    -1,   432,    -1,   433,    -1,
     450,    -1,   428,    -1,   467,    -1,     1,    -1,    87,   225,
     105,   222,    -1,    42,   225,   164,   222,    -1,    41,   225,
     231,   222,    -1,    44,   225,   231,   222,    -1,    45,   225,
     105,   222,    -1,    46,   225,   105,   222,    -1,   152,   225,
     164,   222,    -1,    64,   225,   231,   222,    -1,    56,   225,
     164,   222,    -1,    60,   225,   164,   222,    -1,    28,   225,
     164,   222,    -1,    35,   225,   164,   222,    -1,     6,   225,
     164,   222,    -1,    83,   225,   231,   222,    -1,    81,   225,
     105,   222,    -1,    74,   225,   105,   222,    -1,     7,   225,
     231,   222,    -1,   167,   225,   231,   222,    -1,   166,   225,
     231,   222,    -1,    50,   225,   105,   222,    -1,    61,   225,
     164,   222,    -1,   219,   225,   164,   222,    -1,   159,   225,
     164,   222,    -1,   162,   225,   164,   222,    -1,   163,   225,
     164,   222,    -1,   161,   225,   164,   222,    -1,   161,   225,
     165,   222,    -1,   160,   225,   164,   222,    -1,   160,   225,
     165,   222,    -1,   116,   225,   231,   222,    -1,    12,   225,
     231,   222,    -1,   109,   225,   164,   222,    -1,   117,   225,
     231,   222,    -1,   156,   225,   164,   222,    -1,   103,   225,
     164,   222,    -1,   211,   225,   164,   222,    -1,   111,   225,
     164,   222,    -1,    29,   225,   105,   222,    -1,    85,   225,
     105,   222,    -1,   214,   225,   164,   222,    -1,    30,   225,
     123,   222,    -1,   209,   225,   123,   222,    -1,   120,   225,
     164,   222,    -1,    26,   225,   164,   222,    -1,   210,   225,
     231,   222,    -1,    -1,   113,   472,   225,   473,   222,    -1,
     473,   226,   474,    -1,   474,    -1,   170,    -1,   173,    -1,
     174,    -1,   176,    -1,   177,    -1,   181,    -1,    51,    -1,
     195,    -1,   187,    -1,   191,    -1,   199,    -1,   196,    -1,
     179,    -1,   189,    -1,   193,    -1,   182,    -1,   205,    -1,
     171,    -1,   172,    -1,   185,    -1,   188,    -1,   180,    -1,
      -1,   110,   476,   225,   477,   222,    -1,   477,   226,   478,
      -1,   478,    -1,   170,    -1,   173,    -1,   174,    -1,   176,
      -1,   177,    -1,   181,    -1,   195,    -1,    51,    -1,   187,
      -1,   191,    -1,   199,    -1,   196,    -1,   179,    -1,   189,
      -1,   193,    -1,   182,    -1,   205,    -1,   171,    -1,   172,
      -1,   185,    -1,   188,    -1,   180,    -1,    88,   225,   105,
     222,    -1,    89,   225,   105,   222,    -1,    20,   225,   105,
     222,    -1,    14,   224,   483,   223,   222,    -1,   483,   484,
      -1,   484,    -1,   490,    -1,   486,    -1,   487,    -1,   488,
      -1,   489,    -1,   491,    -1,   492,    -1,   493,    -1,   494,
      -1,   495,    -1,   496,    -1,   485,    -1,     1,    -1,    27,
     225,   164,   222,    -1,    67,   225,   231,   222,    -1,    68,
     225,   231,   222,    -1,    77,   225,   105,   222,    -1,    76,
     225,   105,   222,    -1,    75,   225,   105,   222,    -1,    22,
     225,   105,   222,    -1,    21,   225,   105,   222,    -1,   101,
     225,   164,   222,    -1,   102,   225,   164,   222,    -1,   114,
     225,   105,   222,    -1,   115,   225,   231,   222,    -1,   149,
     224,   498,   223,   222,    -1,   498,   499,    -1,   499,    -1,
     500,    -1,   501,    -1,   502,    -1,   504,    -1,   505,    -1,
     503,    -1,   506,    -1,     1,    -1,    37,   225,   164,   222,
      -1,    54,   225,   164,   222,    -1,    55,   225,   164,   222,
      -1,    52,   225,   123,   222,    -1,    70,   225,   231,   222,
      -1,    51,   225,   164,   222,    -1,    53,   225,   164,   222,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   363,   363,   364,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   392,   392,   393,   397,
     401,   405,   409,   413,   417,   421,   427,   427,   428,   429,
     430,   431,   438,   441,   441,   442,   442,   442,   444,   450,
     457,   459,   459,   460,   460,   461,   461,   462,   462,   463,
     463,   464,   464,   465,   465,   466,   466,   467,   467,   468,
     469,   472,   473,   475,   475,   476,   482,   490,   490,   491,
     497,   505,   547,   606,   634,   642,   657,   672,   681,   695,
     704,   732,   762,   787,   809,   831,   840,   842,   842,   843,
     843,   844,   844,   846,   855,   864,   876,   877,   877,   879,
     879,   880,   882,   889,   889,   902,   903,   905,   905,   906,
     906,   908,   916,   919,   925,   924,   930,   930,   931,   935,
     939,   943,   947,   951,   955,   966,   965,  1042,  1042,  1043,
    1043,  1043,  1044,  1044,  1044,  1045,  1045,  1045,  1047,  1053,
    1059,  1065,  1076,  1082,  1089,  1088,  1094,  1094,  1095,  1099,
    1103,  1107,  1111,  1115,  1119,  1123,  1127,  1131,  1135,  1139,
    1143,  1147,  1151,  1155,  1159,  1163,  1167,  1171,  1175,  1179,
    1186,  1185,  1191,  1191,  1192,  1196,  1200,  1204,  1208,  1212,
    1216,  1220,  1224,  1228,  1232,  1236,  1240,  1244,  1248,  1252,
    1256,  1260,  1271,  1270,  1331,  1331,  1332,  1333,  1333,  1334,
    1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1342,  1343,
    1344,  1345,  1346,  1348,  1354,  1360,  1366,  1372,  1378,  1384,
    1390,  1396,  1402,  1409,  1415,  1421,  1427,  1436,  1446,  1445,
    1451,  1451,  1452,  1456,  1467,  1466,  1473,  1472,  1477,  1477,
    1478,  1482,  1486,  1492,  1492,  1493,  1493,  1493,  1493,  1493,
    1495,  1495,  1497,  1497,  1499,  1513,  1533,  1539,  1549,  1548,
    1590,  1590,  1591,  1591,  1591,  1591,  1592,  1592,  1592,  1593,
    1593,  1595,  1601,  1607,  1613,  1625,  1624,  1630,  1630,  1631,
    1635,  1639,  1643,  1647,  1651,  1655,  1659,  1663,  1667,  1673,
    1687,  1696,  1710,  1709,  1724,  1724,  1725,  1725,  1725,  1725,
    1727,  1733,  1739,  1749,  1751,  1751,  1752,  1752,  1754,  1770,
    1769,  1794,  1794,  1795,  1795,  1795,  1795,  1797,  1803,  1823,
    1822,  1828,  1828,  1829,  1833,  1837,  1841,  1845,  1849,  1853,
    1857,  1861,  1865,  1875,  1874,  1895,  1895,  1896,  1896,  1896,
    1898,  1905,  1904,  1910,  1910,  1911,  1915,  1919,  1923,  1927,
    1931,  1935,  1939,  1943,  1947,  1957,  1956,  2022,  2022,  2023,
    2023,  2023,  2024,  2024,  2025,  2025,  2025,  2026,  2026,  2026,
    2027,  2027,  2028,  2030,  2036,  2042,  2048,  2061,  2074,  2080,
    2084,  2093,  2092,  2097,  2097,  2098,  2102,  2108,  2119,  2125,
    2131,  2137,  2153,  2152,  2178,  2178,  2179,  2179,  2179,  2181,
    2201,  2211,  2210,  2237,  2237,  2238,  2238,  2238,  2240,  2246,
    2255,  2257,  2257,  2258,  2258,  2260,  2278,  2277,  2300,  2300,
    2301,  2301,  2301,  2303,  2309,  2318,  2321,  2321,  2322,  2322,
    2323,  2323,  2324,  2324,  2325,  2325,  2326,  2326,  2327,  2328,
    2329,  2329,  2330,  2330,  2331,  2331,  2332,  2332,  2333,  2333,
    2334,  2334,  2335,  2335,  2336,  2336,  2337,  2337,  2338,  2338,
    2339,  2339,  2340,  2341,  2341,  2342,  2343,  2344,  2344,  2345,
    2345,  2346,  2347,  2348,  2349,  2349,  2350,  2353,  2358,  2364,
    2370,  2376,  2381,  2386,  2391,  2396,  2401,  2406,  2411,  2416,
    2421,  2426,  2431,  2436,  2441,  2446,  2452,  2463,  2468,  2473,
    2478,  2483,  2488,  2491,  2496,  2499,  2504,  2509,  2514,  2519,
    2524,  2529,  2534,  2539,  2544,  2549,  2554,  2559,  2568,  2577,
    2582,  2587,  2593,  2592,  2597,  2597,  2598,  2601,  2604,  2607,
    2610,  2613,  2616,  2619,  2622,  2625,  2628,  2631,  2634,  2637,
    2640,  2643,  2646,  2649,  2652,  2655,  2658,  2661,  2667,  2666,
    2671,  2671,  2672,  2675,  2678,  2681,  2684,  2687,  2690,  2693,
    2696,  2699,  2702,  2705,  2708,  2711,  2714,  2717,  2720,  2723,
    2726,  2729,  2732,  2735,  2740,  2745,  2750,  2759,  2762,  2762,
    2763,  2764,  2764,  2765,  2765,  2766,  2767,  2768,  2769,  2770,
    2770,  2771,  2771,  2773,  2778,  2783,  2788,  2793,  2798,  2803,
    2808,  2813,  2818,  2823,  2828,  2836,  2839,  2839,  2840,  2840,
    2841,  2842,  2843,  2843,  2844,  2845,  2847,  2853,  2859,  2865,
    2874,  2888,  2894
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ADMIN", "AFTYPE",
  "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", "AUTOCONN", "BYTES",
  "KBYTES", "MBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", "CHANNEL",
  "CIDR_BITLEN_IPV4", "CIDR_BITLEN_IPV6", "CLASS", "CONNECT",
  "CONNECTFREQ", "DEFAULT_FLOODCOUNT", "DEFAULT_SPLIT_SERVER_COUNT",
  "DEFAULT_SPLIT_USER_COUNT", "DENY", "DESCRIPTION", "DIE", "DISABLE_AUTH",
  "DISABLE_FAKE_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DOTS_IN_IDENT",
  "EGDPOOL_PATH", "EMAIL", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT",
  "FAILED_OPER_NOTICE", "IRCD_FLAGS", "FLATTEN_LINKS", "GECOS", "GENERAL",
  "GLINE", "GLINE_DURATION", "GLINE_ENABLE", "GLINE_EXEMPT",
  "GLINE_REQUEST_DURATION", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6",
  "GLOBAL_KILL", "IRCD_AUTH", "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN",
  "HIDDEN_NAME", "HIDE_SERVER_IPS", "HIDE_SERVERS", "HIDE_SERVICES",
  "HIDE_SPOOF_IPS", "HOST", "HUB", "HUB_MASK", "IGNORE_BOGUS_TS",
  "INVISIBLE_ON_CONNECT", "IP", "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE",
  "KLINE_EXEMPT", "KNOCK_DELAY", "KNOCK_DELAY_CHANNEL", "LEAF_MASK",
  "LINKS_DELAY", "LISTEN", "T_LOG", "MASK", "MAX_ACCEPT", "MAX_BANS",
  "MAX_CHANS_PER_OPER", "MAX_CHANS_PER_USER", "MAX_GLOBAL", "MAX_IDENT",
  "MAX_LOCAL", "MAX_NICK_CHANGES", "MAX_NICK_LENGTH", "MAX_NICK_TIME",
  "MAX_NUMBER", "MAX_TARGETS", "MAX_TOPIC_LENGTH", "MAX_WATCH",
  "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MIN_IDLE", "MAX_IDLE",
  "RANDOM_IDLE", "HIDE_IDLE_FROM_OPERS", "MODULE", "MODULES", "NAME",
  "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", "NICK",
  "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE",
  "NUMBER", "NUMBER_PER_CIDR", "NUMBER_PER_IP", "OPERATOR",
  "OPERS_BYPASS_CALLERID", "OPER_ONLY_UMODES", "OPER_PASS_RESV",
  "OPER_SPY_T", "OPER_UMODES", "JOIN_FLOOD_COUNT", "JOIN_FLOOD_TIME",
  "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE",
  "PING_TIME", "PORT", "QSTRING", "REASON", "REDIRPORT", "REDIRSERV",
  "REHASH", "REMOTE", "REMOTEBAN", "RSA_PRIVATE_KEY_FILE",
  "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE", "SSL_DH_PARAM_FILE",
  "T_SSL_CLIENT_METHOD", "T_SSL_SERVER_METHOD", "T_SSLV3", "T_TLSV1",
  "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS",
  "MONTHS", "YEARS", "SENDQ", "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO",
  "IRCD_SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
  "SHORT_MOTD", "SPOOF", "SPOOF_NOTICE", "STATS_E_DISABLED",
  "STATS_I_OPER_ONLY", "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY",
  "STATS_P_OPER_ONLY", "TBOOL", "TMASKED", "TS_MAX_DELTA", "TS_WARN_DELTA",
  "TWODOTS", "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CCONN_FULL", "T_SSL_CIPHER_LIST", "T_DEAF", "T_DEBUG", "T_DLINE",
  "T_EXTERNAL", "T_FARCONNECT", "T_FULL", "T_INVISIBLE", "T_IPV4",
  "T_IPV6", "T_LOCOPS", "T_MAX_CLIENTS", "T_NCHANGE", "T_NONONREG",
  "T_OPERWALL", "T_RECVQ", "T_REJ", "T_SERVER", "T_SERVNOTICE", "T_SET",
  "T_SKILL", "T_SPY", "T_SSL", "T_UMODES", "T_UNAUTH", "T_UNDLINE",
  "T_UNLIMITED", "T_UNRESV", "T_UNXLINE", "T_GLOBOPS", "T_WALLOP",
  "T_WEBIRC", "T_RESTART", "T_SERVICE", "T_SERVICES_NAME", "THROTTLE_TIME",
  "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", "USE_EGD", "USE_LOGGING",
  "VHOST", "VHOST6", "XLINE", "WARN_NO_NLINE", "T_SIZE", "T_FILE", "';'",
  "'}'", "'{'", "'='", "','", "$accept", "conf", "conf_item", "timespec_",
  "timespec", "sizespec_", "sizespec", "modules_entry", "modules_items",
  "modules_item", "modules_module", "modules_path", "serverinfo_entry",
  "serverinfo_items", "serverinfo_item", "serverinfo_ssl_client_method",
  "serverinfo_ssl_server_method", "client_method_types",
  "client_method_type_item", "server_method_types",
  "server_method_type_item", "serverinfo_ssl_certificate_file",
  "serverinfo_rsa_private_key_file", "serverinfo_ssl_dh_param_file",
  "serverinfo_ssl_cipher_list", "serverinfo_name", "serverinfo_sid",
  "serverinfo_description", "serverinfo_network_name",
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6",
  "serverinfo_max_clients", "serverinfo_max_nick_length",
  "serverinfo_max_topic_length", "serverinfo_hub", "admin_entry",
  "admin_items", "admin_item", "admin_name", "admin_email",
  "admin_description", "logging_entry", "logging_items", "logging_item",
  "logging_use_logging", "logging_file_entry", "$@1", "logging_file_items",
  "logging_file_item", "logging_file_name", "logging_file_size",
  "logging_file_type", "$@2", "logging_file_type_items",
  "logging_file_type_item", "oper_entry", "$@3", "oper_items", "oper_item",
  "oper_name", "oper_user", "oper_password", "oper_encrypted",
  "oper_rsa_public_key_file", "oper_class", "oper_umodes", "$@4",
  "oper_umodes_items", "oper_umodes_item", "oper_flags", "$@5",
  "oper_flags_items", "oper_flags_item", "class_entry", "$@6",
  "class_items", "class_item", "class_name", "class_ping_time",
  "class_number_per_ip", "class_connectfreq", "class_max_number",
  "class_max_global", "class_max_local", "class_max_ident", "class_sendq",
  "class_recvq", "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "class_min_idle", "class_max_idle",
  "class_flags", "$@7", "class_flags_items", "class_flags_item",
  "listen_entry", "$@8", "listen_flags", "$@9", "listen_flags_items",
  "listen_flags_item", "listen_items", "listen_item", "listen_port",
  "$@10", "port_items", "port_item", "listen_address", "listen_host",
  "auth_entry", "$@11", "auth_items", "auth_item", "auth_user",
  "auth_passwd", "auth_class", "auth_encrypted", "auth_flags", "$@12",
  "auth_flags_items", "auth_flags_item", "auth_spoof", "auth_redir_serv",
  "auth_redir_port", "resv_entry", "$@13", "resv_items", "resv_item",
  "resv_mask", "resv_reason", "resv_exempt", "service_entry",
  "service_items", "service_item", "service_name", "shared_entry", "$@14",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "$@15", "shared_types", "shared_type_item",
  "cluster_entry", "$@16", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "$@17", "cluster_types", "cluster_type_item",
  "connect_entry", "$@18", "connect_items", "connect_item", "connect_name",
  "connect_host", "connect_vhost", "connect_send_password",
  "connect_accept_password", "connect_port", "connect_aftype",
  "connect_flags", "$@19", "connect_flags_items", "connect_flags_item",
  "connect_encrypted", "connect_hub_mask", "connect_leaf_mask",
  "connect_class", "connect_ssl_cipher_list", "kill_entry", "$@20",
  "kill_items", "kill_item", "kill_user", "kill_reason", "deny_entry",
  "$@21", "deny_items", "deny_item", "deny_ip", "deny_reason",
  "exempt_entry", "exempt_items", "exempt_item", "exempt_ip",
  "gecos_entry", "$@22", "gecos_items", "gecos_item", "gecos_name",
  "gecos_reason", "general_entry", "general_items", "general_item",
  "general_max_watch", "general_gline_enable", "general_gline_duration",
  "general_gline_request_duration", "general_gline_min_cidr",
  "general_gline_min_cidr6", "general_tkline_expire_notices",
  "general_kill_chase_time_limit", "general_hide_spoof_ips",
  "general_ignore_bogus_ts", "general_disable_remote_commands",
  "general_failed_oper_notice", "general_anti_nick_flood",
  "general_max_nick_time", "general_max_nick_changes",
  "general_max_accept", "general_anti_spam_exit_message_time",
  "general_ts_warn_delta", "general_ts_max_delta",
  "general_havent_read_conf", "general_invisible_on_connect",
  "general_warn_no_nline", "general_stats_e_disabled",
  "general_stats_o_oper_only", "general_stats_P_oper_only",
  "general_stats_k_oper_only", "general_stats_i_oper_only",
  "general_pace_wait", "general_caller_id_wait",
  "general_opers_bypass_callerid", "general_pace_wait_simple",
  "general_short_motd", "general_no_oper_flood",
  "general_true_no_oper_flood", "general_oper_pass_resv",
  "general_dots_in_ident", "general_max_targets", "general_use_egd",
  "general_egdpool_path", "general_services_name", "general_ping_cookie",
  "general_disable_auth", "general_throttle_time", "general_oper_umodes",
  "$@23", "umode_oitems", "umode_oitem", "general_oper_only_umodes",
  "$@24", "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "channel_entry", "channel_items", "channel_item",
  "channel_disable_fake_channels", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_max_chans_per_user",
  "channel_max_chans_per_oper", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "channel_jflood_count", "channel_jflood_time", "serverhide_entry",
  "serverhide_items", "serverhide_item", "serverhide_flatten_links",
  "serverhide_hide_servers", "serverhide_hide_services",
  "serverhide_hidden_name", "serverhide_links_delay", "serverhide_hidden",
  "serverhide_hide_server_ips", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   227,   228,   228,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   230,   230,   231,   231,
     231,   231,   231,   231,   231,   231,   232,   232,   233,   233,
     233,   233,   234,   235,   235,   236,   236,   236,   237,   238,
     239,   240,   240,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   242,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   264,   265,
     265,   265,   265,   266,   267,   268,   269,   270,   270,   271,
     271,   271,   272,   274,   273,   275,   275,   276,   276,   276,
     276,   277,   278,   278,   280,   279,   281,   281,   282,   282,
     282,   282,   282,   282,   282,   284,   283,   285,   285,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   287,   288,
     289,   290,   291,   292,   294,   293,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     298,   297,   299,   299,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   302,   301,   303,   303,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   321,   320,
     322,   322,   323,   323,   325,   324,   327,   326,   328,   328,
     329,   329,   329,   330,   330,   331,   331,   331,   331,   331,
     333,   332,   334,   334,   335,   335,   336,   337,   339,   338,
     340,   340,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   342,   343,   344,   345,   347,   346,   348,   348,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   350,
     351,   352,   354,   353,   355,   355,   356,   356,   356,   356,
     357,   358,   359,   360,   361,   361,   362,   362,   363,   365,
     364,   366,   366,   367,   367,   367,   367,   368,   369,   371,
     370,   372,   372,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   375,   374,   376,   376,   377,   377,   377,
     378,   380,   379,   381,   381,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   384,   383,   385,   385,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   387,   388,   389,   390,   391,   392,   393,
     393,   395,   394,   396,   396,   397,   397,   398,   399,   400,
     401,   402,   404,   403,   405,   405,   406,   406,   406,   407,
     408,   410,   409,   411,   411,   412,   412,   412,   413,   414,
     415,   416,   416,   417,   417,   418,   420,   419,   421,   421,
     422,   422,   422,   423,   424,   425,   426,   426,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   453,   454,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   472,   471,   473,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   476,   475,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   479,   480,   481,   482,   483,   483,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   498,   499,   499,
     499,   499,   499,   499,   499,   499,   500,   501,   502,   503,
     504,   505,   506
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     0,     1,     2,     3,
       3,     3,     5,     2,     1,     1,     1,     2,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     3,     1,     1,     1,     3,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     2,     4,     4,     4,     5,     2,     1,     1,
       1,     2,     4,     0,     6,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     0,     6,     0,     5,     3,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       0,     5,     3,     1,     1,     3,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     2,
       4,     4,     4,     5,     2,     1,     1,     1,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     1,     1,     1,     2,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     1,     1,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       5,     2,     1,     1,     1,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   202,   365,   411,     0,
     426,     0,   268,   402,   244,     0,     0,   135,   302,     0,
       0,   319,   343,     0,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      20,    22,    21,     7,    12,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   101,   100,   602,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     589,   601,   591,   592,   593,   594,   590,   595,   596,   597,
     598,   599,   600,     0,     0,     0,   424,     0,     0,   422,
     423,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   558,     0,   532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   437,   484,   478,   479,   480,   481,   482,   477,
     448,   438,   439,   472,   440,   441,   442,   443,   444,   445,
     446,   447,   474,   449,   450,   483,   452,   457,   453,   455,
     454,   467,   468,   456,   458,   459,   460,   461,   451,   463,
     464,   465,   485,   475,   476,   473,   466,   462,   470,   471,
     469,     0,     0,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,    44,    45,    46,     0,     0,
     625,     0,     0,     0,     0,     0,     0,     0,     0,   617,
     618,   619,   620,   623,   621,   622,   624,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    67,    68,    66,
      63,    62,    69,    53,    65,    56,    57,    58,    54,    64,
      59,    60,    61,    55,     0,     0,   317,     0,     0,   315,
     316,   102,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     588,     0,     0,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     206,   209,   211,   212,   213,   214,   215,   216,   217,   218,
     207,   208,   210,   219,   220,   221,     0,     0,     0,     0,
       0,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   368,   369,   370,   371,   372,   373,   375,   374,   377,
     381,   378,   379,   380,   376,   417,     0,     0,     0,   414,
     415,   416,     0,     0,   421,   432,     0,     0,     0,   429,
     430,   431,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   436,     0,     0,     0,   285,     0,     0,     0,     0,
       0,     0,   271,   272,   273,   274,   279,   275,   276,   277,
     278,   408,     0,     0,     0,   405,   406,   407,     0,   246,
       0,     0,     0,   256,     0,   254,   255,   257,   258,   111,
       0,     0,   107,     0,    47,     0,     0,     0,    43,     0,
       0,     0,   180,     0,     0,     0,   154,     0,     0,   138,
     139,   140,   141,   144,   145,   143,   142,   146,     0,     0,
       0,     0,     0,   305,   306,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,   616,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,   329,     0,
       0,   322,   323,   324,   325,     0,     0,   351,     0,   346,
     347,   348,     0,     0,   314,     0,     0,     0,    96,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   587,   222,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   382,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,     0,
       0,   413,     0,   420,     0,     0,     0,   428,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   435,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,   404,   259,     0,     0,     0,     0,     0,
     253,     0,   106,     0,     0,     0,    42,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   309,     0,
       0,     0,     0,   304,     0,     0,     0,     0,     0,     0,
       0,   615,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,     0,    74,    79,    80,     0,    78,
       0,     0,     0,     0,     0,    50,   326,     0,     0,     0,
       0,   321,   349,     0,     0,     0,   345,     0,   313,   105,
     104,   103,   610,   609,   603,    26,    26,    26,    26,    26,
      26,    26,    28,    27,   604,   605,   608,   607,   606,   611,
     612,   613,   614,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
     203,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   366,     0,     0,   412,   425,
       0,     0,   427,   499,   503,   517,   586,   530,   497,   524,
     527,   498,   489,   488,   490,   491,   492,   506,   495,   496,
     507,   494,   502,   501,   500,   525,   487,   584,   585,   521,
     518,   569,   562,   579,   580,   563,   564,   565,   566,   574,
     583,   567,   577,   581,   570,   582,   575,   571,   576,   568,
     573,   572,   578,     0,   561,   523,   542,   536,   553,   554,
     537,   538,   539,   540,   548,   557,   541,   551,   555,   544,
     556,   549,   545,   550,   543,   547,   546,   552,     0,   535,
     516,   519,   529,   493,   520,   509,   514,   515,   512,   513,
     510,   511,   505,   504,   528,   531,   522,   526,   508,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,     0,
     403,     0,     0,     0,   264,   260,   263,   245,   112,     0,
       0,   124,     0,     0,   116,   117,   119,   118,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,   303,   626,   631,   629,   632,   627,   628,   630,
      87,    95,    93,    94,    85,    89,    88,    82,    81,    83,
      71,     0,    72,     0,    86,    84,    92,    90,    91,     0,
       0,     0,   320,     0,     0,   344,   318,    29,    30,    31,
      32,    33,    34,    35,   233,   234,   226,   242,   243,     0,
     241,   228,   230,   229,   227,   236,   237,   223,   235,   225,
     224,    36,    36,    36,    38,    37,   231,   232,   387,   389,
     390,   400,   397,   395,   396,     0,   394,   384,   398,   399,
     383,   388,   386,   401,   385,   418,   419,   433,   434,   559,
       0,   533,     0,   283,   284,   293,   290,   295,   292,   291,
     298,   294,   296,   289,   297,     0,   288,   282,   301,   300,
     299,   281,   410,   409,   251,   252,   250,     0,   249,   267,
     266,     0,     0,     0,   120,     0,     0,     0,     0,   115,
     153,   151,   195,   192,   191,   184,   186,   201,   198,   194,
     185,   199,   188,   196,   200,   189,   197,   193,   187,   190,
       0,   183,   148,   150,   152,   164,   158,   175,   176,   159,
     160,   161,   162,   170,   179,   163,   173,   177,   166,   178,
     171,   167,   172,   165,   169,   168,   174,     0,   157,   149,
     312,   310,   311,    73,    77,   327,   333,   339,   342,   335,
     341,   336,   340,   338,   334,   337,     0,   332,   328,   350,
     355,   361,   364,   357,   363,   358,   362,   360,   356,   359,
       0,   354,   239,     0,    39,    40,    41,   392,     0,   560,
     534,   286,     0,   247,     0,   265,   262,   261,     0,     0,
       0,     0,   114,   181,     0,   155,     0,   330,     0,   352,
       0,   240,   393,   287,   248,   121,   130,   133,   132,   129,
     134,   131,   128,     0,   127,   123,   122,   182,   156,   331,
     353,   125,     0,   126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,   782,   783,  1034,  1035,    25,   224,   225,
     226,   227,    26,   265,   266,   267,   268,   744,   745,   748,
     749,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,    27,    71,    72,    73,
      74,    75,    28,   216,   217,   218,   219,   220,   953,   954,
     955,   956,   957,  1096,  1223,  1224,    29,    60,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   714,  1147,  1148,
     507,   710,  1120,  1121,    30,    49,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   587,  1019,  1020,    31,    57,   473,
     695,  1087,  1088,   474,   475,   476,  1093,   945,   946,   477,
     478,    32,    55,   451,   452,   453,   454,   455,   456,   457,
     682,  1075,  1076,   458,   459,   460,    33,    61,   512,   513,
     514,   515,   516,    34,   288,   289,   290,    35,    64,   550,
     551,   552,   553,   554,   758,  1166,  1167,    36,    65,   558,
     559,   560,   561,   764,  1180,  1181,    37,    50,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   607,  1045,
    1046,   370,   371,   372,   373,   374,    38,    56,   464,   465,
     466,   467,    39,    51,   378,   379,   380,   381,    40,   108,
     109,   110,    41,    53,   388,   389,   390,   391,    42,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   422,   908,   909,   207,   420,
     883,   884,   208,   209,   210,    43,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      44,   238,   239,   240,   241,   242,   243,   244,   245,   246
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -720
static const yytype_int16 yypact[] =
{
    -720,   586,  -720,  -178,  -196,  -190,  -720,  -720,  -720,  -188,
    -720,  -172,  -720,  -720,  -720,  -161,  -159,  -720,  -720,  -150,
    -142,  -720,  -720,  -133,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,    17,   844,  -126,
    -114,  -110,    10,  -108,   364,   -96,   -71,   -67,    50,    12,
     -59,   -52,   768,   410,   -50,   -45,    13,   -37,   -35,   -30,
     -26,     6,  -720,  -720,  -720,  -720,  -720,   -22,   -12,   -10,
      -1,     7,    20,    27,    38,    56,    79,    85,    90,   281,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,   596,   497,   210,  -720,   108,    19,  -720,
    -720,    88,  -720,   112,   113,   114,   116,   118,   119,   127,
     128,   129,   134,   138,   141,   142,   143,   147,   148,   149,
     152,   153,   154,   155,   160,   162,   163,   164,   172,   176,
     177,  -720,   178,  -720,   182,   188,   190,   191,   192,   193,
     194,   196,   197,   201,   202,   205,   206,   207,   211,   212,
     214,   117,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,   315,    98,   545,   -34,   217,    41,  -720,  -720,  -720,
     121,   133,   219,   221,    74,  -720,  -720,  -720,   273,   288,
    -720,   223,   225,   240,   241,   244,   251,   253,    16,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,   213,   254,   257,
     258,   264,   265,   266,   268,   269,   270,   280,   282,   286,
     293,   294,   296,   297,   307,    84,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,    55,     5,  -720,   309,     8,  -720,
    -720,  -720,   341,   378,   387,   313,  -720,   259,   433,   375,
     436,   436,   444,   445,   447,   391,   393,   454,   436,   338,
    -720,   340,   339,   342,   343,  -720,   344,   346,   347,   352,
     354,   355,   357,   359,   363,   366,   367,   369,   239,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,   373,   374,   381,   385,
     388,  -720,   389,   392,   396,   397,   404,   405,   406,   408,
      75,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,   411,   412,    25,  -720,
    -720,  -720,   440,   376,  -720,  -720,   416,   417,    26,  -720,
    -720,  -720,   401,   436,   436,   484,   452,   471,   513,   521,
     482,   436,   483,   436,   543,   546,   547,   486,   489,   490,
     436,   550,   551,   436,   554,   555,   556,   558,   500,   501,
     441,   505,   443,   436,   436,   507,   509,   514,   515,   -44,
      44,   518,   519,   436,   436,   561,   436,   524,   526,   527,
     455,  -720,   463,   468,   470,  -720,   472,   473,   474,   476,
     479,    30,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,   487,   491,    83,  -720,  -720,  -720,   485,  -720,
     494,   495,   496,  -720,   139,  -720,  -720,  -720,  -720,  -720,
     532,   492,  -720,   498,  -720,   585,   602,   506,  -720,   508,
     502,   512,  -720,   516,   517,   520,  -720,   530,    23,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,   510,   536,
     538,   542,    15,  -720,  -720,  -720,  -720,   562,   567,   610,
     570,   574,   580,   436,   549,  -720,  -720,   623,   588,   604,
     669,   652,   654,   656,   657,   658,   660,   130,   156,   661,
     662,   673,   664,   665,   575,  -720,   581,   584,  -720,   591,
      34,  -720,  -720,  -720,  -720,   589,   592,  -720,    37,  -720,
    -720,  -720,   679,   608,  -720,   617,   627,   630,  -720,   631,
     633,   634,   742,   635,   636,   637,   639,   640,   641,   645,
     646,   647,  -720,  -720,   708,   736,   436,   649,   765,   767,
     770,   771,   436,   436,   754,   773,   774,   436,   776,   776,
     667,  -720,  -720,   769,   137,   777,   726,   666,   778,   779,
     780,   781,   788,   782,   783,   785,   672,  -720,   786,   787,
     674,  -720,   677,  -720,   791,   792,   694,  -720,   696,   700,
     701,   702,   703,   704,   705,   706,   707,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   725,   727,   728,   729,   730,   577,   731,   619,   732,
     733,   734,   735,   738,   739,   740,   741,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,  -720,  -720,
     794,   766,   723,   841,   871,   854,   855,   856,   758,  -720,
     858,   859,   761,  -720,  -720,   759,   862,   863,   882,   772,
    -720,   775,  -720,    31,   784,   789,  -720,  -720,   865,   825,
     790,   867,   868,   869,   793,   870,   795,  -720,  -720,   872,
     873,   875,   797,  -720,   798,   799,   800,   801,   802,   803,
     804,  -720,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,  -720,  -720,  -214,  -720,  -720,  -720,  -207,  -720,
     815,   816,   817,   818,   819,  -720,  -720,   876,   820,   877,
     821,  -720,  -720,   878,   822,   824,  -720,   826,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,   436,   436,   436,   436,   436,
     436,   436,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,   827,   828,   829,   232,   830,   831,   832,
     833,   834,   835,   836,   837,   838,   839,   276,   840,   842,
    -720,   843,   845,   846,   847,   848,    -3,   849,   850,   851,
     852,   853,   857,   860,   861,  -720,   864,   866,  -720,  -720,
     874,   879,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -201,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -193,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,   880,
     881,   504,   883,   884,   885,   886,   887,  -720,   888,   889,
    -720,   -28,   890,   891,   895,   892,  -720,  -720,  -720,   893,
     894,  -720,   896,    21,  -720,  -720,  -720,  -720,  -720,  -720,
     898,   900,   511,   901,   902,   903,   655,   904,  -720,   905,
     906,   907,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,   130,  -720,   156,  -720,  -720,  -720,  -720,  -720,   908,
     285,   909,  -720,   910,   695,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -183,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,   776,   776,   776,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -176,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
     577,  -720,   619,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -168,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -165,  -720,  -720,
    -720,   897,   882,   911,  -720,   919,   912,  -101,   913,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -162,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -149,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -143,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -132,  -720,  -720,   232,  -720,  -720,  -720,  -720,    -3,  -720,
    -720,  -720,   504,  -720,   -28,  -720,  -720,  -720,   914,   335,
     916,   917,  -720,  -720,   511,  -720,   655,  -720,   285,  -720,
     695,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -129,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,   335,  -720
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -720,  -720,  -720,  -320,  -298,  -719,  -598,  -720,  -720,   918,
    -720,  -720,  -720,  -720,   899,  -720,  -720,  -720,    14,  -720,
      11,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,   932,  -720,
    -720,  -720,  -720,  -720,   796,  -720,  -720,  -720,  -720,    54,
    -720,  -720,  -720,  -720,  -720,  -224,  -720,  -720,  -720,   568,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -197,
    -720,  -720,  -720,  -194,  -720,  -720,  -720,   685,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -169,  -720,  -720,  -720,
    -720,  -720,  -118,  -720,   603,  -720,  -720,  -720,   -76,  -720,
    -720,  -720,  -720,  -720,   593,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -112,  -720,  -720,  -720,  -720,  -720,  -720,   566,
    -720,  -720,  -720,  -720,  -720,   915,  -720,  -720,  -720,  -720,
     531,  -720,  -720,  -720,  -720,  -720,  -124,  -720,  -720,  -720,
     529,  -720,  -720,  -720,  -720,  -125,  -720,  -720,  -720,   737,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
     -99,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,   626,
    -720,  -720,  -720,  -720,  -720,   756,  -720,  -720,  -720,  -720,
     983,  -720,  -720,  -720,  -720,   755,  -720,  -720,  -720,  -720,
     931,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,    32,  -720,  -720,
    -720,    33,  -720,  -720,  -720,  -720,  -720,  1006,  -720,  -720,
    -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,  -720,
    -720,  -720,   920,  -720,  -720,  -720,  -720,  -720,  -720,  -720
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -114
static const yytype_int16 yytable[] =
{
     808,   809,   573,   574,   807,  1043,   555,    67,   990,   286,
     581,   106,   991,   221,   286,   992,   508,   230,    67,   993,
     106,  1059,   949,  1084,   489,  1060,   375,   385,    47,  1061,
      68,   442,   949,  1062,    48,   546,    52,    69,   555,  1182,
     490,    68,   214,  1183,    45,    46,  1187,   443,    69,   509,
    1188,   214,    54,   231,  1191,   491,   546,  1193,  1192,   492,
    1203,  1194,   444,    58,  1204,    59,   445,   232,   233,   234,
     235,   236,   107,  1205,    62,   221,   346,  1206,   347,  1207,
     348,   107,    63,  1208,   461,   247,   237,   376,   510,   385,
    1209,    66,   349,  1231,  1210,   629,   630,  1232,   103,   461,
    1200,   556,    70,   637,   287,   639,   222,   350,   248,   287,
     104,   351,   646,    70,   105,   649,   111,   950,   112,   493,
     665,   666,   386,   113,   114,   659,   660,   950,   211,   115,
     547,   223,   352,   556,   353,   671,   672,   116,   674,   511,
     468,   494,   249,   117,   354,   118,   119,   120,   446,   377,
     387,   547,   121,   212,   495,   447,   448,   213,   122,   123,
     557,   124,   125,   126,  1085,   228,   250,   127,   222,  1086,
     251,   355,   229,   128,   284,   469,   951,   129,   130,   285,
     252,   131,   253,   254,   386,   291,   951,   449,   479,   548,
     292,   132,   557,   223,  1044,   293,   470,   356,   133,   294,
     134,   471,   135,   297,   136,   137,   138,   462,   667,   668,
     548,   375,   387,   298,   255,   299,   256,   257,   258,   259,
     139,   496,   462,   357,   300,   730,   140,   141,   142,   295,
     143,   563,   301,   144,   145,   260,   497,   146,   722,   524,
     311,   952,   383,   450,  1098,   302,   716,   549,   620,   626,
     358,   952,   303,   688,   312,   313,   215,   760,   314,   261,
     765,   472,  -113,   304,   481,   215,   742,   743,   549,   147,
     262,  -113,   376,   148,   489,   315,   149,   150,   151,   152,
     153,   305,    76,   154,   155,  1031,  1032,  1033,   795,   508,
     490,   359,   746,   747,   801,   802,   463,   487,   616,   806,
     263,   264,    77,    78,   306,   491,   692,   544,    79,   492,
     307,   463,  1184,  1185,  1186,   308,   442,   316,   317,   318,
     812,   813,   509,   319,  1017,  1018,   156,   157,   158,   320,
     321,   159,   443,   382,   377,   322,   160,   392,   393,   394,
     440,   395,   483,   396,   397,   323,   324,   444,    80,    81,
    1156,   445,   398,   399,   400,   484,    82,    83,    84,   401,
     325,   510,   699,   402,   569,   112,   403,   404,   405,   493,
     113,   114,   406,   407,   408,  1216,   115,   409,   410,   411,
     412,   807,    85,    86,   116,   413,   326,   414,   415,   416,
     117,   494,   118,   119,   120,    87,    88,   417,  1217,   121,
    1218,   418,   419,   421,   495,   122,   123,   423,   124,   125,
     126,   247,   511,   424,   127,   425,   426,   427,   428,   429,
     128,   430,   431,  1157,   129,   130,   432,   433,   131,   327,
     434,   435,   436,   446,   248,   526,   437,   438,   132,   439,
     447,   448,   480,  1219,   485,   133,   486,   134,   517,   135,
     518,   136,   137,   138,  1158,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,   600,  1159,   565,   519,   520,   139,   249,   521,
    1160,   496,   449,   140,   141,   142,   522,   143,   523,   527,
     144,   145,   528,   529,   146,  1161,   497,  1162,  1163,   530,
     531,   532,   250,   533,   534,   535,   251,  1164,   346,  1201,
     347,   566,   348,  1165,   309,   536,   252,   537,   253,   254,
     567,   538,  1220,  1221,   349,  1102,   147,  1065,   539,   540,
     148,   541,   542,   149,   150,   151,   152,   153,   450,   350,
     154,   155,   543,   351,   562,   568,  1103,  1066,   570,   571,
     255,   572,   256,   257,   258,   259,   468,  1067,  1222,   575,
     576,  1104,   577,  1068,   352,   578,   353,   579,  1105,   580,
     582,   260,   583,   622,   584,   628,   354,   585,   586,   588,
    1069,   589,   590,   156,   157,   158,  1106,   591,   159,   592,
     593,   469,   594,   160,   595,   261,     2,     3,   596,   631,
       4,   597,   598,   355,   599,   602,   262,   311,   623,   603,
       5,  1070,   470,     6,     7,  1107,   604,   471,  1071,     8,
     605,   312,   313,   606,   608,   314,   632,   609,   634,   356,
       9,   610,   611,  1108,    10,    11,   263,   264,   861,   612,
     613,   614,   315,   615,    12,   633,   618,   619,  1109,  1110,
    1111,   624,   625,  1072,   635,   357,   636,   638,   640,    13,
     643,   641,   642,   644,   645,   647,   648,    14,    15,   650,
     651,   652,  1073,   653,   654,   655,   656,   472,   658,   657,
     886,   661,   358,   662,   316,   317,   318,   678,   663,   664,
     319,    16,   669,   670,   673,   679,   320,   321,   675,  1112,
     676,   677,   322,   680,    17,   681,   701,   683,   684,   685,
    1113,   686,   323,   324,   687,  1114,  1125,   694,   704,   734,
    1074,  1115,   690,   359,   702,  1116,   691,   325,  1117,   696,
     697,   698,   703,  1118,    18,   705,   724,   708,   706,  1119,
     707,   725,   718,   726,   727,    19,    20,   709,   728,    21,
      22,   711,   712,   326,   729,   713,   732,   862,   863,   864,
     865,   866,   733,   867,   868,   715,   869,   870,   871,   872,
    1170,   719,   873,   720,   874,   875,   876,   721,   877,   230,
     878,   731,   879,   880,   735,   736,   881,   737,   752,   738,
     739,   740,   882,   741,   750,   751,   327,   753,   754,   887,
     888,   889,   890,   891,    23,   892,   893,   755,   894,   895,
     896,   897,   767,   756,   898,   231,   899,   900,   901,   757,
     902,   762,   903,   793,   904,   905,   759,   763,   906,   232,
     233,   234,   235,   236,   907,  1126,  1127,  1128,  1129,  1130,
     768,  1131,  1132,  1171,  1133,  1134,  1135,  1136,   237,   769,
    1137,   794,  1138,  1139,  1140,    76,  1141,   572,  1142,   770,
    1143,  1144,   771,   772,  1145,   773,   774,   784,   785,   786,
    1146,   787,   788,   789,  1172,    77,    78,   790,   791,   792,
     797,    79,   798,  1173,   796,   799,   800,   803,   804,   805,
    1174,   807,   775,   776,   777,   778,   779,   780,   781,   810,
     815,   816,   811,   821,   825,  1175,   828,  1176,  1177,   829,
     814,   817,   818,   819,   820,   822,   823,  1178,   824,   826,
     827,    80,    81,  1179,   830,   831,   832,   929,   833,    82,
      83,    84,   834,   835,   836,   837,   838,   839,   840,   841,
     930,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,   853,   854,   855,    85,    86,   856,   931,   857,
     858,   859,   860,   885,   910,   911,   912,   913,    87,    88,
     914,   915,   916,   917,   932,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   927,   928,   933,   934,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   960,   961,
     963,   964,   965,   967,   947,   969,   970,   948,   971,   999,
    1001,  1003,  1195,   296,  1154,  1153,   958,  1099,  1233,  1228,
    1227,   959,   482,   601,  1211,   962,  1196,   968,   966,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   994,   995,   996,
     997,   998,  1198,  1002,   689,  1000,  1005,  1004,  1006,  1014,
    1015,  1016,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1036,  1091,  1037,  1038,   717,  1039,  1040,  1041,
    1042,  1047,  1048,  1049,  1050,  1051,  1214,   700,   723,  1052,
    1213,   761,  1053,  1054,  1229,  1230,  1055,   766,  1056,  1212,
     693,   384,   441,  1189,  1190,   310,  1057,   617,     0,     0,
       0,  1058,  1063,  1064,     0,  1077,  1078,  1079,  1080,  1081,
    1082,  1083,  1089,  1090,     0,  1094,     0,     0,  1092,  1095,
    1100,  1097,  1101,  1122,  1123,  1124,  1149,  1150,  1151,  1152,
    1155,  1168,  1169,  1197,   621,  1202,  1215,  1199,  1225,  1226,
       0,     0,   488,   627,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   525,     0,
       0,     0,     0,     0,   545,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   564
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-720)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     598,   599,   300,   301,   105,     8,     1,     1,   222,     1,
     308,     1,   226,     1,     1,   222,     1,     1,     1,   226,
       1,   222,     1,    51,     1,   226,     1,     1,   224,   222,
      24,     1,     1,   226,   224,     1,   224,    31,     1,   222,
      17,    24,     1,   226,   222,   223,   222,    17,    31,    34,
     226,     1,   224,    37,   222,    32,     1,   222,   226,    36,
     222,   226,    32,   224,   226,   224,    36,    51,    52,    53,
      54,    55,    62,   222,   224,     1,     1,   226,     3,   222,
       5,    62,   224,   226,     1,     1,    70,    62,    73,     1,
     222,   224,    17,   222,   226,   393,   394,   226,   224,     1,
     201,    96,    96,   401,    96,   403,    94,    32,    24,    96,
     224,    36,   410,    96,   224,   413,   224,    96,     1,    96,
     164,   165,    96,     6,     7,   423,   424,    96,   224,    12,
      96,   119,    57,    96,    59,   433,   434,    20,   436,   124,
       1,   118,    58,    26,    69,    28,    29,    30,   118,   124,
     124,    96,    35,   224,   131,   125,   126,   224,    41,    42,
     155,    44,    45,    46,   192,   224,    82,    50,    94,   197,
      86,    96,   224,    56,   224,    36,   155,    60,    61,   224,
      96,    64,    98,    99,    96,   222,   155,   157,   222,   155,
     225,    74,   155,   119,   197,   225,    57,   122,    81,   225,
      83,    62,    85,   225,    87,    88,    89,   124,   164,   165,
     155,     1,   124,   225,   130,   225,   132,   133,   134,   135,
     103,   198,   124,   148,   225,   523,   109,   110,   111,   223,
     113,   223,   225,   116,   117,   151,   213,   120,   223,   223,
       1,   220,   223,   213,   223,   225,   223,   213,   223,   223,
     175,   220,   225,   223,    15,    16,   215,   223,    19,   175,
     223,   122,   221,   225,   223,   215,   136,   137,   213,   152,
     186,   221,    62,   156,     1,    36,   159,   160,   161,   162,
     163,   225,     1,   166,   167,     9,    10,    11,   586,     1,
      17,   216,   136,   137,   592,   593,   213,   223,   223,   597,
     216,   217,    21,    22,   225,    32,   223,   223,    27,    36,
     225,   213,  1031,  1032,  1033,   225,     1,    78,    79,    80,
     183,   184,    34,    84,    92,    93,   209,   210,   211,    90,
      91,   214,    17,   225,   124,    96,   219,   225,   225,   225,
     223,   225,   221,   225,   225,   106,   107,    32,    67,    68,
      65,    36,   225,   225,   225,   222,    75,    76,    77,   225,
     121,    73,   223,   225,   105,     1,   225,   225,   225,    96,
       6,     7,   225,   225,   225,    40,    12,   225,   225,   225,
     225,   105,   101,   102,    20,   225,   147,   225,   225,   225,
      26,   118,    28,    29,    30,   114,   115,   225,    63,    35,
      65,   225,   225,   225,   131,    41,    42,   225,    44,    45,
      46,     1,   124,   225,    50,   225,   225,   225,   225,   225,
      56,   225,   225,   138,    60,    61,   225,   225,    64,   190,
     225,   225,   225,   118,    24,   222,   225,   225,    74,   225,
     125,   126,   225,   108,   225,    81,   225,    83,   225,    85,
     225,    87,    88,    89,   169,   775,   776,   777,   778,   779,
     780,   781,   223,   178,   123,   225,   225,   103,    58,   225,
     185,   198,   157,   109,   110,   111,   225,   113,   225,   225,
     116,   117,   225,   225,   120,   200,   213,   202,   203,   225,
     225,   225,    82,   225,   225,   225,    86,   212,     1,  1097,
       3,   123,     5,   218,   223,   225,    96,   225,    98,    99,
     123,   225,   177,   178,    17,     4,   152,    13,   225,   225,
     156,   225,   225,   159,   160,   161,   162,   163,   213,    32,
     166,   167,   225,    36,   225,   222,    25,    33,   105,   164,
     130,   105,   132,   133,   134,   135,     1,    43,   213,   105,
     105,    40,   105,    49,    57,   164,    59,   164,    47,   105,
     222,   151,   222,   123,   225,   164,    69,   225,   225,   225,
      66,   225,   225,   209,   210,   211,    65,   225,   214,   225,
     225,    36,   225,   219,   225,   175,     0,     1,   225,   105,
       4,   225,   225,    96,   225,   222,   186,     1,   222,   225,
      14,    97,    57,    17,    18,    94,   225,    62,   104,    23,
     225,    15,    16,   225,   225,    19,   164,   225,   105,   122,
      34,   225,   225,   112,    38,    39,   216,   217,    51,   225,
     225,   225,    36,   225,    48,   164,   225,   225,   127,   128,
     129,   225,   225,   139,   123,   148,   164,   164,   105,    63,
     164,   105,   105,   164,   164,   105,   105,    71,    72,   105,
     105,   105,   158,   105,   164,   164,   225,   122,   225,   164,
      51,   164,   175,   164,    78,    79,    80,   222,   164,   164,
      84,    95,   164,   164,   123,   222,    90,    91,   164,   178,
     164,   164,    96,   225,   108,   225,   164,   225,   225,   225,
     189,   225,   106,   107,   225,   194,    51,   222,   123,   105,
     206,   200,   225,   216,   222,   204,   225,   121,   207,   225,
     225,   225,   224,   212,   138,   123,   164,   225,   222,   218,
     222,   164,   222,   123,   164,   149,   150,   225,   164,   153,
     154,   225,   225,   147,   164,   225,   123,   170,   171,   172,
     173,   174,   164,   176,   177,   225,   179,   180,   181,   182,
      65,   225,   185,   225,   187,   188,   189,   225,   191,     1,
     193,   222,   195,   196,   105,   123,   199,   123,   105,   123,
     123,   123,   205,   123,   123,   123,   190,   123,   123,   170,
     171,   172,   173,   174,   208,   176,   177,   222,   179,   180,
     181,   182,   123,   222,   185,    37,   187,   188,   189,   225,
     191,   222,   193,   105,   195,   196,   225,   225,   199,    51,
      52,    53,    54,    55,   205,   170,   171,   172,   173,   174,
     222,   176,   177,   138,   179,   180,   181,   182,    70,   222,
     185,   105,   187,   188,   189,     1,   191,   105,   193,   222,
     195,   196,   222,   222,   199,   222,   222,   222,   222,   222,
     205,   222,   222,   222,   169,    21,    22,   222,   222,   222,
     105,    27,   105,   178,   225,   105,   105,   123,   105,   105,
     185,   105,   140,   141,   142,   143,   144,   145,   146,   222,
     164,   225,   123,   105,   222,   200,   222,   202,   203,   222,
     123,   123,   123,   123,   123,   123,   123,   212,   123,   123,
     123,    67,    68,   218,   123,   123,   222,   123,   222,    75,
      76,    77,   222,   222,   222,   222,   222,   222,   222,   222,
     164,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   101,   102,   222,   225,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   114,   115,
     222,   222,   222,   222,   123,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   105,   123,   123,   123,
     222,   123,   123,   222,   225,   123,   123,   105,   123,   164,
     123,   123,   123,   123,   222,   123,   123,   222,   123,   123,
     123,   123,   105,    71,   993,   991,   222,   953,  1232,  1206,
    1204,   222,   216,   328,  1183,   225,  1092,   222,   225,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   123,   222,   451,   225,   222,   225,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   168,   222,   222,   498,   222,   222,   222,
     222,   222,   222,   222,   222,   222,  1194,   474,   512,   222,
    1192,   550,   222,   222,  1208,  1210,   222,   558,   222,  1188,
     464,   108,   161,  1060,  1062,    89,   222,   360,    -1,    -1,
      -1,   222,   222,   222,    -1,   222,   222,   222,   222,   222,
     222,   222,   222,   222,    -1,   222,    -1,    -1,   226,   225,
     222,   225,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   378,   222,   222,   225,   222,   222,
      -1,    -1,   224,   388,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   288
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   228,     0,     1,     4,    14,    17,    18,    23,    34,
      38,    39,    48,    63,    71,    72,    95,   108,   138,   149,
     150,   153,   154,   208,   229,   234,   239,   263,   269,   283,
     301,   324,   338,   353,   360,   364,   374,   383,   403,   409,
     415,   419,   425,   482,   497,   222,   223,   224,   224,   302,
     384,   410,   224,   420,   224,   339,   404,   325,   224,   224,
     284,   354,   224,   224,   365,   375,   224,     1,    24,    31,
      96,   264,   265,   266,   267,   268,     1,    21,    22,    27,
      67,    68,    75,    76,    77,   101,   102,   114,   115,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   224,   224,   224,     1,    62,   416,   417,
     418,   224,     1,     6,     7,    12,    20,    26,    28,    29,
      30,    35,    41,    42,    44,    45,    46,    50,    56,    60,
      61,    64,    74,    81,    83,    85,    87,    88,    89,   103,
     109,   110,   111,   113,   116,   117,   120,   152,   156,   159,
     160,   161,   162,   163,   166,   167,   209,   210,   211,   214,
     219,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   475,   479,   480,
     481,   224,   224,   224,     1,   215,   270,   271,   272,   273,
     274,     1,    94,   119,   235,   236,   237,   238,   224,   224,
       1,    37,    51,    52,    53,    54,    55,    70,   498,   499,
     500,   501,   502,   503,   504,   505,   506,     1,    24,    58,
      82,    86,    96,    98,    99,   130,   132,   133,   134,   135,
     151,   175,   186,   216,   217,   240,   241,   242,   243,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   224,   224,     1,    96,   361,   362,
     363,   222,   225,   225,   225,   223,   265,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   223,
     484,     1,    15,    16,    19,    36,    78,    79,    80,    84,
      90,    91,    96,   106,   107,   121,   147,   190,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,     1,     3,     5,    17,
      32,    36,    57,    59,    69,    96,   122,   148,   175,   216,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     398,   399,   400,   401,   402,     1,    62,   124,   411,   412,
     413,   414,   225,   223,   417,     1,    96,   124,   421,   422,
     423,   424,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     476,   225,   472,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     223,   427,     1,    17,    32,    36,   118,   125,   126,   157,
     213,   340,   341,   342,   343,   344,   345,   346,   350,   351,
     352,     1,   124,   213,   405,   406,   407,   408,     1,    36,
      57,    62,   122,   326,   330,   331,   332,   336,   337,   222,
     225,   223,   271,   221,   222,   225,   225,   223,   236,     1,
      17,    32,    36,    96,   118,   131,   198,   213,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   297,     1,    34,
      73,   124,   355,   356,   357,   358,   359,   225,   225,   225,
     225,   225,   225,   225,   223,   499,   222,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   223,   241,     1,    96,   155,   213,
     366,   367,   368,   369,   370,     1,    96,   155,   376,   377,
     378,   379,   225,   223,   362,   123,   123,   123,   222,   105,
     105,   164,   105,   231,   231,   105,   105,   105,   164,   164,
     105,   231,   222,   222,   225,   225,   225,   321,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     223,   304,   222,   225,   225,   225,   225,   395,   225,   225,
     225,   225,   225,   225,   225,   225,   223,   386,   225,   225,
     223,   412,   123,   222,   225,   225,   223,   422,   164,   231,
     231,   105,   164,   164,   105,   123,   164,   231,   164,   231,
     105,   105,   105,   164,   164,   164,   231,   105,   105,   231,
     105,   105,   105,   105,   164,   164,   225,   164,   225,   231,
     231,   164,   164,   164,   164,   164,   165,   164,   165,   164,
     164,   231,   231,   123,   231,   164,   164,   164,   222,   222,
     225,   225,   347,   225,   225,   225,   225,   225,   223,   341,
     225,   225,   223,   406,   222,   327,   225,   225,   225,   223,
     331,   164,   222,   224,   123,   123,   222,   222,   225,   225,
     298,   225,   225,   225,   294,   225,   223,   286,   222,   225,
     225,   225,   223,   356,   164,   164,   123,   164,   164,   164,
     231,   222,   123,   164,   105,   105,   123,   123,   123,   123,
     123,   123,   136,   137,   244,   245,   136,   137,   246,   247,
     123,   123,   105,   123,   123,   222,   222,   225,   371,   225,
     223,   367,   222,   225,   380,   223,   377,   123,   222,   222,
     222,   222,   222,   222,   222,   140,   141,   142,   143,   144,
     145,   146,   230,   231,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   105,   105,   231,   225,   105,   105,   105,
     105,   231,   231,   123,   105,   105,   231,   105,   233,   233,
     222,   123,   183,   184,   123,   164,   225,   123,   123,   123,
     123,   105,   123,   123,   123,   222,   123,   123,   222,   222,
     123,   123,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,    51,   170,   171,   172,   173,   174,   176,   177,   179,
     180,   181,   182,   185,   187,   188,   189,   191,   193,   195,
     196,   199,   205,   477,   478,   222,    51,   170,   171,   172,
     173,   174,   176,   177,   179,   180,   181,   182,   185,   187,
     188,   189,   191,   193,   195,   196,   199,   205,   473,   474,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   123,
     164,   225,   123,   105,   123,   123,   123,   222,   123,   123,
     222,   225,   123,   123,   105,   334,   335,   222,   222,     1,
      96,   155,   220,   275,   276,   277,   278,   279,   222,   222,
     123,   164,   225,   123,   123,   123,   225,   123,   222,   123,
     123,   123,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   226,   222,   226,   222,   222,   222,   222,   222,   123,
     225,   123,   222,   123,   225,   222,   222,   230,   230,   230,
     230,   230,   230,   230,   222,   222,   222,    92,    93,   322,
     323,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,     9,    10,    11,   232,   233,   222,   222,   222,   222,
     222,   222,   222,     8,   197,   396,   397,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     226,   222,   226,   222,   222,    13,    33,    43,    49,    66,
      97,   104,   139,   158,   206,   348,   349,   222,   222,   222,
     222,   222,   222,   222,    51,   192,   197,   328,   329,   222,
     222,   168,   226,   333,   222,   225,   280,   225,   223,   276,
     222,   222,     4,    25,    40,    47,    65,    94,   112,   127,
     128,   129,   178,   189,   194,   200,   204,   207,   212,   218,
     299,   300,   222,   222,   222,    51,   170,   171,   172,   173,
     174,   176,   177,   179,   180,   181,   182,   185,   187,   188,
     189,   191,   193,   195,   196,   199,   205,   295,   296,   222,
     222,   222,   222,   245,   247,   222,    65,   138,   169,   178,
     185,   200,   202,   203,   212,   218,   372,   373,   222,   222,
      65,   138,   169,   178,   185,   200,   202,   203,   212,   218,
     381,   382,   222,   226,   232,   232,   232,   222,   226,   478,
     474,   222,   226,   222,   226,   105,   335,   222,   123,   225,
     201,   233,   222,   222,   226,   222,   226,   222,   226,   222,
     226,   323,   397,   349,   329,   222,    40,    63,    65,   108,
     177,   178,   213,   281,   282,   222,   222,   300,   296,   373,
     382,   222,   226,   282
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
        case 26:
/* Line 1787 of yacc.c  */
#line 392 "conf_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 394 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 398 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 402 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 406 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 410 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 414 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 418 "conf_parser.y"
    {
                        (yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[(3) - (3)].number);
                }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 422 "conf_parser.y"
    {
                        (yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 365 + (yyvsp[(3) - (3)].number);
                }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 427 "conf_parser.y"
    { (yyval.number) = 0; }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 428 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 429 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 430 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 431 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 445 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 451 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 477 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.client_ctx)
    SSL_CTX_clear_options(ServerInfo.client_ctx, SSL_OP_NO_SSLv3);
#endif
}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 483 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.client_ctx)
    SSL_CTX_clear_options(ServerInfo.client_ctx, SSL_OP_NO_TLSv1);
#endif
}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 492 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
    SSL_CTX_clear_options(ServerInfo.server_ctx, SSL_OP_NO_SSLv3);
#endif
}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 498 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
    SSL_CTX_clear_options(ServerInfo.server_ctx, SSL_OP_NO_TLSv1);
#endif
}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 506 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx) 
  {
    if (!ServerInfo.rsa_private_key_file)
    {
      conf_error_report("No rsa_private_key_file specified, SSL disabled");
      break;
    }

    if (SSL_CTX_use_certificate_file(ServerInfo.server_ctx, yylval.string,
                                     SSL_FILETYPE_PEM) <= 0 ||
        SSL_CTX_use_certificate_file(ServerInfo.client_ctx, yylval.string,
                                     SSL_FILETYPE_PEM) <= 0)
    {
      report_crypto_errors();
      conf_error_report("Could not open/read certificate file");
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ServerInfo.server_ctx, ServerInfo.rsa_private_key_file,
                                    SSL_FILETYPE_PEM) <= 0 ||
        SSL_CTX_use_PrivateKey_file(ServerInfo.client_ctx, ServerInfo.rsa_private_key_file,
                                    SSL_FILETYPE_PEM) <= 0)
    {
      report_crypto_errors();
      conf_error_report("Could not read RSA private key");
      break;
    }

    if (!SSL_CTX_check_private_key(ServerInfo.server_ctx) ||
        !SSL_CTX_check_private_key(ServerInfo.client_ctx))
    {
      report_crypto_errors();
      conf_error_report("Could not read RSA private key");
      break;
    }
  }
#endif
}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 548 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 1)
  {
    BIO *file;

    if (ServerInfo.rsa_private_key)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;
    }

    if (ServerInfo.rsa_private_key_file)
    {
      MyFree(ServerInfo.rsa_private_key_file);
      ServerInfo.rsa_private_key_file = NULL;
    }

    ServerInfo.rsa_private_key_file = xstrdup(yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      conf_error_report("File open failed, ignoring");
      break;
    }

    ServerInfo.rsa_private_key = PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);

    if (ServerInfo.rsa_private_key == NULL)
    {
      conf_error_report("Couldn't extract key, ignoring");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      conf_error_report("Invalid key, ignoring");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      conf_error_report("Not a 2048 bit key, ignoring");
    }
  }
#endif
}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 607 "conf_parser.y"
    {
/* TBD - XXX: error reporting */
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
  {
    BIO *file = BIO_new_file(yylval.string, "r");

    if (file)
    {
      DH *dh = PEM_read_bio_DHparams(file, NULL, NULL, NULL);

      BIO_free(file);

      if (dh)
      {
        if (DH_size(dh) < 128)
          conf_error_report("Ignoring serverinfo::ssl_dh_param_file -- need at least a 1024 bit DH prime size");
        else
          SSL_CTX_set_tmp_dh(ServerInfo.server_ctx, dh);

        DH_free(dh);
      }
    }
  }
#endif
}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 635 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
    SSL_CTX_set_cipher_list(ServerInfo.server_ctx, yylval.string);
#endif
}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 643 "conf_parser.y"
    {
  /* this isn't rehashable */
  if (conf_parser_ctx.pass == 2 && !ServerInfo.name)
  {
    if (valid_servname(yylval.string))
      ServerInfo.name = xstrdup(yylval.string);
    else
    {
      conf_error_report("Ignoring serverinfo::name -- invalid name. Aborting.");
      exit(0);
    }
  }
}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 658 "conf_parser.y"
    {
  /* this isn't rehashable */
  if (conf_parser_ctx.pass == 2 && !ServerInfo.sid)
  {
    if (valid_sid(yylval.string))
      ServerInfo.sid = xstrdup(yylval.string);
    else
    {
      conf_error_report("Ignoring serverinfo::sid -- invalid SID. Aborting.");
      exit(0);
    }
  }
}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 673 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ServerInfo.description);
    ServerInfo.description = xstrdup(yylval.string);
  }
}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 682 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    ServerInfo.network_name = xstrdup(yylval.string);
  }
}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 696 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ServerInfo.network_desc);
    ServerInfo.network_desc = xstrdup(yylval.string);
  }
}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 705 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip.ss.ss_family = res->ai_family;
      ServerInfo.ip.ss_len = res->ai_addrlen;
      freeaddrinfo(res);

      ServerInfo.specific_ipv4_vhost = 1;
    }
  }
}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 733 "conf_parser.y"
    {
#ifdef IPV6
  if (conf_parser_ctx.pass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost6(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip6, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip6.ss.ss_family = res->ai_family;
      ServerInfo.ip6.ss_len = res->ai_addrlen;
      freeaddrinfo(res);

      ServerInfo.specific_ipv6_vhost = 1;
    }
  }
#endif
}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 763 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].number) < MAXCLIENTS_MIN)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
    conf_error_report(buf);
    ServerInfo.max_clients = MAXCLIENTS_MIN;
  }
  else if ((yyvsp[(3) - (4)].number) > MAXCLIENTS_MAX)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
    conf_error_report(buf);
    ServerInfo.max_clients = MAXCLIENTS_MAX;
  }
  else
    ServerInfo.max_clients = (yyvsp[(3) - (4)].number);
}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 788 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].number) < 9)
  {
    conf_error_report("max_nick_length too low, setting to 9");
    ServerInfo.max_nick_length = 9;
  }
  else if ((yyvsp[(3) - (4)].number) > NICKLEN)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "max_nick_length too high, setting to %d", NICKLEN);
    conf_error_report(buf);
    ServerInfo.max_nick_length = NICKLEN;
  }
  else
    ServerInfo.max_nick_length = (yyvsp[(3) - (4)].number);
}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 810 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].number) < 80)
  {
    conf_error_report("max_topic_length too low, setting to 80");
    ServerInfo.max_topic_length = 80;
  }
  else if ((yyvsp[(3) - (4)].number) > TOPICLEN)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "max_topic_length too high, setting to %d", TOPICLEN);
    conf_error_report(buf);
    ServerInfo.max_topic_length = TOPICLEN;
  }
  else
    ServerInfo.max_topic_length = (yyvsp[(3) - (4)].number);
}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 832 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ServerInfo.hub = yylval.number;
}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 847 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(AdminInfo.name);
    AdminInfo.name = xstrdup(yylval.string);
  }
}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 856 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(AdminInfo.email);
    AdminInfo.email = xstrdup(yylval.string);
  }
}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 865 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(AdminInfo.description);
    AdminInfo.description = xstrdup(yylval.string);
  }
}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 883 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 889 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 893 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 909 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 917 "conf_parser.y"
    {
  block_state.size.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 920 "conf_parser.y"
    {
  block_state.size.value = 0;
}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 925 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 932 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 936 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 940 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_GLINE;
}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 944 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 948 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 952 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 956 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 966 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 973 "conf_parser.y"
    {
  dlink_node *ptr = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0])
    break;
#ifdef HAVE_LIBCRYPTO
  if (!(block_state.file.buf[0] ||
        block_state.rpass.buf[0]))
    break;
#else
  if (!block_state.rpass.buf[0])
    break;
#endif

  DLINK_FOREACH(ptr, block_state.mask.list.head)
  {
    struct MaskItem *conf = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = ptr->data;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);
    split_nuh(&nuh);

    conf        = conf_make(CONF_OPER);
    conf->name  = xstrdup(block_state.name.buf);
    conf->user  = xstrdup(block_state.user.buf);
    conf->host  = xstrdup(block_state.host.buf);

    if (block_state.rpass.buf[0])
      conf->passwd = xstrdup(block_state.rpass.buf);

    conf->flags = block_state.flags.value;
    conf->modes = block_state.modes.value;
    conf->port  = block_state.port.value;
    conf->htype = parse_netmask(conf->host, &conf->addr, &conf->bits);

    conf_add_class_to_conf(conf, block_state.class.buf);

#ifdef HAVE_LIBCRYPTO
    if (block_state.file.buf[0])
    {
      BIO *file = NULL;
      RSA *pkey = NULL;

      if ((file = BIO_new_file(block_state.file.buf, "r")) == NULL)
      {
        conf_error_report("Ignoring rsa_public_key_file -- file doesn't exist");
        break;
      }

      if ((pkey = PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL)) == NULL)
        conf_error_report("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");

      conf->rsa_public_key = pkey;
      BIO_set_close(file, BIO_CLOSE);
      BIO_free(file);
    }
#endif /* HAVE_LIBCRYPTO */
  }
}
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 1048 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 1054 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 1060 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 1066 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 1077 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 1083 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 1089 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 1096 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 1100 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 1104 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN_FULL;
}
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 1108 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 1112 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 1116 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 1120 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 1124 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 1128 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 1132 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 1136 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 1140 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 1144 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 1148 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 1152 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 1156 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 1160 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 1164 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 1168 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 1172 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 1176 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 1180 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 1186 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 1193 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBAL_KILL;
}
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 1197 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTE;
}
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 1201 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_K;
}
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 1205 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 1209 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 1213 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 1217 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_X;
}
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 1221 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLINE;
}
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 1225 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 1229 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 1233 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 1237 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 1241 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALL;
}
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 1245 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 1249 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPER_SPY;
}
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 1253 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 1257 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 1261 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 1271 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 1)
    break;

  reset_block_state();

  block_state.ping_freq.value = DEFAULT_PINGFREQUENCY;
  block_state.con_freq.value  = DEFAULT_CONNECTFREQUENCY;
  block_state.max_total.value = MAXIMUM_LINKS_DEFAULT;
  block_state.max_sendq.value = DEFAULT_SENDQ;
  block_state.max_recvq.value = DEFAULT_RECVQ;
}
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 1283 "conf_parser.y"
    {
  struct ClassItem *class = NULL;

  if (conf_parser_ctx.pass != 1)
    break;

  if (!block_state.class.buf[0])
    break;

  if (!(class = class_find(block_state.class.buf, 0)))
    class = class_make();

  class->active = 1;
  MyFree(class->name);
  class->name = xstrdup(block_state.class.buf);
  class->ping_freq = block_state.ping_freq.value;
  class->max_perip = block_state.max_perip.value;
  class->con_freq = block_state.con_freq.value;
  class->max_total = block_state.max_total.value;
  class->max_global = block_state.max_global.value;
  class->max_local = block_state.max_local.value;
  class->max_ident = block_state.max_ident.value;
  class->max_sendq = block_state.max_sendq.value;
  class->max_recvq = block_state.max_recvq.value;

  if (block_state.min_idle.value > block_state.max_idle.value)
  {
    block_state.min_idle.value = 0;
    block_state.max_idle.value = 0;
    block_state.flags.value &= ~CLASS_FLAGS_FAKE_IDLE;
  }

  class->flags = block_state.flags.value;
  class->min_idle = block_state.min_idle.value;
  class->max_idle = block_state.max_idle.value;

  if (class->number_per_cidr && block_state.number_per_cidr.value)
    if ((class->cidr_bitlen_ipv4 && block_state.cidr_bitlen_ipv4.value) ||
        (class->cidr_bitlen_ipv6 && block_state.cidr_bitlen_ipv6.value))
      if ((class->cidr_bitlen_ipv4 != block_state.cidr_bitlen_ipv4.value) ||
          (class->cidr_bitlen_ipv6 != block_state.cidr_bitlen_ipv6.value))
        rebuild_cidr_list(class);

  class->cidr_bitlen_ipv4 = block_state.cidr_bitlen_ipv4.value;
  class->cidr_bitlen_ipv6 = block_state.cidr_bitlen_ipv6.value;
  class->number_per_cidr = block_state.number_per_cidr.value;
}
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 1349 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 1355 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 1361 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 1367 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 1373 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 1379 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 1385 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 1391 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 1397 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 1403 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[(3) - (4)].number) >= CLIENT_FLOOD_MIN && (yyvsp[(3) - (4)].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 1410 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[(3) - (4)].number) > 32 ? 32 : (yyvsp[(3) - (4)].number);
}
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 1416 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[(3) - (4)].number) > 128 ? 128 : (yyvsp[(3) - (4)].number);
}
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 1422 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 1428 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[(3) - (4)].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 1437 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[(3) - (4)].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 1446 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 1453 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 1457 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 1467 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 1473 "conf_parser.y"
    {
  block_state.flags.value = 0;
}
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 1479 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 1483 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 1487 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 1495 "conf_parser.y"
    { block_state.flags.value = 0; }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 1500 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (block_state.flags.value & LISTENER_SSL)
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.server_ctx)
#endif
      {
        conf_error_report("SSL not available - port closed");
	break;
      }
    add_listener((yyvsp[(1) - (1)].number), block_state.addr.buf, block_state.flags.value);
  }
}
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 1514 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    int i;

    if (block_state.flags.value & LISTENER_SSL)
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.server_ctx)
#endif
      {
        conf_error_report("SSL not available - port closed");
	break;
      }

    for (i = (yyvsp[(1) - (3)].number); i <= (yyvsp[(3) - (3)].number); ++i)
      add_listener(i, block_state.addr.buf, block_state.flags.value);
  }
}
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 1534 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 1540 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 1549 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 1553 "conf_parser.y"
    {
  dlink_node *ptr = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  DLINK_FOREACH(ptr, block_state.mask.list.head)
  {
    struct MaskItem *conf = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = ptr->data;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);
    split_nuh(&nuh);

    conf        = conf_make(CONF_CLIENT);
    conf->user  = xstrdup(collapse(block_state.user.buf));
    conf->host  = xstrdup(collapse(block_state.host.buf));

    if (block_state.rpass.buf[0])
      conf->passwd = xstrdup(block_state.rpass.buf);
    if (block_state.name.buf[0])
      conf->name = xstrdup(block_state.name.buf);

    conf->flags = block_state.flags.value;
    conf->port  = block_state.port.value;

    conf_add_class_to_conf(conf, block_state.class.buf);
    add_conf_by_address(CONF_CLIENT, conf);
  }
}
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 1596 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 1602 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1608 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 1614 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 1625 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 1632 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 1636 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 1640 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 1644 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 1648 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 1652 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 1656 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTGLINE;
}
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 1660 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1664 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1668 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1674 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (strlen(yylval.string) <= HOSTLEN && valid_hostname(yylval.string))
  {
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
    block_state.flags.value |= CONF_FLAGS_SPOOF_IP;
  }
  else
    ilog(LOG_TYPE_IRCD, "Spoof either is too long or contains invalid characters. Ignoring it.");
}
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 1688 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 1697 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 1710 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 1717 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 1728 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 1734 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 1740 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 1755 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (valid_servname(yylval.string))
    {
      struct MaskItem *conf = conf_make(CONF_SERVICE);
      conf->name = xstrdup(yylval.string);
    }
  }
}
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 1770 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 1781 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_ULINE);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);
}
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 1798 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 1804 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
}
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 1823 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 1830 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 1834 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 1838 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 1842 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 1846 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 1850 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 1854 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 1858 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 1862 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 1866 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 1875 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 1884 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 1899 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 1905 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 1912 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 1916 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 1920 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 1924 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 1928 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 1932 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 1936 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 1940 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 1944 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 1948 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 1957 "conf_parser.y"
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.port.value = PORTNUM;
}
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 1965 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;
  struct addrinfo hints, *res;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0] ||
      !block_state.host.buf[0])
    break;

  if (!(block_state.rpass.buf[0] ||
        block_state.spass.buf[0]))
    break;

  if (has_wildcards(block_state.name.buf) ||
      has_wildcards(block_state.host.buf))
    break;

  conf = conf_make(CONF_SERVER);
  conf->port = block_state.port.value;
  conf->flags = block_state.flags.value;
  conf->aftype = block_state.aftype.value;
  conf->host = xstrdup(block_state.host.buf);
  conf->name = xstrdup(block_state.name.buf);
  conf->passwd = xstrdup(block_state.rpass.buf);
  conf->spasswd = xstrdup(block_state.spass.buf);
  conf->cipher_list = xstrdup(block_state.ciph.buf);

  dlinkMoveList(&block_state.leaf.list, &conf->leaf_list);
  dlinkMoveList(&block_state.hub.list, &conf->hub_list);

  if (block_state.bind.buf[0])
  {
    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(block_state.bind.buf, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost(%s)", block_state.bind.buf);
    else
    {
      assert(res != NULL);

      memcpy(&conf->bind, res->ai_addr, res->ai_addrlen);
      conf->bind.ss.ss_family = res->ai_family;
      conf->bind.ss_len = res->ai_addrlen;
      freeaddrinfo(res);
    }
  }

  conf_add_class_to_conf(conf, block_state.class.buf);
  lookup_confhost(conf);
}
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 2031 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 2037 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 2043 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 2049 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].string)[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.spass.buf, yylval.string, sizeof(block_state.spass.buf));
}
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 2062 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].string)[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 2075 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 2081 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 2085 "conf_parser.y"
    {
#ifdef IPV6
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
#endif
}
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 2093 "conf_parser.y"
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 2099 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 2103 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 2109 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 2120 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 2126 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 2132 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 2138 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 2153 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 2157 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.user.buf[0] ||
      !block_state.host.buf[0])
    break;

  conf = conf_make(CONF_KLINE);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);

  if (block_state.rpass.buf[0])
    conf->reason = xstrdup(block_state.rpass.buf);
  else
    conf->reason = xstrdup(CONF_NOREASON);
  add_conf_by_address(CONF_KLINE, conf);
}
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 2182 "conf_parser.y"
    {

  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
}
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 2202 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 2211 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 2215 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.addr.buf[0])
    break;

  if (parse_netmask(block_state.addr.buf, NULL, NULL) != HM_HOST)
  {
    conf = conf_make(CONF_DLINE);
    conf->host = xstrdup(block_state.addr.buf);

    if (block_state.rpass.buf[0])
      conf->reason = xstrdup(block_state.rpass.buf);
    else
      conf->reason = xstrdup(CONF_NOREASON);
    add_conf_by_address(CONF_DLINE, conf);
  }
}
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 2241 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 2247 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 2261 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.string[0] && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
    {
      struct MaskItem *conf = conf_make(CONF_EXEMPT);
      conf->host = xstrdup(yylval.string);

      add_conf_by_address(CONF_EXEMPT, conf);
    }
  }
}
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 2278 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 2282 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0])
    break;

  conf = conf_make(CONF_XLINE);
  conf->name = xstrdup(block_state.name.buf);

  if (block_state.rpass.buf[0])
    conf->reason = xstrdup(block_state.rpass.buf);
  else
    conf->reason = xstrdup(CONF_NOREASON);
}
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 2304 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 2310 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 2354 "conf_parser.y"
    {
  ConfigFileEntry.max_watch = (yyvsp[(3) - (4)].number);
}
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 2359 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 2365 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 2371 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.gline_request_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 2377 "conf_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
}
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 2382 "conf_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
}
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 2387 "conf_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 2392 "conf_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
}
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 2397 "conf_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 2402 "conf_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 2407 "conf_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 2412 "conf_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 2417 "conf_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 2422 "conf_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
}
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 2427 "conf_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
}
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 2432 "conf_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
}
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 2437 "conf_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 2442 "conf_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 2447 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 2453 "conf_parser.y"
    {
  if (((yyvsp[(3) - (4)].number) > 0) && conf_parser_ctx.pass == 1)
  {
    ilog(LOG_TYPE_IRCD, "You haven't read your config file properly.");
    ilog(LOG_TYPE_IRCD, "There is a line in the example conf that will kill your server if not removed.");
    ilog(LOG_TYPE_IRCD, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 2464 "conf_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 2469 "conf_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 2474 "conf_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
}
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 2479 "conf_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 2484 "conf_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 2489 "conf_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 2492 "conf_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 2497 "conf_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 2500 "conf_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 2505 "conf_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 2510 "conf_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 2515 "conf_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 2520 "conf_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 2525 "conf_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 2530 "conf_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 2535 "conf_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 2540 "conf_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 2545 "conf_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
}
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 2550 "conf_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
}
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 2555 "conf_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 2560 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    ConfigFileEntry.egdpool_path = xstrdup(yylval.string);
  }
}
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 2569 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2 && valid_servname(yylval.string))
  {
    MyFree(ConfigFileEntry.service_name);
    ConfigFileEntry.service_name = xstrdup(yylval.string);
  }
}
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 2578 "conf_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 2583 "conf_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 2588 "conf_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 2593 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 2599 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 2602 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 2605 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN_FULL;
}
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 2608 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 2611 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 2614 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 2617 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDDEN;
}
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 2620 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 2623 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 2626 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 2629 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 2632 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 2635 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 2638 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 2641 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 2644 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 2647 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 2650 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 2653 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 2656 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 2659 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REGONLY;
}
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 2662 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FARCONNECT;
}
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 2667 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 2673 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 2676 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 2679 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN_FULL;
}
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 2682 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 2685 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 2688 "conf_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 2691 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 2694 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDDEN;
}
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 2697 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 2700 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 2703 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 2706 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 2709 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 2712 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 2715 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 2718 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 2721 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 2724 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 2727 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 2730 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 2733 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REGONLY;
}
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 2736 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_FARCONNECT;
}
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 2741 "conf_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
}
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 2746 "conf_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 2751 "conf_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
}
    break;

  case 603:
/* Line 1787 of yacc.c  */
#line 2774 "conf_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
    break;

  case 604:
/* Line 1787 of yacc.c  */
#line 2779 "conf_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
}
    break;

  case 605:
/* Line 1787 of yacc.c  */
#line 2784 "conf_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
}
    break;

  case 606:
/* Line 1787 of yacc.c  */
#line 2789 "conf_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
}
    break;

  case 607:
/* Line 1787 of yacc.c  */
#line 2794 "conf_parser.y"
    {
  ConfigChannel.max_chans_per_oper = (yyvsp[(3) - (4)].number);
}
    break;

  case 608:
/* Line 1787 of yacc.c  */
#line 2799 "conf_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
}
    break;

  case 609:
/* Line 1787 of yacc.c  */
#line 2804 "conf_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 610:
/* Line 1787 of yacc.c  */
#line 2809 "conf_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 611:
/* Line 1787 of yacc.c  */
#line 2814 "conf_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 612:
/* Line 1787 of yacc.c  */
#line 2819 "conf_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 613:
/* Line 1787 of yacc.c  */
#line 2824 "conf_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 614:
/* Line 1787 of yacc.c  */
#line 2829 "conf_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 626:
/* Line 1787 of yacc.c  */
#line 2848 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 627:
/* Line 1787 of yacc.c  */
#line 2854 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 628:
/* Line 1787 of yacc.c  */
#line 2860 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
    break;

  case 629:
/* Line 1787 of yacc.c  */
#line 2866 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
    break;

  case 630:
/* Line 1787 of yacc.c  */
#line 2875 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (((yyvsp[(3) - (4)].number) > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, (yyvsp[(3) - (4)].number));
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = (yyvsp[(3) - (4)].number);
  }
}
    break;

  case 631:
/* Line 1787 of yacc.c  */
#line 2889 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 632:
/* Line 1787 of yacc.c  */
#line 2895 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


/* Line 1787 of yacc.c  */
#line 6698 "conf_parser.c"
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


