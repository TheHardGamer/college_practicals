#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
	int isvalid = 0;
	char inputidentifier[31];
	printf("Enter something to check if it will be a valid identifier: \n");
	gets(inputidentifier);
	if((isalpha(inputidentifier[0]) || inputidentifier[0] == '_')) {
		for (int i = 1; i < strlen(inputidentifier); i++)
		{
			if((isalpha(inputidentifier[i]) || isdigit(inputidentifier[i] || inputidentifier[i] == '_')))
			{
				isvalid++;
			}
		}
	}

	if (isvalid == (strlen(inputidentifier)-1))
	{
		printf("It's a valid identifier.");
	}
	else
	{
		printf("It's an invalid identifier.");
	}

}