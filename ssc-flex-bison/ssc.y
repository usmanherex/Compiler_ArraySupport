%{
    #include <stdio.h>
    #include <stdlib.h>
    //contains our functions to be reused later by llvm.
    #include "IR.h"
    
    extern int yyparse();
    extern int yylex();
    extern FILE *yyin;
    void yyerror(const char *err);

    
    #define DEBUGBISON
    //This code is for producing debug output.
    #ifdef DEBUGBISON
        #define debugBison(a) (printf("\n%d \n",a))
        #define debugBisonStr(a) (printf("\n%s \n",a))
    #else
        #define debugBison(a)
    #endif
%}

%union {
    char *identifier;
    double double_literal;
    int integer_literal;
    char *string_literal;
}

%token tok_printd
%token tok_double
%token tok_prints
%token tok_slice
%token tok_new
%token tok_add
%token tok_resize
%token tok_dynamic_array
%token <identifier> tok_identifier
%token <double_literal> tok_double_literal
%token <string_literal> tok_string_literal
%token <integer_literal> tok_integer_literal


%type <double_literal> term expression

%left '+' '-' 
%left '*' '/'
%left '(' ')'

%start root

%%

root:   /* empty */             {debugBison(1);}    
    | prints  root              {debugBison(2);}
    | printd  root              {debugBison(3);}
    | assignment  root          {debugBison(4);}
    | array root                {debugBison(16);}
    | array_assign root         {debugBison(16);}
    | array_declaration root       {debugBison(17);}
    | array_operation root          {debugBison(18);}
    ;

array   : tok_double '[' ']' tok_identifier '=' tok_new tok_double '[' tok_integer_literal ']' ';'     {debugBison(17); createArray($4, $9);}
        | tok_double '[' ',' ']' tok_identifier '=' tok_new tok_double '[' tok_integer_literal',' tok_integer_literal ']' ';'     {debugBison(17); create2DArray($5, $10, $12);}
        | tok_double '[' ']' tok_identifier '=' tok_identifier '.' tok_slice '(' tok_integer_literal ',' tok_integer_literal ')' ';' {debugBison(300); slice1D($6, $4, $10, $12);}
        | tok_double '[' ',' ']' tok_identifier '=' tok_identifier '.' tok_slice '(' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ')' ';' 
            {debugBison(300); slice2D($7, $5, $11, $13, $15, $17);}
        ;

array_assign: tok_identifier '[' tok_integer_literal ']' '=' tok_double_literal ';'     {debugBison(18); setArrayElement($1, $3, $6);}
            | tok_identifier '[' tok_integer_literal','tok_integer_literal ']' '=' tok_double_literal ';'     {debugBison(22); set2DArrayElement($1, $3, $5, $8);}
            | tok_identifier '.' tok_add '(' tok_double_literal ')' ';'     {debugBison(23); addToArray($1, $5);}
            | tok_identifier '.' tok_resize '(' tok_integer_literal ')' ';'     {debugBison(24); resizeArray($1, $5);}
            ;

array_declaration:
      tok_dynamic_array '<' tok_double '>' tok_identifier '=' tok_new tok_dynamic_array '<' tok_double '>' '(' ')' ';'
        {debugBison(8); createDynamicArray($5, 0);}
    | tok_dynamic_array '<' tok_double '>' tok_identifier '=' tok_new tok_dynamic_array '<' tok_double '>' '(' tok_integer_literal ')' ';'
        {debugBison(9); createDynamicArray($5, $13);}
    ;

array_operation:
    add_operation
  | resize_operation
  | assign_operation
  ;

add_operation:
    tok_identifier '.' tok_add '(' expression ')' ';' {debugBison(10); addToArray($1, $5);}
  ;

resize_operation:
    tok_identifier '.' tok_resize '(' tok_integer_literal ')' ';' {debugBison(11); resizeArray($1, $5);}
  ;

assign_operation:
    tok_identifier '[' tok_integer_literal ']' '=' expression ';' {debugBison(12); setArrayElement($1, $3, $6);}
  ;

    
prints: tok_prints '(' tok_string_literal ')' ';'   {debugBison(5); print("%s\n", $3); } 
    ;

printd: tok_printd '(' term ')' ';'     {debugBison(6); print("%lf\n", $3); }
    ;

term:   tok_identifier          {debugBison(7); $$ = getValueFromSymbolTable($1); } 
    | tok_double_literal        {debugBison(8); $$ = $1; }
    | tok_identifier '[' tok_integer_literal ']' {debugBison(102); $$ = getArrayElement($1, $3);}
    | tok_identifier '[' tok_integer_literal ',' tok_integer_literal ']'        {debugBisonStr("Got 2D value"); $$ = get2DArrayElement($1, $3, $5);}
    ;

assignment:  tok_identifier '=' expression ';'  {debugBison(9); setValueInSymbolTable($1, $3); } 
    ;
expression: term                {debugBison(10); $$= $1;}
       | expression '+' expression      {debugBison(11); $$ = performBinaryOperation ($1, $3, '+');}
       | expression '-' expression      {debugBison(12); $$ = performBinaryOperation ($1, $3, '-');}
       | expression '/' expression      {debugBison(13); $$ = performBinaryOperation ($1, $3, '/');}
       | expression '*' expression      {debugBison(14); $$ = performBinaryOperation ($1, $3, '*');}
       | '(' expression ')'         {debugBison(15); $$= $2;}
       ;          
          

%%

void yyerror(const char *err) {
    fprintf(stderr, "\n%s\n", err);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        FILE *fp = fopen(argv[1], "r");
        yyin = fp; //read from file when its name is provided.
    } 
    if (yyin == NULL) { 
        yyin = stdin; //otherwise read from terminal
    }
    
    //yyparse will call internally yylex
    //It will get a token and insert it into AST
    int parserResult = yyparse();
    
    return EXIT_SUCCESS;
}
