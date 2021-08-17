static inline int reservedkeyword(char buffer[])
{
	char keywords[34][10] = {"auto","break","case","char","const","continue","default",
	"do","double","else","enum","extern","float","for","goto",
	"if","inline","int","long","register","return","short","signed",
	"sizeof","static","struct","switch","typedef","union",
	"unsigned","void","volatile","while","_Packed"};
	int i, flag = 0;
	for(i = 0; i < 34; ++i){
		if(strcmp(keywords[i], buffer) == 0){
			flag = 1;
			break;
		}
	}
	return flag;
}

static inline int lexicalanalyzer()
{
	char words, buffer[15], operators[]="+-*=/%<>!";
	int i, j = 0;
	char filename[128];
	FILE *fp;
	printf("Paste your code in a text file and enter the file name: \n");
	scanf("%123s", &filename);
	fp = fopen(filename,"r");
	while(fp == NULL){
		fflush(stdin);
		printf("Invalid file! re-enter: \n");
		scanf("%123s", &filename);
		fp = fopen(filename,"r");
	}

	while((words = fgetc(fp)) != EOF){
		for(i = 0; i < 9; ++i){
			if(words == operators[i])
				printf("%c is an operator \n", words);
		}
		if(isalnum(words)){
			buffer[j++] = words;
		}
		else if((words == ' ' || words == '\n') && (j != 0)){
			buffer[j] = '\0';
			j = 0;

			if(reservedkeyword(buffer) == 1)
				printf("%s is a keyword \n", buffer);
			else
				printf("%s is an identifier \n", buffer);
		}
	}
	fclose(fp);
	return 0;
}
