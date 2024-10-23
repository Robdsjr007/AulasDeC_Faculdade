#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float segundos, minutos, horas;
	
	printf("Digite a quantidade de segundos a serem convertidos: ");
	scanf("%f", &segundos);
	
	minutos = segundos / 60;
	
	horas = minutos / 60;
	
	printf("Minutos: %.1f\n Horas: %.0f\n", minutos, horas);
	
}
