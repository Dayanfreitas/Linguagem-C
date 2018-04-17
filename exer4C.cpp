#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char palavra[100];
	int tamanho;
	int i;
	int k;
	
	printf("Digite uma palavra: ");
	fgets(palavra,sizeof(palavra),stdin);
	
	tamanho = strlen(palavra);
	printf("\n");
	
	for(i = 0; i <= tamanho; i++){
		printf(" %c",palavra[i]);
	}
	
	printf("\n");
	system("pause");
	return 0;	
}
