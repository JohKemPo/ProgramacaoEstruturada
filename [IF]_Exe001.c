#include <stdio.h>

int main(){
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	
	if(idade > 18){
		printf("Voc� � maior de idade.\n");
	}else if( idade > 18 && idade < 61){
		printf("Voc� � adulto. \n");
	}else{
		printf("Voc� � idoso.\n");
	}
	
	printf("A idade � %d", idade );
	
	return 0;
}
