#include<stdio.h>
#include<locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	int i;
	float gastos[5], media, total = 0;
	
	printf("As categorias são:\n\n[1] Alimentação\n[2] transporte\n[3] lazer\n[4] saúde\n[5] moradia\n\n");
	
	for(i = 0; i < 5; i++){
		printf("Digite o gasto da categoria [%d]: ", i+1);
		scanf("%f", &gastos[i]);
		total += gastos[i];	
	}
	
	media = total / 5;
	
	printf("O total de gastos é de R$ %.2f\na média de gastos é de R$ %.2f", total, media);
	
	return 0;
}
