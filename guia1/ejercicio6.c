#include <stdio.h>
int main()
{
	 float precio;
	 float litros;
	float galon;
	
	galon=3.785;
	printf("ingrese cantidad de galones que desea comprar:\n");
	scanf("%f", &galon);
	litros= galon*3.785;
	printf("la cantidad de litros es: %.2f\n",litros);
	precio=litros*820;
	printf("el valor total de la compra es: %.2f \n", precio);
	
	return 0;
}
	
	
