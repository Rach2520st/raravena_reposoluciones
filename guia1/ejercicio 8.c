#include <stdio.h>
int main()
{
	float x, valor;
	printf("introduce valor de x :\n");
	scanf("%f", &x);
	valor=((x*x*x)+2*(x*x)+(3*x)+5);
	printf("el valor de la ecuacion x³+2x²+3x+5 es: %.2f", valor);
	return 0;
}

