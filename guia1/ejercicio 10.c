#include <stdio.h>
int main()
{
	float kilometros, precio_por_km, costo;
	
	printf("kilometros del recorrido:\n");
	scanf("%f", &kilometros);
	printf("precio por kilometro:\n");
	scanf("%f", &precio_por_km);
	
	costo=(kilometros*precio_por_km);
	printf("el precio del recorrido en autobuses camino al cielo es de : %.2f pesos", costo);
	return 0;
}

