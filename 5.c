#include <stdio.h>

int main(){
	const import=780000;	
	printf("Relacao de ganhadores do concurso\n");		
	printf("O primeiro ganhador recebera e %f\n",((import/100)*46));
	printf("O segundo ganhador recebera e %f\n",((import/100)*32));
	printf("O terceiro ganhador recebera e %f\n",(((import/100)*46)+((import/100)*32)));	
	return(0);
}
