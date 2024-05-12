#include <stdio.h>
#include <stdlib.h>

int main(){
	int dia,mes,ano;
	
	printf("Digite dia mes e ano separadamente:\n");
	scanf("%d%d%d", &dia, &mes, &ano);
	printf("data = %d/%.2d/%d", dia, mes, ano);
	
	return 0;
}
