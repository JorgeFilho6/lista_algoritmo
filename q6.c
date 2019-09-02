#include <stdio.h>
/*Ler dois valores do teclado na forma de números reais, calcular e imprimir na tela:
A soma destes valores
O produto deles
O quociente entre eles*/
int main(void) {
  float n1 = 0, n2 = 0, s = 0, p = 0, d = 0;
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);
  s = n1+n2;
  p = n1*n2;
  d = n1/n2;

  printf("Resultado da soma: %3.1f + %3.1f = %3.1f\n Resultado do produto: %3.1f * %3.1f = %3.1f\n Resultado da divisao: %3.1f / %3.1f = %3.1f", n1, n2, s, n1, n2, p, n1, n2, d);
  return 0;
}
