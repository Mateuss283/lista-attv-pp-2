#include <stdio.h>

int main(){
	
	float altura;
	float peso;
	float imc;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	
	imc =  peso / (altura * altura);
	
	if(imc <= 18.5){
		printf("\nAbaixo do peso");
	}else if(imc <= 24.9){
		printf("\nPeso ideal");
	}else if(imc <= 29.9){
		printf("\nAcima do peso");
	}else{
		printf("\nObesidade");
	}
	
	return 0;
}
