#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int i, k;
	int x;
	int y = 1;
	setlocale(LC_ALL,"");
	
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("\n");
	
	
	
	for(i = 1; i <= x; i++){
		printf("\t");
		if(y <= x);
		else{
			break;
		}
		for(k = 1; k <= i; k++){
			printf("%d", y);
			y++;
		}
		printf("\n");
	}
	
	
	printf("\n");
	printf("\n");
	system("pause");
	return 0;
}
