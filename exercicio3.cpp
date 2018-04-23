#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>

int main ()
{
	setlocale(LC_ALL,"");
	char frase[100];
	int i, tamanho, palavras = 1;
	printf("Digite uma frase  ");
	gets(frase);
	tamanho = strlen(frase);
	for(i = 0; i <= tamanho; i++){
		if(frase[i] == 32){ //32 é o numero de espaço na tabela ascii
			palavras++; //quanto tiver espaço soma 1 em palavras
		}
	}
	printf("\nPalavras ->  %d", palavras);
	printf("\nTamanho ->  %d", tamanho);
	printf("\n\n");
	system("pause");
	return 0;
}
