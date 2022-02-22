#include <stdio.h>

int main(){
	float var1;
	
	scanf("%f", &var1);
	printf("O numero digitado com FLOAT e: %f", var1);//conteudo
	printf("\nO numero digitado com LONGFLOAT e: %lf", var1);//conteudo
	printf("\nO numero digitado e: %d", &var1);//endereço
	
	return 0;
}
