#include <stdio.h>
/*Fa�a um programa que informe se um dado ano � ou n�o bissexto. 
Obs: um ano � bissexto se ele for divis�vel por 400 ou se ele for divis�vel por 4 e n�o por 100.*/
int main(void) {
  int ano = 0;
  printf("Digite o ano atual: ");
  scanf("%d", &ano);
  if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
    printf("Esse ano e bissexto.");
  }
  else{
    printf("Esse ano nao e bissexto.");
  }
  return 0;
}
