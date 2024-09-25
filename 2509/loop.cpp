#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int i;
	
	// For
	printf("Exemplo For\n");
	
	for(i=0; i<10; i++) {
		printf("\nO valor de i é: %d", i);	
	}
	
	// While
	printf("\n\nExemplo While\n");
	
	i = 0;
	
	while(i < 10){
		printf("\nO valor de i é: %d", i);
		i++;	
	};
	
	
	// Do While
	printf("\n\nExemplo Do While\n");
	
	i = 0;
	
	do { 
		printf("\nO valor de i é: %d", i);
		i++;
	}while(i < 10);
	
	
}
