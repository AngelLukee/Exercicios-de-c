#include <stdio.h>
int main(){
float volume,pi=3.14,raio,altura,base;
printf("Digite o raio e a altura do cilindro:\n");
scanf("%f%f", &raio,&altura);
base=pi*(raio*raio);
volume=base*altura;
printf("O volume do seu cilindro e: %.2f", volume);
}
