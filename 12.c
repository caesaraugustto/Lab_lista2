#include <stdio.h>
#include <math.h>

int main() {
int x, y, z, opcao;
float media;

printf("Digite tres numeros inteiros:\n");
scanf("%d %d %d", &x, &y, &z);

printf("\nAgora escolha um numero correspondente a opcao desejada:\n");
printf("\n1. Media Geometrica.");
printf("\n2. Media Ponderada.");
printf("\n3. Media Harmonica.");
printf("\n4. Media aritmetica.\n");
scanf("%d", &opcao);

if ((opcao <1) && (opcao >4)){
printf("\nOpcao Invalida!");
}
if (opcao == 1){
media = pow(x*y*z, (float)1/3);
printf("\n\nA media Geometrica corresponde a: %.2f", media);
}
if(opcao == 2){
media = (x+(2*y)+(3*z))/6;
printf("\n\nA media Ponderada corresponde a: %.2f", media);
}
if(opcao == 3){
media=(1/((1/x)+((1/y)*(1/z))));
printf("\n\nA media Harmonica corresponde a: %.2f", media);
}
if(opcao == 4){
media=((x+y+z)/3);
printf("\n\nA media Aritmetica corresponde a: %.2f", media);
}

return 0;
}
