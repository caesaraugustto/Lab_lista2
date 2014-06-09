#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
float altura;
char sexo;

while((sexo != 'M') && (sexo != 'F') && (sexo != 'm') && (sexo != 'f')){	
printf("\nDigite seu Sexo [M ou F]: ");
scanf("%c", &sexo);
}
printf("\nDigite sua altura: ");
scanf("%f", &altura);

if((sexo=='M') || (sexo=='m')){
printf("\nSeu peso ideal eh: %.2f", ((72.7*altura)-58));
}	
if((sexo=='F') || (sexo=='f')){
printf("\nSeu peso ideal eh: %.2f", ((62.1*altura)-44.7));
}

return 0;
}


