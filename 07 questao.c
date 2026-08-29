#include <stdio.h>

int main (){
	
	float c;
	float f;
	
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &c);
	
	f = (c * 9/5 ) + 32;
	
	printf("\nA temperatura em Fahrenheit e %.2f:", f);
	
	return 0;
	
}
