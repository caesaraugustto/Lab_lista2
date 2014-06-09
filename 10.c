#include <stdio.h>

int main() {
float num1, num2;
int opcao;

printf("1 - Soma de 2 numeros.");
printf("\n2 - Diferenca entre 2 numeros (maior pelo menor)");
printf("\n3 - Produto entre 2 numeros.");
printf("\n4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
scanf("%d", &opcao);

if(opcao == 1){
printf("\nDigite os dois numeros que deseja somar:\n");
scanf("%f %f", &num1, &num2);
printf("\nA soma desses dois numeros eh igual a: %.1f", num1+num2);
}
if(opcao == 2){
printf("\nDigite os dois numeros que deseja realizar a diferenca: \n");
scanf("%f %f", &num1, &num2);
if(num1>num2)
printf("\nA diferenca desses numeros eh igual a: %.1f.", num1-num2);
else
printf("\nA diferenca desses numeros eh igual a: %.1f.", num2-num1);

}
if(opcao == 3){
printf("\nDigite os dois numeros para realizar o produto entre eles:\n");
scanf("%f %f", &num1, &num2);
printf("O produto entre esses numeros eh: %.1f", num1*num2);
}
if(opcao == 4){
printf("\nDigite os dois numeros para realizar a divisao entre eles:\n");
printf("Numerador e Denominador, respectivamente.\n");
scanf("%f %f", &num1, &num2);
if(num2 == 0)
printf("\nAtencao: Nao existe divisao por zero!");
else
printf("\nA divisao desses dois numeros eh igual a: %.1f.", num1/num2);

}
if((opcao <1) || (opcao > 4)){
printf("\nOpcao invalida!");
}

return 0;
}
