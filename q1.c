#include <stdio.h>
/*Ler um número e exibir seu sucessor.*/
int main(void) {
  int num = 0, num2 = 0;
  printf("Digite um numero: ");
  scanf("%d", &num);
  num2 = num+1;
  printf("O sucessor de %d e igual a %d", num, num2);

  return 0;
}