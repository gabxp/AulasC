#include<stdio.h>
#include<stdlib.h>
struct Aluno{
	double ra;
    char nome[20];
};
int main(){
	int i;
	struct Aluno aluno[5];
	
	//um laço de repetição para cadastro
	for(i=0;i<=4;i++){
		printf("Dados do aluno%d:\n",i+1);
		printf("Digite o ra..: ");
		scanf("%lf",&aluno[i].ra);
		printf("Digite o nome: ");
		scanf(" %[^\n]",&aluno[i].nome);
		printf("\n");
	}
	printf("\nCadastrado finalizado!!!\n\n");
	system("pause");
	system("cls");
		
	printf("Os seguintes dados foram cadastrados:\n\n");
	for(i=0;i<=4;i++){
		printf("Dados do aluno%d:\n",i+1);
		printf("RA..: %.0lf\n",aluno[i].ra);
		printf("NOME: %s\n",aluno[i].nome);
		printf("\n");
	}
		
	printf("\n\n");
	system("pause");
}
