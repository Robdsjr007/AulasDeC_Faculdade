#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int impar,  quantidade_de_impares, i;
	
	impar = 1;
	
	printf("Digite a quantidade de ímpares: ");
	scanf("%d", &quantidade_de_impares);
	
	i = impar;
	
	while(i <= quantidade_de_impares) {
		printf("%d\t", impar);
		impar = impar + 2;
		i++;
	}
	
	return 0;
}
