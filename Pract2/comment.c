#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
	int i = 2;
	char inputline[50];
	printf("Enter something to check whether if it is a comment or not: \n");
	gets(inputline);
	if (inputline[0] == '/'){
		if (inputline[1] == '/'){
			printf("It is a comment");
			exit(0);
		}
		else if(inputline[1] == '*'){
			for(i=2; i <= strlen(inputline); i++){
				if(inputline[i] == '*' && inputline[i+1] == '/'){
					printf("It is a comment");
				}
			}
		}
	}
}