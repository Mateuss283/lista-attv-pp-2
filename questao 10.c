#include <stdio.h>

int main (){
	
	char nome[30];
	int quantidade;
	float preco;
	float resultado;
	
	printf("O que voce comprou? ");
	scanf("%s", &nome);
	
	printf("Quanto desse produto voce comprou? ");
	scanf("%d", &quantidade);
	
	printf("Quanto custou? R$");
	scanf("%f", &preco);
	
	resultado = quantidade * preco;
	
	printf("\nO valor total de compra de %s ficou em R$%.2f.", nome, resultado);
	
	return 0;
	
}
