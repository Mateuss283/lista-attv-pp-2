#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	
	if (idade < 0 || idade > 120){
		printf("\nIdade invalida");
	}
	
	else if(idade <= 12){
		printf("\nVoce e crianca.");
	}else if(idade <= 17){
		printf("\nVoce e adolescente.");
	}else if(idade <= 59){
		printf("\nVoce e adulto.");
	}else{
		printf("\nVoce e idoso.");
	}
	
	return 0;
	
}
