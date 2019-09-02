#include <stdio.h>
/*Ler 3 números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois.*/
int main(void) {
  int n1 = 0, n2 = 0, n3 = 0, s = 0;
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
  printf("Digite o terceiro numero: ");
  scanf("%d", &n3);
  s = n2+n3;
  if(s > n1){
    printf("A soma %d + %d e maior que %d.", n1, n2, n3);
  }
  else{
    printf("%d e maior que a soma %d + %d", n1, n2, n3);
  }
  return 0;
}
