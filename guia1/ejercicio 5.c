#include <stdio.h>
int main()
{
	char nombre[220];
	float libras, pies, peso, longitud;
	
	printf("nombre de dinosaurio:\n");
	scanf("%s", nombre);
	printf("peso en libras:\n");
	scanf("%f", &libras);
	printf("pies de longitud:\n");
	scanf("%f", &pies);
	peso= (libras*0.45);
	longitud= (pies*0.3048);
	printf("el dinosaurio pesa:%.2f kg\n", peso);
	printf("el dinosaurio mide: %.2f metros\n", longitud);
	printf("el dinosaurio se llama: %s\n", nombre);
	return 0;
}
	
