//algoritmo narrado:
//se abre el programa
//se abre una nueva función con variables float, int y constantes
//Luego se abren ecuaciones para expresar valores (con las constantes)
// Se imprime el resultado dado
// se cierra la funcion
// Se abre un int main
// se establencen variables y laa funcion utilizada anteriormente
// se cierra el programa con return 0

#include <stdio.h>
float resultado_de_infeccion()
{
	float poblacion= 100000;
	float probabilidad_de_epidemia= 0.01;
	float valor_final;
	
	valor_final= (1/poblacion)* probabilidad_de_epidemia;
	printf("la probabilidad de epidemia es: %f\n", valor_final);
	return 0;
	}
	 int main ()
	 {
		 resultado_de_infeccion();
		 return 0;
	 }
	 

