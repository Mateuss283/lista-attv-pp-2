#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("\n%d e maior que %d", num1, num2);
	}else if(num2 > num1){
		printf("\n%d e maior que %d", num2, num1);
	}else{
		printf("\nOs dois numeros sao iguais");
	}
	
	return 0;
	
}
