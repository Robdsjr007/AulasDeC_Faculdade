#include<stdio.h>

main() {
	float nota1, nota2, nota3;
	printf("Input nota1: ");
	scanf("%f", &nota1); // Serve para capturar a entrada do teclado do usuário, & serve para mostrar ao copilador, que é um endereço localizado na memória.
	printf("Input nota2: ");
	scanf("%f", &nota2);
	printf("Input nota3: ");
	scanf("%f", &nota3);
	printf("The average is: %.2f", (nota1+nota2+nota3)/3);
}
