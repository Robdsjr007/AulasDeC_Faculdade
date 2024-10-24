#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float numeros[5], max_salario = numeros[0];
	int i;
//	len = sizeof numeros / sizeof numeros[0]; // Pega o lenght do meu vetor


for(i = 0; i < 3; i++) {
	printf("Digite alguns números: ");
	scanf("%f", &numeros[i]);
	
	if (max_salario < numeros[i]){
		max_salario = numeros[i];
	}
}
	
	printf("O valor máximo é: %.0f", max_salario);
	
	return 0;
	
}
