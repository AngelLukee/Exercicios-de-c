#include <stdio.h>
#include <math.h>
int main(){
float x,y, valor;
printf("digite um numero, seja ele positivo ou negativo:\n");
scanf("%f", &valor);
if (valor>0){
	x=valor*valor;
	y=valor;
	valor=sqrt(y);
	printf("numero elevado ao quadrado: %.2f\nRaiz quadrada do seu numero: %.1f\n", x, valor);
	}
else 
    printf("Numero negativo :)\n");
}

