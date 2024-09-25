#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "portuguese");
	char opcao;
	
	printf("Digite caracteres de a até c: ");
	scanf("%c", &opcao);

	switch(opcao) {
		case 'a': 
			printf("Você está no case1");
			break;
		case 'b':
			printf("Você está no case2");
			break;
		case 'c':
			printf("Você está no case3");
			break;
		default:
			printf("Carácter inválido!");
	}
	
	printf("\nAcabamos de sair do switch");
}
