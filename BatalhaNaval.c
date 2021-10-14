#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char mar[4][3];
	int linha, coluna, i;
	
		
	printf("### JOGADOR 1 ####\n\n");
	printf("Cadastre o barco\n\n");
	printf("Linha (0-3)  = ");
	scanf("%d",&linha); 
	printf("Coluna (0-2) = ");
	scanf("%d",&coluna);	
	
	mar[linha][coluna] = 'b';
	
	printf("\n\nBarco cadastrado com sucesso!\n\n");
	
	system("pause");
	
	system("cls");//limpa a tela
	
	printf("### JOGADOR 2 ####\n\n");
	
	printf("Tente acerta o barco\n");
	
	for(i=1;i<=3;i++){					
		printf("\n\nLinha (0-3)  = ");
		scanf("%d",&linha); 
		printf("Coluna (0-2) = ");
		scanf("%d",&coluna);
		
		if (mar[linha][coluna]=='b'){
			printf("Jogador 2 venceu!!! Acertou o barco!");
			break;
		}else{
			printf("Tiro na agua!");
		}
	}
	
	if (i >= 4){
		printf("\n\nJogador 1 venceu!!!");
	}
	
	
	printf("\n\n");
	system("pause");	
}
