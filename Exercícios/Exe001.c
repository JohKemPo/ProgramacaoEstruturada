#include <stdio.h>

int main(){
	//Exerc�cio 001
	// Compilar:cmd nomeDoArquivo.c -o nomeDoArquivo.exe
	// Executar: nomeDoArquivo.exe
	
	int var1;
	
	scanf("%d", &var1);
	printf("O numero digitado e: %d", var1);//conteudo
	printf("\nO numero digitado e: %d", &var1);//endere�o
	
	return 0;
}
