#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
main () 
{
	char palavra[30];
	int tamanho, i, vogais = 0, consoantes = 0, numeros = 0, letras;
	printf("Digite uma palavra: ");
	gets(palavra);
	strlwr (palavra); //para transformar todas as letras digitadas do programa em minuscula.
	tamanho = strlen(palavra);
	for (i = 0;i < tamanho; i++){ //para nao considerar espaço eu tirei o <= e deixei só < tamanho
			printf("valor ->  %c\n", palavra[i]); //para printar oq esta contando
		if (toupper(palavra[i]) != tolower(palavra[i])){
			if((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o') || (palavra[i] == 'u')) //[i] é o elemento/posição da palavra/letra, por exemplo em cada passada no for muda a posicao, começa no 0, 1,2,....
			{
				vogais++;
			}
			else {
				consoantes++;			
			}
		} else {
			if(palavra[i] >= '0' && palavra[i] <= '9'){
				numeros++;
			}
		} 
		letras = (vogais + consoantes);
	}
	printf("Tamanho ->  %d\n", tamanho);
	printf("Vogais -> %d\n", vogais);
	printf("Consoantes -> %d\n", consoantes);
	printf("Numeros -> %d\n", numeros);
	printf("Letras -> %d\n", letras);
	printf("\n\n");
	system("pause");
	return 0;
}
