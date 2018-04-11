#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int del;
	int i;
	int x;
	setlocale(LC_ALL,"");
	
	printf("Digite um número: ");
	scanf("%d",&x);
	printf("\n");
	
	for(i = 1; i <= x; i++){
		printf("\n\t");
		for(del = 1; del <= i ; del++){
			printf("*");
		}
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
