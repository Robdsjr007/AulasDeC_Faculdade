#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salarios[5], media, soma = 0;
	int i;
//	len = sizeof notas / sizeof salarios[0]; // Pega o lenght do meu vetor


for(i = 0; i < 5; i++) {
	printf("Digite o %dº salário: ", i + 1);
	scanf("%f", &salarios[i]);
	soma += salarios[i];
}
	
	
	media = soma / i; // Poderia usar a variável len
	
	printf("A média dos salários é: R$%.2f", media);
	
	return 0;
	
	
}
