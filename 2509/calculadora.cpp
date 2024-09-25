#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char caracter;
	float n1, n2;
	
	printf("Digite o tipo de operãção que você deseja: ");
	scanf("%c", &caracter);
	
	if(caracter != '+' || caracter != '-' || caracter != '/' || caracter != '*') {
		return printf("Caracter inválido");
	}
	
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	
	switch(caracter) {
		case '/':
			printf("A divisão é: %f", n1/n2);
			break;
		case '-':
			printf("A Subtração é: %f", n1-n2);
			break;
		case '+':
			printf("A Soma é: %f", n1+n2);
			break;
		case '*':
			printf("A Multiplicação é: %f", n1*n2);
			break;
		default: 
			printf("Caracter %c inválid", caracter);
	}

}
