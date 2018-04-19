#include <stdio.h>
int main()
{
	float b, h, perimetro, superficie;
	
	printf("Introduce el valor de la base del rectangulo en cm:\n");
	scanf("%f", &b);
	printf("introduce el valor de la altura del rectangulo en cm:\n");
	scanf("%f", &h);
	perimetro= (2*(b+h));
	printf("El perimetro del rectangulo es: %.2f cm\n", perimetro);
	superficie= (b*h);
	printf("la superficie del rectangulo es: %.2f cm²\n", superficie);
	return 0;
}
	



