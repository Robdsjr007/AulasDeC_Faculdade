#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "portuguese");
	char opcao;
	
	printf("Digite caracteres de a at� c: ");
	scanf("%c", &opcao);

	switch(opcao) {
		case 'a': 
			printf("Voc� est� no case1");
			break;
		case 'b':
			printf("Voc� est� no case2");
			break;
		case 'c':
			printf("Voc� est� no case3");
			break;
		default:
			printf("Car�cter inv�lido!");
	}
	
	printf("\nAcabamos de sair do switch");
}
