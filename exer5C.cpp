#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char palavra[50];
	int i;
	char e;
	int tamanho;
	setlocale(LC_ALL,"");
	
	printf("Digite uma frase:");
	fgets(palavra,sizeof(palavra),stdin);
	printf("\n");
	tamanho = strlen(palavra);
	
	for(i = 0; i <= tamanho; i++){
		e = palavra[i];
		printf("%c", e);
		printf(" ");
	}
	
	printf("\n");
	system("pause");
	return 0;
	
}
