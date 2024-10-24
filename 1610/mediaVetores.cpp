#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float notas[5], media, soma = 0;
	int i;
//	len = sizeof notas / sizeof notas[0]; // Pega o lenght do meu vetor
//	float n1, n2, n3, n4, n5, media;


for(i = 0; i < 5; i++) {
	printf("Digite a %dª nota: ", i + 1);
	scanf("%f", &notas[i]);
	soma += notas[i];
}
	
/*	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	printf("Digite a quinta nota: ");
	scanf("%f", &n5); */
	
	media = soma / i; // Poderia usar a variável len
	
	printf("A média das notas é: %.2f", media);
	
	return 0;
	
	
}
