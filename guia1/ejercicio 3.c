#include <stdio.h>
int main()
{
	float lado_a, lado_b , hipotenusa;
	
	printf("ingrese la medida del lado a:\n");
	scanf("%f", &lado_a);
	printf("ingrese la medida del lado b:\n");
	scanf("%f", &lado_b);
	hipotenusa= (lado_a * lado_a) + (lado_b * lado_b);
	printf("la hipotenusa del triangulo: la raiz de %f", hipotenusa);
	return 0;
}
	
