#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int i;
	int x;
	int y = 0;
	int contador = 10;
	setlocale(LC_ALL,"");
	
	for(i = 1; i <= contador; i++){	
	printf("Digite um número: ");
	scanf("%d",&x);
	y = y + x;
	}
	
	printf("\n");
	printf("%d", y);
	printf("\n");
	printf("\n");
	system("pause");
	return 0;
}
