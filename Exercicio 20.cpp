#include <stdio.h>

int main(){

int KM;
float M;

printf("Digite uma velocidade em KM/H\n");
scanf("%d", &KM);
M=KM/3.6;
printf("O valor em M/S e: %.2f\n", M);
}
