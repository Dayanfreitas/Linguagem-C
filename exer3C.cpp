#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	char frase [50];
	int i;
	int tamanho;
	int palavra = 0;
	setlocale(LC_ALL,"");
	
	printf("Digite uma frase: ");
	fgets(frase,sizeof(frase),stdin);
	
	printf("\n");
	tamanho = strlen(frase);
	palavra ++;
	
	for(i = 0; i <= tamanho; i++){
			if(frase[i] == ' '){
					palavra ++;
			}
		}
	
	printf("A quantidade de palavras é: %d",palavra);
	printf("\n");
	printf("\n");
	system("pause");
	return 0;	
}
