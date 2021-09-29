%{ 
%} 

%% 
"<"[^>]*> {printf("%s\n", yytext); }
. ; 
%%   

int yywrap(){}
int main(int argc, char*argv[]) 
{ 
    
    yyin=fopen("test1.txt","r"); 
    yylex(); 
    return 0; 
} 