#include <stdio.h>

int main (){
	
	float horas_trabalhadas;
	float valor_recebido;
	float resultado;
	
	printf("Digite quantas horas voce trabalha: ");
	scanf("%f", &horas_trabalhadas);
	
	printf("Digite quanto voce recebe por hora: ");
	scanf("%f", &valor_recebido);
	
	resultado = horas_trabalhadas * valor_recebido;
	
	printf("\nSeu salario de acordo com a horas trabalhadas sera: R$%.2f", resultado);
	
	return 0;
	
}
