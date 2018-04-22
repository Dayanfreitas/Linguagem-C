#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main (){
    int i, j, x;
    int fraseMaiuscula;
    int fraseMinuscula;
    int tamanho;
    char frase[50];
    setlocale (LC_ALL, "");
    
	printf("Informe a frase: ");
    gets(frase);
    tamanho = strlen(frase);
    printf("\n");
    
	printf("Frase maiúscula: ");
    
	for(i = 0; i < tamanho; i++){
        j = toupper(frase[i]);
        printf ("%c", j);
    }
    printf("\n");
    
	printf("Frase minúscula: ");
    for (i = 0; i < tamanho; i++){
        x = tolower(frase[i]);
        printf("%c", x);
    }
    printf("\n");
    printf("\n");
	
	system("pause");
    return 0;
}

