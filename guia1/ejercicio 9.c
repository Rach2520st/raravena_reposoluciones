#include <stdio.h>
int main()
{
	float sueldo_base, ventas, comision, sueldo_total;
	
	printf("ingresar sueldo base:\n");
	scanf("%f", &sueldo_base);
	printf("ingresar numero de ventas:\n");
	scanf("%f", &ventas);
	comision= (ventas*0.07);
	printf("la comision que recibe es: %.2f\n", comision);
	sueldo_total= (sueldo_base+comision);
	printf("el sueldo final es: %.2f\n", sueldo_total);
	return 0;
}
	
	
