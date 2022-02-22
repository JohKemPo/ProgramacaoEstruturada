#include <stdio.h>

int main(){
	int var1;
	
	scanf("%d", &var1);
	printf("O numero digitado e: %d", var1);//conteudo
	printf("\nO numero digitado e: %d", &var1);//endereço
	
	return 0;
}
