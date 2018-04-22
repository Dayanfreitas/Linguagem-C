#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
    int i, j, k;
    int tronco, li;
    int x;
    setlocale (LC_ALL, "");
    
	printf ("Digite um número: ");
    scanf ("%d", &x);
    printf ("\n");
    
    li = 1;
    k = x - 1;
    for (i = 1; i <= x; i++){
         
         for (j = 1; j <= k; j++){
         	 printf (" ");
         } 
		 k--;  	
         for (j = 1; j <= li; j++){         	
             printf ("*");
         } 
    	printf ("\n");
    	li = li + 2;        
    }
    k = x - 1;
    for (tronco = 1; tronco <= 3; tronco++){
    	for (j = 1; j < k; j++){
    		printf (" ");
    	}
    	printf ("***");
    	printf ("\n");
	}
	printf ("\n"); 
    system ("pause");
    return 0;
}

