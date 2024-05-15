#include <stdio.h>
#include <math.h>
int main(){
int a,b;
float hipotenusa;
printf("Digite A e B, sendo eles os catetos do triangulo:\n");
scanf("%d%d", &a,&b);
hipotenusa=(a*a)+(b*b);
hipotenusa=(sqrt(hipotenusa));
printf("O valor da hipotenusa desse triangulo e: %.2f\n", hipotenusa);
}
