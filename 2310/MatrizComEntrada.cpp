#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	int linha, coluna;
	
	printf("Digite o número de linhas: ");
	scanf("%d", &linha);
	
	printf("Digite o número de colunas: ");
	scanf("%d", &coluna);
	
	int matriz[linha][coluna];
	
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++) {
			printf("Digite o da linha %d coluna %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++) {
			printf("%d \t", matriz[i][j]);
		}
		
		printf("\n");
	}
	return 0;

}

