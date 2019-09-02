#include <stdio.h>
/*Calcular a quantidade dinheiro gasta por um fumante.
Dados: o número de anos que ele fuma, o nº de cigarros fumados 
por dia e o preço de uma carteira.*/
int main(void) {
  int anos = 0, cigarro = 0, totalC = 0;
  float preco = 0, totalP = 0;
  printf("A quanto tempo voce fuma? (em anos): ");
  scanf("%d", &anos);
  printf("Quantos cigarros voce fuma por dia? ");
  scanf("%d", &cigarro);
  printf("Qual o preco de uma carteira de cigarros? ");
  scanf("%f", &preco);
  anos = (anos*365);
  totalC = cigarro*anos;
  totalP = (totalC/20)*preco;
  anos = (anos/365);
  printf("Voce deve ter gastado cerca de %3.1fR$ com cigarros durante esses %d anos.", totalP, anos);
  return 0;
}
