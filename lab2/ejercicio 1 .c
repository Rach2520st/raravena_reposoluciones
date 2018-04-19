/* algoritmo narrado ejercicio 1:
 * ingresar un numero que sea menor a 1000000 excluyendo al 1 debido a que no se cuenta ni como un numero primo ni como un numero compuesto
 * se cuentan cuantos son los numeros primos menores que el numero ingresado 
 * esto se hace sumando e identificando los numeros primos
 * se muestra el resultado final como la cantidad de  numeros primos antecesores al numero ingresado
 */
#include <stdio.h>
int main()
{
	int divisores;
	int numero_ingresado;
	int i;
	int c;
	int cont=0;
	printf("ingrese un numero menor a 1.000.000:\n");
	scanf("%d", &numero_ingresado);

	for(c=2; c<=numero_ingresado; c++)
	{
		divisores=0;
	for(i=1;i<=numero_ingresado; i++)
	{
		if(c%i==0)
		{
			divisores++;
		}
	}
	if (divisores==2){
		printf("numeros primos: %d\n",c);
		cont++;
	}
}
	printf("cantidad de numeros primos antecesores al numero ingresado: %d\n", cont);
	return 0;
}

