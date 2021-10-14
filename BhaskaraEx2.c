#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Resultado{
	double x1;
	double x2;
	double delta;
};

struct Resultado bhaskara(double a, double b, double c){
	struct Resultado r;	
	r.delta = pow(b,2) - 4 * a * c;
	r.x1 = (-b + sqrt(r.delta)) / (2 * a);
	r.x2 = (-b - sqrt(r.delta)) / (2 * a);		
	return r;
}

int main(){
	double a, b, c;
	
	printf("Com retorno!!!\n\n");
	
	printf("Digite o valor de A: ");
	scanf("%lf",&a);
	printf("Digite o valor de B: ");
	scanf("%lf",&b);
	printf("Digite o valor de C: ");
	scanf("%lf",&c);
	
	struct Resultado resp = bhaskara(a,b,c);
	
	printf("Delta = %.2lf\n",resp.delta);
	printf("X1    = %.2lf\n",resp.x1);
	printf("X2    = %.2lf\n",resp.x2);
		
	printf("\n\n");
	system("pause");
}
