#include<stdio.h>
#include<stdlib.h>

void main(){
	int i=0;
	int contLetraV = 0;
	int contLetraC = 0;
	char nome[20];
	
	printf("Digite um nome: ");
	scanf(" %[^\n]",&nome);
	
	for(i=0;nome[i]!='\0';i++){	
	
		if (nome[i] == 'a'|| nome[i] == 'e'|| nome[i] == 'i'|| nome[i] == 'o'|| nome[i] == 'u' ){
			contLetraV++;
		}
		else {
			contLetraC++;
		}	
	}
	
	printf("O nome tem %d vogais",contLetraV);
	printf("\n\n");
	printf("O nome tem %d consolantes",contLetraC);
	
	printf("\n\n");
	system("pause");
}
