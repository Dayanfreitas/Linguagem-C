#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main (){
		
	int i;
	int letras;
	int numeros;
	int vogais;
	int consoantes;
	int tamanhoPalavra;
	char palavra[50];
	setlocale (LC_ALL, "");
		
	printf ("Informe a palavra: ");
	gets (palavra);
		
	printf("\n");
	tamanhoPalavra = strlen (palavra);
	vogais = 0;
	consoantes = 0;
	numeros = 0;
	letras = 0;
		
	for (i = 0; i < tamanhoPalavra; i++){
		if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
			vogais++;
		} 
		else {	
			if (toupper(palavra[i]) != tolower(palavra[i])){
				consoantes++;
			}
  			if (toupper(palavra[i]) == tolower(palavra[i])){
				numeros++;
	        } 
	    }
	}
		
		letras = vogais + consoantes;
		
		printf("A quanidade de caracteres �: %d\n", tamanhoPalavra);
		printf("A quanidade de vogais �: %d\n", vogais);
		printf("A quanidade de consoantes �: %d\n", consoantes);
		printf("A quantidade de n�meros �: %d\n", numeros);
		printf("A quantidade de letras �: %d\n", letras);
		
		return 0;
}
