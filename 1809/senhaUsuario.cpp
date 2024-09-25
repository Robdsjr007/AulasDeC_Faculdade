#include<stdio.h>

int main(){
	int senha;
	
	printf("Digite a sua senha:");
	scanf("%d", &senha);
	
	(senha == 12345) ? printf("Senha correta") : printf("Senha incorreta");
	
	
}
