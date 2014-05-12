#include <stdio.h>

int main(){
	float salario;
	printf("Digite o seu salario\n");
	scanf("%f",&salario);	
	printf("O seu novo salario apos o aumento e %f\n",(((salario/100)*25)+salario));	
	return(0);
}
