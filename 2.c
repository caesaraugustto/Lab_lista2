#include <stdio.h>

int main(){
	float num;
	printf("Digite um numero real\n");
	scanf("%f",&num);
	printf("O antecessor deste numero e %f\n",(num-1));
	printf("O sucessor deste numero e %f\n",(num+1));
	return(0);
}
