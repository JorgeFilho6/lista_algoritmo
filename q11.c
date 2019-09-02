#include <stdio.h>
/*Sabendo que latão é constituído de 70% de cobre e 30% de zinco, indique a quantidade de cada um desses 
componentes para se obter uma certa quantidade de latão (requerida pelo usuário).*/
int main(void) {
  float latao = 0, cobre = 0, zinco = 0;
  printf("Quanto de latao voce deseja obter? ");
  scanf("%f", &latao);
  cobre = latao*0.70;
  zinco = latao*0.30;
  printf("Para obter %3.1fkg de latao, voce precisara de %3.1fkg de cobre e %3.1fkg de zinco.", latao, cobre, zinco);
  return 0;
}
