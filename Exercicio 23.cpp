#include <stdio.h>
int main(){

float graus, radianos, resultado, pi=3.141592;
printf("Informe um angulo em GRAUS:\n");
scanf("%f", &graus);
radianos=graus*(pi/180);
printf("Seu angulo em radianos e:%.2f\n", radianos);
}
