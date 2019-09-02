#include <stdio.h>
//Ler três valores e determinar o maior dentre eles.

int main(void) {
  int n1, n2, n3;
  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite o segundo valor: ");
  scanf("%d", &n2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &n3);
  if(n1 > n2 && n1 > n3){
    printf("O primeiro valor e o maior: %d > %d // %d > %d", n1, n2, n1, n3);
  }
  if(n2 > n1 && n2 > n3){
    printf("O segundo valor e o maior: %d > %d // %d > %d", n2, n1, n2, n3);
  }
  if(n3 > n1 && n3 > n2){
    printf("O terceiro valor e o maior: %d > %d // %d > %d", n3, n1, n3, n2);
  }
  return 0;
}
