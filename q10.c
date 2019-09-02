#include <stdio.h>
/*Ler a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, 
sabendo que são pagos:
50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h);
100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida.
200 reais, se estiver acima de 31km/h da velocidade permitida.*/
int main(void) {
  int vel = 0, mot = 0, multa = 0;
  printf("Qual a velocidade maxima permitida? ");
  scanf("%d", &vel);
  printf("A quantos km/h o motorista estava dirigindo? ");
  scanf("%d", &mot);
  multa = mot-vel;
  if(mot <= vel){
    printf("Velocidade permitida, continue assim!");
  }
  else{
    if(multa <= 10){
    printf("O motorista ultrapassou a velocidade permitida em ate 10km/h, sendo necessario pagamento de uma multa de R$50,00.");
    }
    if(multa > 10 && multa <= 30){
      printf("O motorista ultrapassou a velocidade permitida em ate 30km/h, sendo necessario pagamento de uma multa de R$100,00");
    }
    if(multa > 30){
      printf("O motorista ultrapassou a velocidade permitida em mais do que 30km/h, sendo necessario pagamento de uma multa de R$200,00");
    }
  }
  return 0;
  }
