#include <stdio.h>

int main (){
	
	float n1, n2;
	float soma;
	float subtracao;
	float multiplicacao;
	float divisao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	divisao = n1 / n2;
	
	printf("\nA soma dos dois numeros e: %.2f", soma);
	printf("\nA subtracao dos dois numeros e: %.2f", subtracao);
	printf("\nA multiplicacao dos dois numeros e: %.2f", multiplicacao);
	printf("\nA divisao dos dois numeros e: %.2f", divisao);
	
	return 0;
	
}
