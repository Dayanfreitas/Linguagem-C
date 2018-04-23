#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (){
    
	int i;
    int posicao;
    int tamanhoFrase;
    char frase[50];
    setlocale (LC_ALL, "");
    
	printf("Digite uma frase: ");
    gets(frase);
    
	tamanhoFrase = strlen(frase);

    printf("\n");
    for(i = 0, posicao = 0; i <= tamanhoFrase; i++, posicao++){
        if( frase[posicao] == ' '){
			posicao++; 
        }
	frase[i] = frase[posicao];    
    }
    printf("Frase alterada: %s", frase);
    
    printf("\n");
    printf("\n");
	system("pause");
    return 0;
}

