/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    DO = 260,
    WHILE = 261,
    ASSIGN = 262,
    STAR = 263,
    BAR = 264,
    ADD = 265,
    MINUS = 266,
    EQUAL_OP = 267,
    NOT_EQUAL_OP = 268,
    GT_OP = 269,
    GTE_OP = 270,
    LT_OP = 271,
    LTE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    NOT_OP = 275,
    OPEN_BRACES = 276,
    CLOSE_BRACES = 277,
    OPEN_PAREN = 278,
    CLOSE_PAREN = 279,
    OPEN_BRACKET = 280,
    CLOSE_BRACKET = 281,
    PLAY = 282,
    NEW_LINE = 283,
    NOTE = 284,
    VAR = 285,
    INT_NAME = 286,
    CHORD_NAME = 287,
    SET_NAME = 288,
    NUMBER = 289,
    SET = 290,
    CHORD = 291
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define DO 260
#define WHILE 261
#define ASSIGN 262
#define STAR 263
#define BAR 264
#define ADD 265
#define MINUS 266
#define EQUAL_OP 267
#define NOT_EQUAL_OP 268
#define GT_OP 269
#define GTE_OP 270
#define LT_OP 271
#define LTE_OP 272
#define AND_OP 273
#define OR_OP 274
#define NOT_OP 275
#define OPEN_BRACES 276
#define CLOSE_BRACES 277
#define OPEN_PAREN 278
#define CLOSE_PAREN 279
#define OPEN_BRACKET 280
#define CLOSE_BRACKET 281
#define PLAY 282
#define NEW_LINE 283
#define NOTE 284
#define VAR 285
#define INT_NAME 286
#define CHORD_NAME 287
#define SET_NAME 288
#define NUMBER 289
#define SET 290
#define CHORD 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:1909  */

    int number; 
    struct Chord * chord;
    struct Set * set;
    char * strVal;

#line 133 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
