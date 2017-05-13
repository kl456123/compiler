%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char*);
#define YYSTYPE char *

int ii = 0, itop = -1, istack[100];
int ww = 0, wtop = -1, wstack[100];
int ff = 0, ftop = -1, fstack[100];

#define _BEG_IF     {istack[++itop] = ++ii;}
#define _END_IF     {itop--;}
#define _i          (istack[itop])

#define _BEG_WHILE  {wstack[++wtop] = ++ww;}
#define _END_WHILE  {wtop--;}
#define _w          (wstack[wtop])

#define _BEG_FUNC {fstack[++ftop] = ++ff;}
#define _END_FUNC  {ftop--;}
#define _f          (fstack[ftop])

%}

%token p0   p1   p2   p3   p4   p5   p6   p7   p8   p9   p10
%token p11  p12  p13  p14  p15  p16  p17  p18  p19  p20
%token p21  p22  p23  p24  p25  p26  p27  p28  p29  p30
%token p31  p32  p33  p34  p35  p36  p37  p38  p39  p40
%token p41  p42  p43  p44  p45  p46  p47  p48  p49  p50
%token p51  p52  p53  p54  p55  p56  p57  p58  p59  p60
%token p61  p62  p130 p63  p64  p65  p66  p67  p68  p69  p70
%token p71  p72  p73  p74  p75  p76  p77  p78  p79  p80
%token p81  p82  p83  p84  p85  p86  p98  p99  p100 p101
%token p102 p103 p104 p105 p106 p107 p110 p120 p121 p127
%token p128 p129 p87  p88  p89  p90  p91  p92  p93  p94
%token p95  p96  p97  p108 p109 p111 p112 p113 p114 p115
%token p116 p117 p118 p119 p122 p123 p124 p125 p126 p200
%token p131 p132 p133

%left p121
%left p109
%left p108
%left p118 p119
%left p102 p103 p116 p117
%left p87  p88
%left p89  p90  p133
%left p98

%%


Pro:
    /* empty */             { /* empty */ }
|   Pro Func                { /* empty */ }
| Pro Stmt               { /* empty */ }
;

Func:
  p26 FuncName p91 Args p92 p93 Pro p94 {printf("FUNC_END_%d:\n\n",_f);printf("\tpush @%d\n\tpop %s\n",_f,$2); _END_FUNC;}     
;


FuncName:
    p200                    {_BEG_FUNC;printf("\tvar %s\n",$1); printf("\nFUNC_BEG_%d:\n", _f); }
;


Args:
    /* empty */             { /* empty */ }
|   _Args                   {printf("\n");}
;

_Args:
    p35 p200                { printf("\targ %s", $2); }
|   _Args p104 p35 p200     { printf(", %s", $4); }
;
    


Stmt:
  AssignStmt              { /* empty */ }
|   PrintStmt               { /* empty */ }
|   CallStmt                { /* empty */ }
|   ReturnStmt              { /* empty */ }
|   IfStmt                  { /* empty */ }
|   WhileStmt               { /* empty */ }
|   BreakStmt               { /* empty */ }
|   ContinueStmt            { /* empty */ }
| VarDecls
;


VarDecls:
 VarDecl p101
;

VarDecl:
    p35 p200                { printf("\tvar %s", $2); }
|   VarDecl p104 p200       { printf(", %s", $3); }
|   p35  Equation
;

Equation:
  p200 p121 {printf("\tvar %s\n", $1);} Expr        {printf("\tpop %s\n", $1);}
|  Equation p104 Equation
;



AssignStmt:
    p200 p121 Expr p101     { printf("\tpop %s\n", $1); }
;

PrintStmt:
    p131 p91 Param p92 p101
                            { printf("\tprint %s\n", $3); }
;



CallStmt:
    CallExpr p101           { printf("\tpop\n"); }
;

CallExpr:
    p200 p91 Param p92    { printf("\tcall %s\n", $1); }
;

Param:
    /* empty */             { /* empty */ }
|  Actuals
;

Actuals:
Expr
|   Actuals p104 Expr           { /* empty */ }
;

ReturnStmt:
    p44 Expr p101           { printf("\tret ~\n\n"); }
|   p44 p101                { printf("\tret\n\n"); }
;

IfStmt:
    If TestExpr Then StmtsBlock EndThen EndIf
                            { /* empty */ }
|   If TestExpr Then StmtsBlock EndThen Else StmtsBlock EndIf
                            { /* empty */ }
;

TestExpr:
    p91 Expr p92            { /* empty */ }
;

StmtsBlock:
    p93 Pro p94           { /* empty */ }
;

If:
    p28                     { _BEG_IF; /*printf("_begIf_%d:\n", _i); */}
;

Then:
    /* empty */             { printf("\tjz _elIf_%d\n", _i); }
;

EndThen:
    /* empty */             { printf("\tjmp _endIf_%d\n_elIf_%d:\n", _i, _i); }
;

Else:
    p16                     { /* empty */ }
;

EndIf:
    /* empty */             { printf("_endIf_%d:\n\n", _i); _END_IF; }
;

WhileStmt:
    While TestExpr Do StmtsBlock EndWhile
                            { /* empty */ }
;

While:
    p60                     { _BEG_WHILE; printf("_begWhile_%d:\n", _w); }
;

Do:
    /* empty */             { printf("\tjz _endWhile_%d\n", _w); }
;

EndWhile:
    /* empty */             { printf("\tjmp _begWhile_%d\n_endWhile_%d:\n\n",
                                _w, _w); _END_WHILE; }
;

BreakStmt:
    p3 p101                 { printf("\tjmp _endWhile_%d\n", _w); }
;

ContinueStmt:
    p10 p101                { printf("\tjmp _begWhile_%d\n", _w); }
;

Expr:
    Expr p87  Expr          { printf("\tadd\n"); }
|   Expr p88  Expr          { printf("\tsub\n"); }
|   Expr p89  Expr          { printf("\tmul\n"); }
|   Expr p90  Expr          { printf("\tdiv\n"); }
|   Expr p133 Expr          { printf("\tmod\n"); }
|   Expr p103 Expr          { printf("\tcmpgt\n"); }
|   Expr p102 Expr          { printf("\tcmplt\n"); }
|   Expr p117 Expr          { printf("\tcmpge\n"); }
|   Expr p116 Expr          { printf("\tcmple\n"); }
|   Expr p118 Expr          { printf("\tcmpeq\n"); }
|   Expr p119 Expr          { printf("\tcmpne\n"); }
|   Expr p109 Expr          { printf("\tor\n"); }
|   Expr p108 Expr          { printf("\tand\n"); }
|   p98 Expr                { printf("\tnot\n"); }
|   p74                     { printf("\tpush %s\n", $1); }
|   p200                    { printf("\tpush %s\n", $1); }
|   ReadInt                 { /* empty */ }
|   CallExpr                { /* empty */ }
|   p91 Expr p92            { /* empty */ }
| Annoymous_Func  
;

ReadInt:
    p132 p91 p77 p92        { printf("\treadint %s\n", $3); }
;


Annoymous_Func:
    p26 {_BEG_FUNC; printf("\nFUNC_BEG_%d:\n",_f);} p91 Args p92 p93 Pro p94 {printf("FUNC_END_%d:\n\n",_f); _END_FUNC;}

%%

int main() {
    return yyparse();
}