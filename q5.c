#include <stdio.h>
//Informe a área e o volume de um cilindro.
int main(void) {
  float r = 0, h = 0, al = 0, v = 0, ab = 0, at = 0;
  printf("Digite o raio da base do cilindro: ");
  scanf("%f", &r);
  printf("Digite a altura do cilindro: ");
  scanf("%f", &h);
  ab = 3.14*(r*r);
  al = 2*3.14*r*h;
  at = (2*ab)+al;
  v = ab*h;
  printf("Volume do cilindro: %3.1fcm³\n area da base do cilindro: %3.1fcm²\n area lateral do cilindro: %3.1fcm²\n area total do cilindro: %3.1fcm².", v, ab, al, at);
  return 0;
}
