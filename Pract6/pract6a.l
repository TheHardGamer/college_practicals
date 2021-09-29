%{
#include<stdio.h>
int lines=0, words=0,s_letters=0,c_letters=0, num=0, spl_char=0,total=0;
%}

%% 
\n { lines++; lines++;}
[\t ' '] words++;
[A-Z] c_letters++;
[a-z] s_letters++;
%%


int main(void)
{
yyin= fopen("test.txt","r");
yylex();
printf(" This File contains ...");
printf("\n\t%d characters", s_letters+c_letters);
printf("\n\t%d lines", lines);
printf("\n\t%d words",words);
return 0;
}
 
int yywrap()
{
return(1);
}