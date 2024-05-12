#include <stdio.h>

int main(){
	
	char x;
	int y;
	float z;
	
	printf("escreva UM caractere, UM numero inteiro e UM numero decimal, espaçados entre eles\n");
    scanf("%c%d%f", &x, &y, &z);
	printf("separadas por espaco-> %c %d %.1f \nseparados por tab->\t%c\t%d\t%.1f \nou separados por linha-> \n%c\n%d\n%.1f\n", x,y,z,x,y,z,x,y,z);	
}


