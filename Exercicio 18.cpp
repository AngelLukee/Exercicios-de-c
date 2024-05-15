#include <stdio.h>

int main(){
	
float x,y,z,x1,y1;
printf("Escreva numeros de 1 a 10 separadamente:\n");
scanf("%f%f%f%f", &x,&y,&z,&x1);
y1=(x+y+z+x1)/4;
printf("A media aritmetica desses valores e: %.2f\n", y1);
return 0;
}
