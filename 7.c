#include <stdio.h>

int main(){
	int a,b;	
	printf("Digite o valor de a e b sendo ambos dois catetos\n");		
	scanf("%d",&a);
	scanf("%d",&b);
	printf("A hipotenusa e %d\n",((a*a)+(b*b)));	
	return(0);
}
