#include <stdio.h>
/*Ler 2 números inteiros do teclado. Se o segundo for diferente de zero, calcular e imprimir o quociente do primeiro pelo segundo. 
Caso contrário, imprimir a mensagem: "DIVISÃO POR ZERO".*/
int main(void) {
  int n1, n2, div;
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
  if(n2 == 0){
    printf("DIVISAO POR ZERO");
  }
  else{
    div = n1/n2;
    printf("%d / %d = %d", n1, n2, div);
  }
  return 0;
}
