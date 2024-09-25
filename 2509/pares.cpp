#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int i;
	
	printf("Os números pares de 0 a 10 são: ");
	
	for(i = 0; i <= 10; i++) {
		if(i % 2 == 0){
			printf("\n%d", i);
		} 
	}
	
	printf("\nOs números ímpares de 0 a 10 são: ");
	
	for(i = 1; i <= 10; i++) {
		if(i % 2 == 1){
			printf("\n%d", i);
		} 
	}
	
	

	
	
}
