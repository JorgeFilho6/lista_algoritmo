#include <stdio.h>
//Ler 4 números inteiros e calcular a soma dos que forem par.
int main(void) {
  int i, num = 0, sum = 0, contp = 0;
  for(i = 0; i < 4; i++){
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num % 2 == 0){
      sum += num;
      contp += 1;
    }
  }
  if(contp == 0){
  	printf("Nao foram digitados numeros pares.");
  	goto final;
  }
  printf("A soma dos numeros pares e igual a %d", sum);  
  final:
  return 0;
}
