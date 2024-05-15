#include <stdio.h>

int main(){
	
float c,f,k, num_original;

printf("Digite a temperatura em graus celsius:\n");
scanf("%f", &c);
num_original=c;
f=c*(9.0/5.0)+32;
k=c+273;
printf("Temperatura em Graus: %.1f\nA temperatura convertida para Fahrenheit: %.1f\nA temperatura convertida para Kelvin: %.1f", num_original,f,k);

}
