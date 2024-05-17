#include <stdio.h>
int main(){

float alt, peso;
char ch;

printf("Digite sua altura e use H, ou M, para definir seu sexo:\n");
scanf(" %f %c",&alt,&ch);

if (ch == 'H'){ 
peso=(72.7*alt)-58;
printf("voce e homem, e este e seu peso ideal:%.1f", peso);
	
	}
else if(ch=='M'){
peso=(62.1*alt)-44.7;
printf("voce e uma mulher, e este e seu peso ideal:%.1f", peso);

}
else
 printf("Nenhuma das opcoes");
 }

