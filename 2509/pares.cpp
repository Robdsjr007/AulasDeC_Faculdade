#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int i;
	
	printf("Os n�meros pares de 0 a 10 s�o: ");
	
	for(i = 0; i <= 10; i++) {
		if(i % 2 == 0){
			printf("\n%d", i);
		} 
	}
	
	printf("\nOs n�meros �mpares de 0 a 10 s�o: ");
	
	for(i = 1; i <= 10; i++) {
		if(i % 2 == 1){
			printf("\n%d", i);
		} 
	}
	
	

	
	
}
