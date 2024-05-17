#include <stdio.h>
int main(){
float salario, emprestimo;
printf("digite o seu salario:\n");
scanf("%f", &salario);
printf("digite o valor do emprestimo:\n");
scanf("%f", &emprestimo);
if (emprestimo>salario*0.2){
	printf("Emprestimo nao concedido.\n");
}
else 
    printf("emprestimo concedido.\n");
}
