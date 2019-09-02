#include <stdio.h>

int main(){
	float n1 = 0, n2 = 0, n3 = 0, med = 0;
	printf("Vamos calcular a media do aluno.\n");
	printf("Digite a nota da unidade 1: ");
	scanf("%f", &n1);
	printf("Digite a nota da unidade 2: ");
	scanf("%f", &n2);
	printf("Digite a nota da unidade 3: ");
	scanf("%f", &n3);
	med = (n1+n2+n3)/3;
	printf("----------------------------\n");
	if(med < 5 || n1 < 3 || n2 < 3 || n3 < 3){
		printf("Media: (%3.1f + %3.1f + %3.1f)/3 = %3.1f.\n", n1, n2, n3, med);
		printf("Reprovado! O aluno apresenta media abaixo de 5 OU notas abaixo de 3 em alguma unidade");
		goto final;
	}
	if(med >= 7){
		printf("Media: (%3.1f + %3.1f + %3.1f)/3 = %3.1f.\n", n1, n2, n3, med);
		printf("Aprovado!");
		goto final;
	}
	if(med >= 5){
		if(n1 > 3 && n2 > 3 && n3 > 3){
			printf("Media: (%3.1f + %3.1f + %3.1f)/3 = %3.1f.\n", n1, n2, n3, med);	
			printf("Aprovado!");
		}
	}
	final:
	return 0;
}
