#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char caracter;
	float n1, n2;
	
	printf("Digite o tipo de oper���o que voc� deseja: ");
	scanf("%c", &caracter);
	
	if(caracter != '+' || caracter != '-' || caracter != '/' || caracter != '*') {
		return printf("Caracter inv�lido");
	}
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	switch(caracter) {
		case '/':
			printf("A divis�o �: %f", n1/n2);
			break;
		case '-':
			printf("A Subtra��o �: %f", n1-n2);
			break;
		case '+':
			printf("A Soma �: %f", n1+n2);
			break;
		case '*':
			printf("A Multiplica��o �: %f", n1*n2);
			break;
		default: 
			printf("Caracter %c inv�lid", caracter);
	}

}
