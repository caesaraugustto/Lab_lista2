#include <stdio.h>

int main(){
	int salario,prestacao,porcent;	
	printf("Digite o valor do salario e o valor da prestacao do emprestimo\n");		
	scanf("%f",&salario);
	scanf("%f",&prestacao);
	porcent==(salario/100)*20;
	if (prestacao>porcent)
	printf("Empr�stimo n�o concedido");
	else
	printf("Empr�stimo concedido");	
	return(0);
}
