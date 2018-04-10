#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main (){
	
	char palavra[100];
	int i;
	int tamanho;
	setlocale(LC_ALL, "");
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	printf("\n");
	tamanho = strlen(palavra);
	
	for(i = 0; i <= tamanho; i++){
		if (i % 2 == 0){
			palavra[i] = toupper(palavra[i]);
			printf ("%c\n", palavra[i]);
		}
		else if (i % 2 != 0){
			palavra[i] = tolower(palavra[i]);
			printf("%c\n", palavra[i]);
		}
	}
	system("pause");
	return 0;
}

