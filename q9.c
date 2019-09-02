#include <stdio.h>
/*Gerar o preço de um carro ao consumidor e os valores pagos pelo imposto e pelo lucro do distribuidor, 
sabendo o custo de fábrica do carro e que são pagos: a) de imposto: 45% sobre o custo do carro; 
b) de lucro do distribuidor: 12% sobre o custo do carro.
*/
int main(void) {
  float precoi = 0, imp = 0, dist = 0, precof = 0;
  printf("Digite o preco de fabrica do veiculo: ");
  scanf("%f", &precoi);
  imp = (precoi*0.45);
  dist = (precoi*0.12);
  precof = precoi + imp + dist;
  printf("O preco desse veiculo pela distribuidora e: R$%3.1f\n", precof);
  printf("Imposto referente ao valor de fabrica: %3.1f\n", imp);
  printf("Lucro do distribuidor: %3.1f", dist);
  return 0;
}
