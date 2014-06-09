#include <stdio.h>

int main() {
int idade, tempo_trab;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("\nDigite seu tempo de trabalho: ");
scanf("%d", &tempo_trab);

if((idade >= 65) || (tempo_trab >= 30) || ((idade >= 60) && (tempo_trab >= 25))){
printf("\nParabens! Voce podera se aposentar!");
}else{
printf("\nDesculpe, voce ainda nao pode se aposentar!");
}

return 0;
}
