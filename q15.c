#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, c, delta;
  float x1, x2;
  printf("Calculadora de equacao do segundo grau\n");
  printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  printf("Digite o valor de C: ");
  scanf("%d", &c);
//sqrt(delta) = raiz quadrada
  delta = b*b-(4*a*c);
  if(delta < 0){
    printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("O valor de delta e igual a %d.\n", delta);
    printf("Nao existe raiz real de número negativo, portanto nao ha resultado.");
  }
  else{
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Resultado da equacao: ");
    printf("x' = %3.1f ||| x'' = %3.1f", x1, x2);
  }
  return 0;
}
