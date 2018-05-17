//ir obteniendo los numeros por separados segun el modulo
//ir sumandolos y luego obteniendo sus modulos hasta que este quede en un numero entero de solo un caracter
#include <stdio.h>
#include <stdlib.h>
void
descomponer(int variable){
	int suma;
	int c=0;
	int cont=0;
	while (suma>10 || cont==0){		
		suma=0;
		while(variable>10){
		
			c = variable%10;
			variable = variable/10;
			suma= suma + c;
			
			
			printf ("digitos : %d\n", c);
			printf ("suma: %d\n" , suma);
			printf ("variable: %d\n", variable);
		}
 
		suma=variable+suma;
		variable=c;
		cont=1;
	}
	printf ("la raiz digital del numero ingresado es: %d\n", suma);
}



int main(){
	
	int variable=0;
		printf("ingrese un numero: ");
		scanf ("%d", &variable);
		
	    descomponer(variable);
		return 0;
}
