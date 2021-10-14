#include<stdio.h>
#include<stdlib.h>
struct Aluno{
	double ra;
    char nome[20];
	char curso[20];
};
int main(){
	struct Aluno aluno[10];
	
	printf("Cadastre os dados:\n\n");
	
	printf("Digite o ra: ");
	scanf("%lf",&aluno[0].ra);
	
	printf("Digite o nome: ");
	scanf(" %[^\n]",&aluno[0].nome);	
	
	printf("Digite o curso: ");
	scanf(" %[^\n]",&aluno[0].curso);	
	
	printf("\nDados cadastrados:\n\n");
	printf("RA    = %.0lf\n",aluno[0].ra);
	printf("NOME  = %s\n",aluno[0].nome);
	printf("CURSO = %s\n",aluno[0].curso);
		
	printf("\n\n");
	system("pause");
}
