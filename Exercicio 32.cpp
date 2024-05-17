#include <stdio.h>
int main(){

int x,y;
printf("Digite x:\n");
scanf("%d", &x);
printf("Digite y:\n");
scanf("%d", &y);
if (x>y){
	printf("x e maior do que y");
}
else if (x<y){
    printf("y e maior do que x");
}
else{

    printf("Os numeros sao iguais");
}
}
