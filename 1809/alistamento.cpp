// Exerc�cio com a biblioteca string
#include<string.h>
#include<stdio.h>

int main(){
	char sexo[20];
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Digite o seu g�nero: ");
	scanf("%s", &sexo);

	
	if(idade >= 18 && stricmp(sexo, "masculino") == 1) {
		printf("Voc� tem que se alistar");
	} else {
		printf("Seja feliz");
	}
	
}


