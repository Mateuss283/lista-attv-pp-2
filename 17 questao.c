#include <stdio.h>

int main(){
	
	float compra;
	float percentual;
	float desconto;
	float valorfinal;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	
	if(compra <= 100){
		percentual = 0;
	}else if(compra <= 500){
		percentual = 5;
	}else{
		percentual = 10;
	}
	
	desconto = compra * percentual / 100;
	valorfinal = compra - desconto;
	
	printf("\nValor original: R$ %.2f", compra);
    printf("\nPercentual de desconto: %.0f%%", percentual);
    printf("\nValor do desconto: R$ %.2f", desconto);
    printf("\nValor final: R$ %.2f", valorfinal);
    
    return 0;
}
