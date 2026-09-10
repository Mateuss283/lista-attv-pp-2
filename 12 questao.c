#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite o numero: ");
	scanf("%d", &num);
	
	if( num > 0){
		printf("\nO numero e positivo");
	}else if(num < 0){
		printf("\nO numero e negativo");
	}else{
		printf("\nO numero e igual a zero");
	}
	
return 0;	
	
}
