// Exercício com a biblioteca string
#include<string.h>
#include<stdio.h>

int main(){
	char sexo[20];
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Digite o seu gênero: ");
	scanf("%s", &sexo);

	
	if(idade >= 18 && stricmp(sexo, "masculino") == 1) {
		printf("Você tem que se alistar");
	} else {
		printf("Seja feliz");
	}
	
}


