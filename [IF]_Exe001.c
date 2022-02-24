#include <stdio.h>

int main(){
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	
	if(idade > 18){
		printf("Você é maior de idade.\n");
	}else if( idade > 18 && idade < 61){
		printf("Você é adulto. \n");
	}else{
		printf("Você é idoso.\n");
	}
	
	printf("A idade é %d", idade );
	
	return 0;
}
