#include <stdio.h>

int main(){
	
	float  nota1, nota2;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media >= 7.0){
		printf("\nSua media e %.2f e voce esta aprovado", media);
	}else if(media >= 5.0 && media < 7.0){
		printf("\nSua media e %.2f e voce esta de recuperacao", media);
	}else{
		printf("\nSua media e %.2f e voce esta reprovado", media);
	}
	
	return 0;	
}
