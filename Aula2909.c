#include<stdio.h>
#include<stdlib.h>

void main(){
	int i=0;
	int contLetra = 0;
	char nome[20];
	
	printf("Digite um nome: ");
	scanf(" %[^\n]",&nome);
	
	for(i=0;nome[i]!='\0';i++){	
		contLetra++;	
	}
	
	printf("O nome tem %d letras",contLetra);
	
	printf("\n\n");
	system("pause");
}
