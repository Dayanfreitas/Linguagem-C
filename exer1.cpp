#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int x;
	int conta = 1;
	setlocale(LC_ALL,"");
	
	printf("Digite um número: ");
	scanf("%d", &x);
	
	while(conta <= 1)
	{
		if(x % 2 == 0)
			printf("\n %d Número é par", x);
			
		else
			printf("\n %d Número é impar ", x);
			
			conta++;
			
		
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
}
