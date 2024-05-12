#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tamanho;
	   printf("digite o tamanho da sua tchola:\n");
	   scanf("%d", &tamanho);
    
    if(tamanho <= 12){
    	printf("Sua rola eh pequena\n");
	}
	
	else if(tamanho >= 13 && tamanho <=16 ){
		printf("Ta na media amigo\n");
	}
	else if(tamanho >= 17 && tamanho <=21){
		printf("Um trombolho\n");}
	else {
		printf("um catador de manga\n");
	}
}
