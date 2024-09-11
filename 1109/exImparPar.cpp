#include <stdio.h>

main() {
	
	int num;
	
	printf("Input a number: ");
	
	scanf("%d", &num);
	
	if(num%2==0) {
		printf("The number is even");
	} else {
		printf("The number is odd");
	}
	
}
