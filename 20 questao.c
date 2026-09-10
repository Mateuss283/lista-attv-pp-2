#include <stdio.h>

int main(){
	
	float num1, num2;
	float resultado;
	char operacao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",  &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Digite a operacao desejada: ");
	scanf(" %c", &operacao);
	
	if(operacao == '+'){
		resultado = num1 + num2;
		printf("\nO resultado e: %.2f", resultado);
		
	}else if(operacao == '-'){
		resultado = num1 - num2;
		printf("\nO resultado e: %.2f", resultado);
		
	}else if(operacao == '*'){
		resultado = num1 * num2;
		printf("\nO resultado e: %.2f", resultado);
		
	}else if(operacao == '/' ){
		
		if(num2 == 0){
		printf("\nNao e possivel dividir um numero por 0");
	}else{
		resultado = num1 / num2;
		printf("\nO resultado e: %.2f", resultado);
	
	}
}

	return 0;
	
}
