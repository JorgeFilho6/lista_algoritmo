#include <stdio.h>
//Ler três valores e colocá-los em ordem crescente.
int main(void) {
  int n1 = 0, n2 = 0, n3 = 0, maior = 0, meio = 0, menor = 0;
  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite o segundo valor: ");
  scanf("%d", &n2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &n3);
  if(n1 > n2 && n1 > n3){
    maior = n1;
    if(n2 > n3){
      meio = n2;
      menor = n3;
    }
    if(n3 > n2){
      meio = n3;
      menor = n2;
    }
  }
  if(n2 > n1 && n2 > n3){
    maior = n2;
    if(n1 > n3){
      meio = n1;
      menor = n3;
    }
    if(n3 > n1){
      meio = n3;
      menor = n1;
    }
  }
  if(n3 > n1 && n3 > n2){
    maior = n3;
    if(n1 > n2){
      meio = n1;
      menor = n2;
    }
    if(n2 > n1){
      meio = n2;
      menor = n1;
    }
  }
  printf("Ordem crescente dos valores: %d, %d, %d.", menor, meio, maior);
  return 0;
}
