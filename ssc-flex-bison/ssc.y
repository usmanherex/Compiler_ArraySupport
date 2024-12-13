%{
    #include <stdio.h>
    #include <stdlib.h>
    //contains our functions to be reused later by llvm.
    #include "IR.h"
    
    extern int yyparse();
    extern int yylex();
    extern FILE *yyin;
    void yyerror(const char *err);

    
    //#define DEBUGBISON
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
    struct DestructuringList *destructuring_list;
}

%token tok_printd
%token tok_double
%token tok_prints
%token tok_iterator
%token tok_hasNext
%token tok_next
%token tok_slice
%token tok_while
%token tok_new
%token tok_add
%token tok_resize
%token tok_dynamic_array
%token tok_sum
%token tok_min
%token tok_max
%token tok_avg
%token tok_serialize
%token tok_deserialize
%token tok_view
%token <identifier> tok_identifier
%token <double_literal> tok_double_literal
%token <string_literal> tok_string_literal
%token <integer_literal> tok_integer_literal


%type <double_literal> term expression
%type <destructuring_list> destructuring_list

%left '+' '-' 
%left '*' '/'
%left '(' ')'

%start root

%%

root:   /* empty */             {debugBison(1);}    
    | prints  root              {debugBison(2);}
    | printd  root              {debugBison(3);}
    | iterator root             {debugBison(1000);}
    | assignment  root          {debugBison(4);}
    | array root                {debugBison(16);}
    | array_assign root         {debugBison(16);}
    | array_declaration root    {debugBison(17);}
    | array_operation root      {debugBison(18);}
    | statistical_operation root {debugBison(19);}
    | array_view root            {debugBison(39);}
    //| array_view_assign root     {debugBison(49);}
    | array_destructuring root {debugBison(41);}
    ; 

array   : tok_double '[' ']' tok_identifier '=' tok_new tok_double '[' tok_integer_literal ']' ';'     {debugBison(17); createArray($4, $9);}
        | tok_double '[' ',' ']' tok_identifier '=' tok_new tok_double '[' tok_integer_literal',' tok_integer_literal ']' ';'     {debugBison(17); create2DArray($5, $10, $12);}
        | tok_double '[' ']' tok_identifier '=' tok_identifier '.' tok_slice '(' tok_integer_literal ',' tok_integer_literal ')' ';' {debugBison(300); slice1D($6, $4, $10, $12);}
        | tok_double '[' ',' ']' tok_identifier '=' tok_identifier '.' tok_slice '(' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ')' ';' 
            {debugBison(300); slice2D($7, $5, $11, $13, $15, $17);}
        ;

array_assign: 
              //tok_identifier '[' tok_integer_literal ']' '=' expression ';' {debugBison(12); setArrayElement($1, $3, $6);}
             tok_identifier '[' tok_integer_literal','tok_integer_literal ']' '=' tok_double_literal ';'     
                {
                    debugBison(22); 
                    if (arrayViewTable.find($1) != arrayViewTable.end()) {
                        setArrayViewElement($1, $3, $5, $8);
                    } else {
                        set2DArrayElement($1, $3, $5, $8);
                    }
                }
            | tok_double '[' ']' tok_identifier '=' tok_identifier '+' tok_identifier ';'     {debugBison(90); addArrays($4, $6, $8);}
            | tok_double '[' ']' tok_identifier '=' tok_identifier '-' tok_identifier ';'     {debugBison(90); subtractArrays($4, $6, $8);}
            | tok_double '[' ',' ']' tok_identifier '=' tok_identifier '*' tok_identifier ';'     {debugBison(90); multiplyArraysToMatrix($5, $7, $9);}
            //| tok_identifier '.' tok_add '(' tok_double_literal ')' ';'     {debugBison(23); addToArray($1, $5);}
            //| tok_identifier '.' tok_resize '(' tok_integer_literal ')' ';'     {debugBison(24); resizeArray($1, $5);}
            ;

array_declaration:
      tok_dynamic_array '<' tok_double '>' tok_identifier '=' tok_new tok_dynamic_array '<' tok_double '>' '(' ')' ';'
        {debugBison(8); createArray($5, 0);}
    | tok_dynamic_array '<' tok_double '>' tok_identifier '=' tok_new tok_dynamic_array '<' tok_double '>' '(' tok_integer_literal ')' ';'
        {debugBison(9); createArray($5, $13);}
    ;

array_view: tok_identifier '=' tok_identifier '.' tok_view '(' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ')' ';'
    {debugBison(30); createArrayView($1, $3, $7, $9, $11, $13);}
  ;

// array_view_assign: tok_identifier '[' tok_integer_literal ',' tok_integer_literal ']' '=' tok_double_literal ';'
//    {debugBison(31); setArrayViewElement($1, $3, $5, $8);}
//  ;   

array_destructuring: '[' destructuring_list ']' '=' tok_identifier ';'
                     {debugBison(40); destructureArray($5, $2);}
                   ;

destructuring_list: tok_identifier
                    {$$ = createDestructuringList($1);}
                  | destructuring_list ',' tok_identifier
                    {$$ = addToDestructuringList($1, $3);}
                  ;

array_operation:
    add_operation
  | resize_operation
  | assign_operation
  | serialize_operation
  | deserialize_operation
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

serialize_operation:
    tok_identifier '=' tok_serialize '(' tok_identifier ')' ';' {debugBison(25); setValueInSymbolTable($1, serializeArray($5));}
  ;
deserialize_operation:
    tok_deserialize '(' tok_identifier ',' tok_identifier ')' ';' {debugBison(26); deserializeArray($3, getStringFromSymbolTable($5));}
  ;  

statistical_operation:
    tok_identifier '=' tok_sum '(' tok_identifier ')' ';' {debugBison(20); setValueInSymbolTable($1, sumArray($5));}
    | tok_identifier '=' tok_min '(' tok_identifier ')' ';' {debugBison(21); setValueInSymbolTable($1, minArray($5));}
    | tok_identifier '=' tok_max '(' tok_identifier ')' ';' {debugBison(22); setValueInSymbolTable($1, maxArray($5));}
    | tok_identifier '=' tok_avg '(' tok_identifier ')' ';' {debugBison(23); setValueInSymbolTable($1, avgArray($5));}
    ;  

    
prints: tok_prints '(' tok_string_literal ')' ';'   {debugBison(5); print("%s\n", $3); } 
    | tok_prints '(' tok_identifier ')' ';'   {debugBison(5); print("%s\n", getStringFromSymbolTable($3)); } 
    ;

printd: tok_printd '(' term ')' ';'     {debugBison(6); print("%lf\n", $3); }
    ;

term:   tok_identifier          {debugBison(7); $$ = getDoubleFromSymbolTable($1); } 
    | tok_double_literal        {debugBison(8); $$ = $1; }
    | tok_identifier '[' tok_integer_literal ']' {debugBison(102); $$ = getArrayElement($1, $3);}
    | tok_identifier '.' tok_next '(' ')' {debugBison(1002); $$ = next($1);}
    | tok_identifier '[' tok_integer_literal ',' tok_integer_literal ']'        
        {
            // debugBisonStr("Got 2D value or Array View"); 
            if (arrayViewTable.find($1) != arrayViewTable.end()) {
                $$ = getArrayViewElement($1, $3, $5);
            } else {
                $$ = get2DArrayElement($1, $3, $5);
            }
        }
    ;
iterator: tok_identifier '=' tok_iterator '(' tok_identifier ')' ';'  {debugBison(1001); createIterator($1, $5);} 
        | tok_while '(' tok_identifier '.' tok_hasNext '(' ')' ')' '{' assignment '}' {debugBison(1003); hasNext($3);}
        ;

assignment : tok_identifier '=' expression ';'  {debugBison(9); setValueInSymbolTable($1, $3); } 
           | tok_identifier '=' tok_identifier '.' '.' tok_identifier ';'  {debugBison(9); dotProductArrays($6, $3, $1); } 
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
