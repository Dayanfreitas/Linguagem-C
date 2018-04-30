#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int x1, x2;
	setlocale(LC_ALL,"");
	
	printf("Digite um inteiro: ");
	scanf("%d", &x1);
	
	printf("Digite um inteiro: ");
	scanf("%d", &x2);
	
	x1 = x1 + 1;
	x2 = x2 - 1;
	
	while(x1 <= x2)
	{
		if(x1 % 2 == 0)
			printf("\n\n [%d]", x1);
			x1++;
		
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
	
}
