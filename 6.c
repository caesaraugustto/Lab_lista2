#include <stdio.h>

int main(){
	int dias;	
	printf("Digite o numero de dias trabalhados\n");		
	scanf("%d",&dias);
	printf("A quantia liquida a receber e %d\n",((dias*30.00)-(((dias*30.00)/100)*8)));	
	return(0);
}
