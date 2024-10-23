#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, media;
	int res;
	
	do {
		printf("Digite o primeiro valor: ");
		scanf("%f", &n1);
		
		printf("Digite o segundo valor: ");
		scanf("%f", &n2);
		
		media = (n1 + n2) / 2;
		
		printf("A Média é: %.1f", media);
		
		printf("\nSe deseja continuar calculando a média digite [1], caso contrário digite [2]: ");
		scanf("%d", &res);
	} while(res == 1);
	
}
