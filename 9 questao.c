#include <stdio.h>

int main(){
	
	float km;
	float combustivel;
	float km_litro;
	
	printf("Escreva a distancia percorrida: ");
	scanf("%f", &km);
	
	printf("Escreva a quantidade de combustivel gasta: ");
	scanf("%f", &combustivel);
	
	km_litro = km / combustivel;
	
	printf("\nO consumo medio do veiculo em km/L e de: %.2f", km_litro);
	
	return 0;
	
}
