#include <stdio.h>
int main(){
float pi=3.141592, area;
int raio, diametro;
printf("Informe o tamanho do raio do circulo\n");
scanf("%d", &raio);
area=pi*(raio * raio);
printf("A area do circulo e:%.1f\n", area);
}
