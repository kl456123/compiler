%{
#define YYSTYPE char *
#include "y.tab.h"
#include "string.h"
int cur_line = 1;
void yyerror(const char *msg);
void unrecognized_char(char c);
void unterminate_string();
%}


%%


\n 			{ cur_line++; }
[ \t\r]+	{/* ignore */ }


\/\/[^\n]* 	{/* ignore */ }
"/*"[^*]*[*]+([^*/][^*]*[*]+)*[*]*"/"	{/* ignore */ }


\"(\\.|[^"\\])*\" {yylval=strdup(yytext); return p77;}
\'(\\.|[^'\\])*\' {yylval=strdup(yytext); return p77;}


abstract    { return p0;}
arguments   { return p1;}
boolean     { return p2;}
break       { return p3;}
byte        { return p4;}
case        { return p5;}
catch       { return p6;}
char        { return p7;}
class       { return p8;}
const       { return p9;}
continue    { return p10;}
debugger    { return p11;}
default     { return p12;}
delete      { return p13;}
do          { return p14;}
double 		{ return p15;}
else 		{ return p16;}
enum 		{ return p17;}
eval 		{ return p18;}
export 		{ return p19;}
extends 	{ return p20;}
false 		{ return p21;}
final 		{ return p22;}
finally 	{ return p23;}
float 		{ return p24;}
for 		{ return p25;}
function 	{ return p26;}
goto 		{ return p27;}
if 			{ return p28;}
implements 	{ return p29;}
import 		{ return p30;}
in 			{ return p31;}
instanceof 	{ return p32;}
int 		{ return p33;}
interface 	{ return p34;}
let 		{ return p35;}
long 		{ return p36;}
native 		{ return p37;}
new 		{ return p38;}
null 		{ return p39;}
package 	{ return p40;}
private 	{ return p41;}
protected 	{ return p42;}
public 		{ return p43;}
return 		{ return p44;}
short 		{ return p45;}
static 		{ return p46;}
super 		{ return p47;}
switch 		{ return p48;}
synchronized { return p49;}
this 		{ return p50;}
throw 		{ return p51;}
throws 		{ return p52;}
transient 	{ return p53;}
true 		{ return p54;}
try 		{ return p55;}
typeof 		{ return p56;}
var 		{ return p57;}
void 		{ return p58;}
volatile 	{ return p59;}
while 		{ return p60;}
with 		{ return p61;}
yield 		{ return p62;}
from 		{ return p130;}
print 		{ return p131;}
prompt		{ return p132;}


Array 		     { return p63;}
Date 		     { return p64;}
hasOwnProperty   { return p65;}
Infinity 	     { return p66;}
isFinite 		 { return p67;}
isNaN 			 { return p68;}
isPrototypeOf 	 { return p69;}
length 			 { return p70;}
Math 			 { return p71;}
NaN 			 { return p72;}
name 			 { return p73;}
[0-9]+ 		 {yylval=strdup(yytext); return p74;}
[0-9]+\.[0-9]* {yylval=strdup(yytext); return p74;}
Object 			 { return p75;}
prototype 		 { return p76;}
toString 		 { return p78;}
undefined 		 { return p79;}
valueOf 		 { return p80;}


getClass 		 { return p81;}
java 		     { return p82;}
JavaArray 		 { return p83;}
javaClass 		 { return p84;}
JavaObject 		 { return p85;}
JavaPackage 	 { return p86;}


!		{ return p98;}
\$ 		{ return p99;}
: 		{ return p100;}
; 		{ return p101;}
\< 		{ return p102;}
\> 		{ return p103;}
, 		{ return p104;}
\[ 		{ return p105;}
\] 		{ return p106;}
& 		{ return p107;}
~ 		{ return p110;}
\^ 		{ return p120;}
= 		{ return p121;}
\? 		{ return p127;}
\| 		{ return p128;}
@ 		{ return p129;}


\+ 		{ return p87;}
- 		{ return p88;}
\* 		{ return p89;}
\/ 		{ return p90;}
\( 		{ return p91;}
\) 		{ return p92;}
\{ 		{ return p93;}
\} 		{ return p94;}
\" 		{ return p95;}
' 		{ return p96;}
\. 		{ return p97;}
&& 		{ return p108;}
\|\| 	{ return p109;}
\++ 	{ return p111;}
--		{ return p112;}
\<< 	{ return p113;}
>> 		{ return p114;}
\>>> 	{ return p115;}
\<= 	{ return p116;}
>= 		{ return p117;}
== 		{ return p118;}
!= 		{ return p119;}
\+= 	{ return p122;}
-= 		{ return p123;}
\*= 	{ return p124;}
\/= 	{ return p125;}
%= 		{ return p126;}
%		{ return p133;}


[_a-zA-Z][_a-zA-Z0-9]* { yylval = strdup(yytext); return p200; }


\"[^\"\n]*		{ unterminate_string(); }
.         		{ unrecognized_char(yytext[0]); }



%%


int yywrap(void) {
    return 1;
}

void unrecognized_char(char c) {
    char buf[32] = "Unrecognized character: ?";
    buf[24] = c;
    yyerror(buf);
}

void unterminate_string() {
    	yyerror("mssing '\"'! ");
}

void yyerror(const char *msg) {
    printf("Error at line %d:\n\t%s\n", cur_line, msg);
    exit(1);
}
