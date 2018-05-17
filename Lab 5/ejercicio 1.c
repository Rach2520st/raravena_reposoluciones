//algoritmo narrrado:
//incluir las tres librerías respectivas
//abrir int main y llamar a la funcion de tiempo para que esta nos entregue numeros aleatorios dependiendo del tiempo en el que se encuentre
//crear un procedimiento 												 
//entregar la opcion a o b para apostar
//producir numeros aleatorios con su respectiva funcion
// ir comparando los numeros entregados y hacer un conteo de las partidas ganadas y perdidas
//preguntarle al usuario si quiere seguir jugando o no
//si no, se rompe el siclo
//retornar a 0. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ganador () {	
	
	int valor_a;
	int valor_b;
	int partidas_ganadas=0;
	int partidas_perdidas=0;
	char apuesta;
	char tecla='s';	
		
	
	while (tecla != 'n'|| tecla !='N'){		
		
		valor_a = rand() %10;
		valor_b = rand() %10;
	
		printf("Elige A o B: ");
		scanf(" %c", &apuesta);
		
		printf("El numero generado en A es: %d \n", valor_a);
		printf("El numero generado en B es: %d \n", valor_b);

	
		if (apuesta == 'a' && valor_a>valor_b){
			partidas_ganadas ++;
			printf("Ganaste!\n");
		}
		else if (apuesta == 'b' && valor_a<valor_b){
			partidas_ganadas ++;
			printf("Ganaste!\n");
		}
		else{
			partidas_perdidas ++;
			printf("Perdiste:c\n");
		}
		printf("Desea continuar S/N: ");
		scanf(" %c",&tecla);
	
		printf("Llevas %d ganadas y %d de partidas perdidas\n", partidas_ganadas, partidas_perdidas);
	if (tecla=='n' || tecla =='N'){
			break;
		}
	}
}
																																								
int main()
{
	srand(time(0));
	
	ganador();
	
	return 0;
}
