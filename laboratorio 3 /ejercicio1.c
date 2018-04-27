/*algoritmo narrado:
 * abrir libreria 
 * se ingresa la función para calcular el sueldo segun la cantidad de hora multiplicado por el sueldo por hora
 * se ingresa la función para imprimir sueldo total definiendo como variable el sueldo total
 * ingresar el código central del algoritmo, definiendo las variables que se trabajaran dentro de esta función
 * abrir un ciclo for que pedirá la cantidad de horas al día 6 veces y cada vez que se ingresan las horas se va sumando a las horas totales 
 * pedir el sueldo por hora a pagar.
 * llamar a la primera función cambiando el nombre de la variables que fueron realmente ingresadas
 * llamar a la segunda función para imprimir el sueldo que recibirá en total
 * mostrar en pantalla el sueldo final.
 *RETORNAR A 0
 *FIN*
*/ 
#include <stdio.h>
float calcula_sueldo (float cantidad_de_horas, float sueldo_por_hora){
	float sueldo_recibe=(cantidad_de_horas*sueldo_por_hora);
	return sueldo_recibe;
}

void imprimir_sueldo_persona(float sueldo_total){
	printf("el sueldo que recibe es: %.2f\n", sueldo_total);
}

int main()
{
	float cantidad_de_horas;
	float sueldo_por_hora;
	float horas_totales=0;
	float sueldo_total;
	int i;
	for(i=0; i<6; i++){
		printf("ingrese cantidad de horas del día %i:\n", i+1);
		scanf("%f", &cantidad_de_horas);
		horas_totales=horas_totales +cantidad_de_horas;
	}
	printf("ingrese sueldo por hora a pagar:\n");
	scanf("%f", &sueldo_por_hora);
	sueldo_total = calcula_sueldo(horas_totales,sueldo_por_hora);
	imprimir_sueldo_persona(sueldo_total);
	return 0;
}
	
		
