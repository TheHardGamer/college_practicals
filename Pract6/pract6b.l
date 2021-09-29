%{
    int vow_count=0;
    int const_count =0;
%}
  
%%
[aeiouAEIOU] {vow_count++;}
[a-zA-Z] {const_count++;}
%%


int main(void)
{
    yyin= fopen("test.txt","r");
    yylex();
    printf("\nNumber of vowels are:  %d\n", vow_count);
    printf("\nNumber of consonants are:  %d\n", const_count);
    return 0;
}
int yywrap()
{
return 1;
}