#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskara (double a, double b, double c){
	double delta = pow(b,2) - 4 * a * c;
	double x1 = (-b + sqrt(delta)) / (2 * a);
	double x2 = (-b - sqrt(delta)) / (2 * a);
	printf("Delta = %.0lf\n", delta);
	printf("x1 = %.0lf\n", x1);
	printf("x2 = %.0lf\n", x2);	
}

int main() {
	double a, b, c;
	printf("Digite o valor de a: ");
	scanf("%lf", &a);
	printf("Digite o valor de a: ");
	scanf("%lf", &b);
	printf("Digite o valor de a: ");
	scanf("%lf", &c);
	
	bhaskara(a,b,c);
	printf("\n\n");
	printf("\n\n");
	system("pause");
	
}
