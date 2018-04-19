/* algoritmo narrado :
 * ingresar cuantos kilos pesa el niño
 * ingresar la edad del niño
 * definir como variable que se le deben administrar 0,2 mg por kilo al día, si el niño tiene menos de un año dividir la dosis diaria en tres dosis diarias
 * se tiene un medicamento con la misma droga pero 1 mg equivale a 25 gotas de este
 * calcular cuanto se le debe administrar al niño según su peso y edad, viendo la equivalencia que debe existir entre la dosis del medicamento real y por el medicamento que tiene en casa
 * mostrar reultado
 */
 #include <stdio.h>
 int main()
 {
 int edad;
 int peso;
 int dosis_referencial= 0.2 mg;
 int gotas;
 int dosis_que_debe_tomar;
 
	gotas= (dosis_que_debe_tomar *25)/1 mg
	dosis_que_debe_tomar = dosis_referencial * peso
	printf("ingrese el peso del niño:\n");
	scanf("%d", &peso);
	printf("ingrese la edad del niño:\n");
	scanf("%d", &edad);
	 if(edad<1){
		 printf("debe tomar:%d\n", dosis_que_debe_tomar/3);
	 }
		else(edad>1){
			printf("debe tomar: %d\n", dosis_que_debe_tomar);
		}
		return 0;
	}
	
	
