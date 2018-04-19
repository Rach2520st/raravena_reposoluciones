#include <stdio.h>
int main()
{
	int numero, cuadrado_del_numero, cubo_del_numero;
	
	printf("ingrese valor:\n");
	scanf("%d", &numero);
	cuadrado_del_numero= (numero*numero);
	printf("El cuadrado del numero es: %d\n", cuadrado_del_numero);
	cubo_del_numero= (numero*numero*numero);
	printf("El cubo del numero es : %d", cubo_del_numero);
	return 0;
}

