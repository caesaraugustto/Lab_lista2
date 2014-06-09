#include <stdio.h>
#include <math.h>

int main() {
float venda_mensal, comissao;

printf("\nDigite o valor da venda mensal: ");
scanf("%f", &venda_mensal);

if(venda_mensal >= 100000){
comissao=700+(0.16*venda_mensal);
printf("\nVenda: %.2f - Comissao: %.2f", venda_mensal, comissao);
}
if((venda_mensal < 100000) && (venda_mensal >= 80000)){
comissao = 650+(0.14*venda_mensal);
printf("\nVenda: %.2f - Comissao: %.2f", venda_mensal, comissao);
}
if((venda_mensal < 80000) && (venda_mensal >= 60000)){
comissao = 600+(0.14*venda_mensal);
printf("\nVenda: %.2f - Comissao: %.2f", venda_mensal, comissao);
}
if((venda_mensal < 60000) && (venda_mensal >= 40000)){
comissao = 550+(0.14*venda_mensal);
printf("\nVenda: %.2f - Comissao: %.2f", venda_mensal, comissao);
}
if((venda_mensal < 40000) && (venda_mensal >= 20000)){
comissao=500+(0.14*venda_mensal);
printf("\nVenda: %.2f - Comissao: %.2f", venda_mensal, comissao);
}
if(venda_mensal < 20000){
comissao = 400+(0.14*venda_mensal);
printf("\nVenda: %.2f - Comissao: %.2f", venda_mensal, comissao);
}

return 0;
}
