/* algoritmo narrado:
 * introducir una función para sacar el valor que se debe pagar mes a mes 
 * la deuda total se obtiene sumanndo todos los saldos anteriores, por lo tanto la deuda total inicia en 0 y luego se van sumando los saldos anterior
 * introducir una función que llame a la función anterior y que cumpla la función de imprimir la deuda total a pagar
retornar a 0
*FIN*
 */
#include <stdio.h>
#include <stdlib.h>

int deuda_total()
{
	int c;
	int deuda_total;
	int saldo_anterior;{
	saldo_anterior=10;
	for (c=0; c<20; c++){
		deuda_total= deuda_total + saldo_anterior;
		printf("para el mes de %d su abono debe ser de: %d\n", c+1, saldo_anterior);
		saldo_anterior= saldo_anterior *2;
}
return deuda_total;
}
}

int main()
{
	int pago_total;
	
	pago_total= deuda_total();
	printf("la deuda total a pagar es: %d\n", pago_total);
	
	return 0;
}
 
