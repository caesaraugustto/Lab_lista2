#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
int a[5], b[5], soma, resposta, cont, i;
cont=0;

a[1]=32;a[2]=23;a[3]=4; a[4]=17; a[5]=78;b[1]=47; b[2]=91; b[3]=8; b[4]=53; b[5]=78;
for(i=1; i<=5; i++){
printf("\n\nQual eh a soma de %d + %d?\n", a[i], b[i]);
scanf("%d", &resposta);
soma=a[i]+b[i];
if(resposta == soma){
cont=cont+1;
printf("\nResposta Correta!\n%d + %d = %d", a[i], b[i], soma);
}else{
printf("\nResposta errada!\nA soma de %d + %d eh igual a %d e nao eh igual a %d", a[i], b[i], soma, resposta);
}
}
printf("\n\nVoce acertou %d vezes.", cont);


return 0;
}
