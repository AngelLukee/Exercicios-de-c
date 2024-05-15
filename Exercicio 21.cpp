#include <stdio.h>

int main(){

float cotacao, dolar, real;
printf("Digite o valor em real e a cotacao do dolar separadamente:\n");
scanf("%f%f", &real, &cotacao);
dolar=real/cotacao;
printf("O valor convertido para dolares e: .2f\n", dolar);
}
