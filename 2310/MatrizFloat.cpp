#include<stdio.h>
#include<locale.h>

int main(void){
	float matriz[3][3], soma, soma_linha;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++) {
			printf("Digite o da linha %d coluna %d: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		printf("linha %d\t", i);
		for(int j = 0; j < 3; j++) {
			printf("coluna %d: %.2f\t", j, matriz[i][j]);
			soma += matriz[i][j];
		}
		printf("\n");
	}

	printf("A soma total das linhas é %.2f", soma);
	
	return 0;

}

