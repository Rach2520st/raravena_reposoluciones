//algoritmo narrado:
//se saca el valor de los huevos consumidos, y luego se asume que cada huevo tiene un valor de 10 pesos
//se multiplica el porcentaje equivalente a lo que aportaron los amigos y se multiplica por el valor del huevo
//se obtiene el valor final
 
 #include <stdio.h>
 
 int main()
 {
	 
printf("para el desayuno Juan, Antonio y Manuel deciden comer huevos revueltos, Juan trae 5 huevos, Manuel trae 3 y Antonio no trae huevos\n");
printf("Antonio les debe paga $80 pesos a los dos ¿cuanto debe recibir cada uno para que sea justo?\n");
 
 float valor_del_reparto() 
 {
	 float repartir; huevos=8; personas=3;
	 repartir= (huevos/personas);
	 printf("los huevos que consume cada persona son : %.2f\n", repartir);
	{
	float j=5, m=3, amigo_j, amigo_m;
	amigo_j= (j - repartir);
	amigo_m= (m - repartir);
	int valorhuevo=10;
	float pago_para_j;
	pago_para_j = (amigo_j* valor_huevo);
	printf:("se debe pagar a juan: %.2f\n", pago_para_j);
	float pago_para_m;
	pago_para_m =(amigo_m* valor_huevo);
	printf("se debe pagar a manuel : %.2f\n", pago_para_m);
	}
		return 0
}
	
