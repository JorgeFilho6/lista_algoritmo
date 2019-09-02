#include <stdio.h>
/*Ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles.
*/
int main(void) {
  int x = 0, y = 0, div = 0, res = 0;
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  printf("Digite o valor de y: ");
  scanf("%d", &y);
  div = x/y;
  res = x%y;
  printf("Resultado da divisao: %d / %d = %d.\n", x, y, div);
  printf("Resto = %d", res);
  return 0;
}
