#include <stdio.h>
/*Ler 2 números inteiros do teclado (A e B), verificar e imprimir qual deles é o maior, ou a mensagem "A=B" caso sejam iguais.
*/
int main(void) {
  int a = 0, b = 0;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  if(a>b){
    printf("%d > %d", a, b);
  }
  if(b>a){
    printf("%d > %d", b, a);
  }
  if(a==b){
    printf("%d = %d", a, b);
  }
  return 0;
}
