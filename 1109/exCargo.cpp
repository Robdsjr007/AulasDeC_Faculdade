#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "portuguese");
	
	int codigo;
	float salario, valorAumento, salarioFinal;
	
	printf("\n 1 = Gerencial \n 2 = programador \n 3 = financeira \n 4 = RH \n");
	printf("\n Digite o c�digo do seu cargo atual: ");
	scanf("%d", &codigo);
	
	if(codigo > 4 || codigo == 0) {
		return 	printf("C�digo de cargo inv�lido");
	}
	
	printf("Digite o seu sal�rio atual: ");
	scanf("%f", &salario);
	
	
	switch (codigo) {
		case 1:
			valorAumento = salario/100 * 10;
			salarioFinal = salario + valorAumento;
			printf("10 porcento de aumento �: %.2f e o valor final � %.2f", valorAumento, salarioFinal);
			break;
		case 2:
			valorAumento = salario/100 * 8;
			salarioFinal = salario + valorAumento;
			printf("8 porcento de aumento �: %.2f e o valor final � %.2f", valorAumento, salarioFinal);
			break;
		case 3: 
			valorAumento = salario/100 * 6;
			salarioFinal = salario + valorAumento;
			printf("6 porcento de aumento �: %.2f e o valor final � %.2f", valorAumento, salarioFinal);
			break;
		case 4:
			valorAumento = salario/100 * 5;
			salarioFinal = salario + valorAumento;
			printf("5 porcento de aumento �: %.2f e o valor final � %.2f", valorAumento, salarioFinal);
			break;
		default:
			printf("C�digo %d inv�lido!", codigo);
	};
}



