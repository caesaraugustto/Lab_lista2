#include <stdio.h>

int main() {
float tarifa, preco, minutos;
int hora[2], hora_sai[2], horas;

printf("Digite o horario de chegada ao parque: \n");
printf("Atencao: Primeiro a hora[ENTER], depois os minutos[ENTER].\n");
scanf("%d %d", &hora[1], &hora[2]);

if((hora[1]>24) || (hora[1]<0) || (hora[2]>59) || (hora[2]<0) || ((hora[1] == 24) && (hora[2] != 0))){
printf("Horario Invalido!");
}
printf("Digite o horario de saida do parque:\n");
printf("Atencao: Primeiro a hora[ENTER], depois os minutos[ENTER].\n");
scanf("%d %d", &hora_sai[1], &hora_sai[2]);

if((hora_sai[1]>24) || (hora_sai[1]<0) || (hora_sai[2]>59) || (hora_sai[2]<0) || ((hora_sai[1] == 24) && (hora_sai[2] != 0))){
printf("Horario Invalido!");
}

horas=(hora_sai[1]-hora[1]);

if(hora[2] < hora_sai[2]);{
minutos=(((60-hora[2])+hora_sai[2])+1);
horas=horas+2;
}
if(hora[2] >= hora_sai[2]);{
minutos=((60-hora[2])+hora_sai[2]);
horas=horas+1;
}


if(hora[2] < hora_sai[2]);{
horas=horas+2;
horas=((hora_sai[1]-hora[1]));
}
horas=horas+1;

if((horas>0) && (horas<=2)){
preco = horas*1;
}
if((horas>2) &&(horas<=4)){
if (horas==3){
preco=(1.40*1)+2;
}
if(horas == 4){
preco=(1.40*2)+2;
}
}
if(horas>=5){
preco=(((horas-5)*2)+2.80+4);
}

printf("\nHoras no Parque: %d - Preco Cobrado: %.2f", horas, preco);

return 0;
}


