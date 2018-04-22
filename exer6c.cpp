#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
    int i;
    int x1;
    int x2;
    int soma;
    setlocale (LC_ALL, "");
    
	printf("Digite o primeiro número(deve ser menor que o segundo): ");
    scanf("%d", &x1);
    printf("\n");
    
	printf("Digite o segundo número: ");
    scanf("%d", &x2);
    printf("\n");
    if(x2 > x1){
       soma = 0;
       
       for(i = x1; i <= x2; i++){
           soma = x1 + soma;
           x1++;
       }
       printf("Soma: %d\n", soma);
    }
    else {
         printf("Os números não são válidos\n");
    }     
    
    printf("\n");
	system("pause");
    return 0;
}

