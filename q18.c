#include <stdio.h>
/*Faça um programa que informe se um dado ano é ou não bissexto. 
Obs: um ano é bissexto se ele for divisível por 400 ou se ele for divisível por 4 e não por 100.*/
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
