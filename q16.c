#include <stdio.h>
#include <math.h>

int main(void) {
  float x1, x2, x3, y1, y2, y3, l1, l2, l3;
  float maior, menor, medio;

  printf("Digite o P1, x: ");
  scanf("%f", &x1);
  printf("Digite o P2, y: ");
  scanf("%f", &y1);
  printf("Digite o P2, x: ");
  scanf("%f", &x2);
  printf("Digite o P2, y: ");
  scanf("%f", &y2);
  printf("Digite o P3, x: ");
  scanf("%f", &x3);
  printf("Digite o P3, y: ");
  scanf("%f", &y3);

  l1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  l2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  l3 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

  if(l1 > l2 && l1 > l3){
    maior = l1;
    if(l2 > l3){
      medio = l2;
      menor = l3;
    }else{
      if(l3 > l2){
        medio = l3;
        menor = l2;
      }
    }
  }
  if(l2 > l1 && l2 > l3){
    maior = l2;
    if(l1 > l3){
      medio = l1;
      menor = l3;
    }else{
      if(l3>l1){
        medio = l3;
        menor = l1;
      }
    }
  }
  if(l3 > l1 && l3 > l2){
    maior = l3;
    if(l1 > l2){
      medio = l1;
      menor = l2;
    }else{
      if(l2 > l1){
        medio = l2;
        menor = l1;
      }
    }
  }
  l1 = maior;
  l2 = medio;
  l3 = menor;
  if(l1 < l2+l3){
    printf("Esses pontos podem formar um triangulo ");
  }
  else{
    printf("Esses pontos NAO formam um triangulo.");
  }
  //Testando o tipo de triângulo.
  if(l1 == l2 && l2 == l3){
    printf("Equilatero. \n");
  }else{
    if(l1 == l2 || l2 == l3 || l2 == l3){
      printf("Isoceles");
    }
    else{
      printf("Escaleno");
    }
  }
  return 0;
}
