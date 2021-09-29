%{
#include<stdio.h>
#include<string.h>
int lines=0,c_letters=0,s_letters=0,aln=0,n=0;
%}

%%
\n { lines++;}
([A-Z])* c_letters++;
([a-z])* s_letters++;
([0-9])*	    {n++;}
([a-z]|[A-Z]|[0-9])*    {aln++;}
%%

int main(void)
{
yyin=fopen("test.txt","r");
yylex();
printf("Alphanumeric:%d\n alphabets:%d\n numbers:%d\n line:%d\n",aln,c_letters+s_letters,n,lines+1);
return 0;
}
int yywrap(void)
{
	return 1;
}