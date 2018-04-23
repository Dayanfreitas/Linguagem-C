#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    
	int i, j;
    int resultado[11];
    
    for(i = 1; i <= 11; i++){
        
        for(j = 1; j <= 11; j++){
            if(j <= 10){
			resultado [j] = i * j;
            printf("%d * %d = %d\n", i, j, resultado[j]);
        	}
        	else{
        		break;
			}
		}
    printf("\n");
    }
    
	system("pause");
    return 0;
}

