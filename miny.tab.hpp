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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 37 "miny.ypp"
typedef union YYSTYPE { 
   int code_;
   double real_;
   char * str_;
   struct Object * node_;
 } YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 161 "miny.tab.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



