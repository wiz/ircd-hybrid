/* A Bison parser, made by GNU Bison 2.6.2.33-cc5a9.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
     HIDE_SPOOF_IPS = 310,
     HOST = 311,
     HUB = 312,
     HUB_MASK = 313,
     IGNORE_BOGUS_TS = 314,
     INVISIBLE_ON_CONNECT = 315,
     IP = 316,
     KILL = 317,
     KILL_CHASE_TIME_LIMIT = 318,
     KLINE = 319,
     KLINE_EXEMPT = 320,
     KNOCK_DELAY = 321,
     KNOCK_DELAY_CHANNEL = 322,
     LEAF_MASK = 323,
     LINKS_DELAY = 324,
     LISTEN = 325,
     T_LOG = 326,
     MAX_ACCEPT = 327,
     MAX_BANS = 328,
     MAX_CHANS_PER_OPER = 329,
     MAX_CHANS_PER_USER = 330,
     MAX_GLOBAL = 331,
     MAX_IDENT = 332,
     MAX_LOCAL = 333,
     MAX_NICK_CHANGES = 334,
     MAX_NICK_TIME = 335,
     MAX_NUMBER = 336,
     MAX_TARGETS = 337,
     MAX_WATCH = 338,
     MESSAGE_LOCALE = 339,
     MIN_NONWILDCARD = 340,
     MIN_NONWILDCARD_SIMPLE = 341,
     MODULE = 342,
     MODULES = 343,
     NAME = 344,
     NEED_PASSWORD = 345,
     NETWORK_DESC = 346,
     NETWORK_NAME = 347,
     NICK = 348,
     NICK_CHANGES = 349,
     NO_CREATE_ON_SPLIT = 350,
     NO_JOIN_ON_SPLIT = 351,
     NO_OPER_FLOOD = 352,
     NO_TILDE = 353,
     NUMBER = 354,
     NUMBER_PER_CIDR = 355,
     NUMBER_PER_IP = 356,
     OPERATOR = 357,
     OPERS_BYPASS_CALLERID = 358,
     OPER_ONLY_UMODES = 359,
     OPER_PASS_RESV = 360,
     OPER_SPY_T = 361,
     OPER_UMODES = 362,
     JOIN_FLOOD_COUNT = 363,
     JOIN_FLOOD_TIME = 364,
     PACE_WAIT = 365,
     PACE_WAIT_SIMPLE = 366,
     PASSWORD = 367,
     PATH = 368,
     PING_COOKIE = 369,
     PING_TIME = 370,
     PING_WARNING = 371,
     PORT = 372,
     QSTRING = 373,
     QUIET_ON_BAN = 374,
     REASON = 375,
     REDIRPORT = 376,
     REDIRSERV = 377,
     REGEX_T = 378,
     REHASH = 379,
     REMOTE = 380,
     REMOTEBAN = 381,
     RESTRICT_CHANNELS = 382,
     RSA_PRIVATE_KEY_FILE = 383,
     RSA_PUBLIC_KEY_FILE = 384,
     SSL_CERTIFICATE_FILE = 385,
     SSL_DH_PARAM_FILE = 386,
     T_SSL_CLIENT_METHOD = 387,
     T_SSL_SERVER_METHOD = 388,
     T_SSLV3 = 389,
     T_TLSV1 = 390,
     RESV = 391,
     RESV_EXEMPT = 392,
     SECONDS = 393,
     MINUTES = 394,
     HOURS = 395,
     DAYS = 396,
     WEEKS = 397,
     SENDQ = 398,
     SEND_PASSWORD = 399,
     SERVERHIDE = 400,
     SERVERINFO = 401,
     IRCD_SID = 402,
     TKLINE_EXPIRE_NOTICES = 403,
     T_SHARED = 404,
     T_CLUSTER = 405,
     TYPE = 406,
     SHORT_MOTD = 407,
     SPOOF = 408,
     SPOOF_NOTICE = 409,
     STATS_E_DISABLED = 410,
     STATS_I_OPER_ONLY = 411,
     STATS_K_OPER_ONLY = 412,
     STATS_O_OPER_ONLY = 413,
     STATS_P_OPER_ONLY = 414,
     TBOOL = 415,
     TMASKED = 416,
     TS_MAX_DELTA = 417,
     TS_WARN_DELTA = 418,
     TWODOTS = 419,
     T_ALL = 420,
     T_BOTS = 421,
     T_SOFTCALLERID = 422,
     T_CALLERID = 423,
     T_CCONN = 424,
     T_CCONN_FULL = 425,
     T_SSL_CIPHER_LIST = 426,
     T_DEAF = 427,
     T_DEBUG = 428,
     T_DLINE = 429,
     T_EXTERNAL = 430,
     T_FULL = 431,
     T_INVISIBLE = 432,
     T_IPV4 = 433,
     T_IPV6 = 434,
     T_LOCOPS = 435,
     T_MAX_CLIENTS = 436,
     T_NCHANGE = 437,
     T_OPERWALL = 438,
     T_RECVQ = 439,
     T_REJ = 440,
     T_SERVER = 441,
     T_SERVNOTICE = 442,
     T_SET = 443,
     T_SKILL = 444,
     T_SPY = 445,
     T_SSL = 446,
     T_UMODES = 447,
     T_UNAUTH = 448,
     T_UNDLINE = 449,
     T_UNLIMITED = 450,
     T_UNRESV = 451,
     T_UNXLINE = 452,
     T_GLOBOPS = 453,
     T_WALLOP = 454,
     T_RESTART = 455,
     T_SERVICE = 456,
     T_SERVICES_NAME = 457,
     THROTTLE_TIME = 458,
     TRUE_NO_OPER_FLOOD = 459,
     UNKLINE = 460,
     USER = 461,
     USE_EGD = 462,
     USE_LOGGING = 463,
     VHOST = 464,
     VHOST6 = 465,
     XLINE = 466,
     WARN_NO_NLINE = 467,
     T_SIZE = 468,
     T_FILE = 469
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
#define HIDE_SPOOF_IPS 310
#define HOST 311
#define HUB 312
#define HUB_MASK 313
#define IGNORE_BOGUS_TS 314
#define INVISIBLE_ON_CONNECT 315
#define IP 316
#define KILL 317
#define KILL_CHASE_TIME_LIMIT 318
#define KLINE 319
#define KLINE_EXEMPT 320
#define KNOCK_DELAY 321
#define KNOCK_DELAY_CHANNEL 322
#define LEAF_MASK 323
#define LINKS_DELAY 324
#define LISTEN 325
#define T_LOG 326
#define MAX_ACCEPT 327
#define MAX_BANS 328
#define MAX_CHANS_PER_OPER 329
#define MAX_CHANS_PER_USER 330
#define MAX_GLOBAL 331
#define MAX_IDENT 332
#define MAX_LOCAL 333
#define MAX_NICK_CHANGES 334
#define MAX_NICK_TIME 335
#define MAX_NUMBER 336
#define MAX_TARGETS 337
#define MAX_WATCH 338
#define MESSAGE_LOCALE 339
#define MIN_NONWILDCARD 340
#define MIN_NONWILDCARD_SIMPLE 341
#define MODULE 342
#define MODULES 343
#define NAME 344
#define NEED_PASSWORD 345
#define NETWORK_DESC 346
#define NETWORK_NAME 347
#define NICK 348
#define NICK_CHANGES 349
#define NO_CREATE_ON_SPLIT 350
#define NO_JOIN_ON_SPLIT 351
#define NO_OPER_FLOOD 352
#define NO_TILDE 353
#define NUMBER 354
#define NUMBER_PER_CIDR 355
#define NUMBER_PER_IP 356
#define OPERATOR 357
#define OPERS_BYPASS_CALLERID 358
#define OPER_ONLY_UMODES 359
#define OPER_PASS_RESV 360
#define OPER_SPY_T 361
#define OPER_UMODES 362
#define JOIN_FLOOD_COUNT 363
#define JOIN_FLOOD_TIME 364
#define PACE_WAIT 365
#define PACE_WAIT_SIMPLE 366
#define PASSWORD 367
#define PATH 368
#define PING_COOKIE 369
#define PING_TIME 370
#define PING_WARNING 371
#define PORT 372
#define QSTRING 373
#define QUIET_ON_BAN 374
#define REASON 375
#define REDIRPORT 376
#define REDIRSERV 377
#define REGEX_T 378
#define REHASH 379
#define REMOTE 380
#define REMOTEBAN 381
#define RESTRICT_CHANNELS 382
#define RSA_PRIVATE_KEY_FILE 383
#define RSA_PUBLIC_KEY_FILE 384
#define SSL_CERTIFICATE_FILE 385
#define SSL_DH_PARAM_FILE 386
#define T_SSL_CLIENT_METHOD 387
#define T_SSL_SERVER_METHOD 388
#define T_SSLV3 389
#define T_TLSV1 390
#define RESV 391
#define RESV_EXEMPT 392
#define SECONDS 393
#define MINUTES 394
#define HOURS 395
#define DAYS 396
#define WEEKS 397
#define SENDQ 398
#define SEND_PASSWORD 399
#define SERVERHIDE 400
#define SERVERINFO 401
#define IRCD_SID 402
#define TKLINE_EXPIRE_NOTICES 403
#define T_SHARED 404
#define T_CLUSTER 405
#define TYPE 406
#define SHORT_MOTD 407
#define SPOOF 408
#define SPOOF_NOTICE 409
#define STATS_E_DISABLED 410
#define STATS_I_OPER_ONLY 411
#define STATS_K_OPER_ONLY 412
#define STATS_O_OPER_ONLY 413
#define STATS_P_OPER_ONLY 414
#define TBOOL 415
#define TMASKED 416
#define TS_MAX_DELTA 417
#define TS_WARN_DELTA 418
#define TWODOTS 419
#define T_ALL 420
#define T_BOTS 421
#define T_SOFTCALLERID 422
#define T_CALLERID 423
#define T_CCONN 424
#define T_CCONN_FULL 425
#define T_SSL_CIPHER_LIST 426
#define T_DEAF 427
#define T_DEBUG 428
#define T_DLINE 429
#define T_EXTERNAL 430
#define T_FULL 431
#define T_INVISIBLE 432
#define T_IPV4 433
#define T_IPV6 434
#define T_LOCOPS 435
#define T_MAX_CLIENTS 436
#define T_NCHANGE 437
#define T_OPERWALL 438
#define T_RECVQ 439
#define T_REJ 440
#define T_SERVER 441
#define T_SERVNOTICE 442
#define T_SET 443
#define T_SKILL 444
#define T_SPY 445
#define T_SSL 446
#define T_UMODES 447
#define T_UNAUTH 448
#define T_UNDLINE 449
#define T_UNLIMITED 450
#define T_UNRESV 451
#define T_UNXLINE 452
#define T_GLOBOPS 453
#define T_WALLOP 454
#define T_RESTART 455
#define T_SERVICE 456
#define T_SERVICES_NAME 457
#define THROTTLE_TIME 458
#define TRUE_NO_OPER_FLOOD 459
#define UNKLINE 460
#define USER 461
#define USE_EGD 462
#define USE_LOGGING 463
#define VHOST 464
#define VHOST6 465
#define XLINE 466
#define WARN_NO_NLINE 467
#define T_SIZE 468
#define T_FILE 469



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2077 of yacc.c  */
#line 109 "conf_parser.y"

  int number;
  char *string;


/* Line 2077 of yacc.c  */
#line 491 "conf_parser.h"
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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
