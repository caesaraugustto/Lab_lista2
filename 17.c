#include <stdio.h>
#include <stdlib.h>

int main() {
float altura, imc, peso;

printf("Digite Sua Altura: ");
scanf("%f", &altura);
printf("\nDigite Seu Peso: ");
scanf("%f", &peso);

imc=peso/(altura*altura);

if(imc<18.5)
printf("\nAbaixo do Peso!");
if((imc>=18.6) && (imc<=24.9))
printf("\nSaudavel");
if((imc>=25) && (imc<=29.9))
printf("\nPeso em Excesso!");
if((imc>=30) && (imc<=34.9))
printf("\nObesidade Grau I!");
if((imc>=35) && (imc<=39.9))
printf("\nObesidade Grau II(Severa)!");
if(imc>=40)
printf("\nObesidade Grau III(Morbida)!");	


return 0;
}
