#include <stdio.h>
int main()
{ 
	float dias, horas, minutos, segundos;
	printf("algoritmo para transformar días en segundos\n");
	printf("inserte numero de dias:\n");
	scanf("%f", &dias);
	
	horas=(dias*24);
	minutos=(horas*60);
	segundos=(minutos*60);
	
	printf("tiene: %.2f segundos\n", segundos);
	return 0;
}
	
