%{
    //Will be created by Bison later on but we will be creating it at the moment for testing.
    #include "ssc.tab.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    extern void yyerror(const char *msg);
    
    // #define DEBUGSSC
    //This code is for producing debug output.
    #ifdef DEBUGSSC
        #define debugFlex(a) (printf("\n%d: Token=<ID, lexeme>=<%d, %s>\n",yylineno, a, yytext))
    #else
        #define debugFlex(a)
    #endif
%}

%option yylineno 
%option noyywrap

%%

"printd"                {debugFlex(tok_printd); return tok_printd;}
"prints"                {debugFlex(tok_prints); return tok_prints;}
"while"                {debugFlex(tok_while); return tok_while;}
"Slice"                 {debugFlex(tok_slice); return tok_slice;}
"double"                {debugFlex(tok_double); return tok_double;}
"new"                   {debugFlex(tok_new); return tok_new;}
"Add"                   {debugFlex(tok_add); return tok_add;}
"Resize"                {debugFlex(tok_resize); return tok_resize;}
"DynamicArray"          {debugFlex(tok_dynamic_array); return tok_dynamic_array;}
"Iterator"              {debugFlex(tok_iterator); return tok_iterator;}
"hasNext"               {debugFlex(tok_hasNext); return tok_hasNext;}
"next"                  {debugFlex(tok_next); return tok_next;}
"sum"                   {debugFlex(tok_sum); return tok_sum;}
"min"                   {debugFlex(tok_min); return tok_min;}
"max"                   {debugFlex(tok_max); return tok_max;}
"avg"                   {debugFlex(tok_avg); return tok_avg;}
"Serialize"             {debugFlex(tok_serialize); return tok_serialize;}
"Deserialize"           {debugFlex(tok_deserialize); return tok_deserialize;}
"View"                  {debugFlex(tok_view); return tok_view;}
[a-zA-Z][a-zA-Z0-9_]*   {debugFlex(tok_identifier); yylval.identifier=strdup(yytext); return tok_identifier;}
[0]|[1-9][0-9]*         {debugFlex(tok_integer_literal); yylval.integer_literal=atoi(yytext); return tok_integer_literal;}
[0-9]+(\.[0-9]+)?       {debugFlex(tok_double_literal); yylval.double_literal=atof(yytext); return tok_double_literal;}
\"[^"]*\"               {debugFlex(tok_string_literal); yylval.string_literal=strdup(yytext); return tok_string_literal;}
\/\/.*                  {;}
[ \n\r\t]               {;}
"}"|"{"|","|"]"|"["|"+"|"-"|"*"|"\/"|"="|";"|"("|")"|"<"|">"|"\." {debugFlex(yytext[0]); return yytext[0];} 
.                       {debugFlex(-1); yyerror("this is a illegal lexeme"); exit(EXIT_FAILURE);}
%%

