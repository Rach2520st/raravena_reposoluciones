#include <stdio.h>
int main ()
{
	float nota_1, nota_2, nota_3, promedio_de_notas;
	int n_de_matricula;
	
	printf("ingrese n° de matricula:\n");
	scanf("%i", &n_de_matricula);
	printf("ingrese nota:\n");
	scanf("%f", &nota_1);
	printf("ingrese nota:\n");
	scanf("%f", &nota_2);
	printf("ingrese nota:\n");
	scanf("%f", &nota_3);
	promedio_de_notas= (nota_1 + nota_2 + nota_3)/3;
	printf("El promedio de notas es: %f", promedio_de_notas);
	return 0;
}
