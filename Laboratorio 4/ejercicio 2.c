//algoritmo narrado:
//se saca el valor de los huevos consumidos, y luego se asume que cada huevo tiene un valor de 10 pesos
//se multiplica el porcentaje equivalente a lo que aportaron los amigos y se multiplica por el valor del huevo
//se obtiene el valor final
 
 #include <stdio.h>
 
 float valor_del_reparto() 
 {
	 float repartir, huevos=8, personas=3;
	 repartir= (huevos/personas);
	 printf("los huevos que consume cada persona son : %.2f\n", repartir);
	float j=5, m=3, amigo_j, amigo_m;
	amigo_j= (j - repartir);
	amigo_m= (m - repartir);
	int valorhuevo=10;
	float pago_para_j;
	pago_para_j = (amigo_j* valorhuevo);
	printf("se debe pagar a juan: %.2f\n", pago_para_j);
	float pago_para_m;
	pago_para_m =(amigo_m* valorhuevo);
	printf("se debe pagar a manuel : %.2f\n", pago_para_m);
return 0;
}
 int main()
{
	valor_del_reparto();
	return 0;
}

