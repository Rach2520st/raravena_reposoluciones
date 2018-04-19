/*algoritmo narrado:
 * ingresar los resultados del partido 
 * primero ingresando los resultado del equipo contrario y el equipo
 * sumar puntos segun el resultado (sumar 3 si ganaron, sumar uno si empataron, sumar 0 si perdieron)
 * seguir ingresando los resultados hasta el quinto partido 
 * sumar los puntos finales
 * entregar los resultados finales al usuario
 */
 #include <stdio.h>
 int main()
 {
	 int i, resultado_e_contrario=0, resultado_equipo=0, resultado_final=0;
	 
	 for (i=0; i<=5; i++)
	 {
	 printf("ingresar resultados del equipo contrario:\n");
	 scanf("%d", &resultado_e_contrario);
	 printf("ingresar resultados del equipo:\n");
	 scanf("%d", &resultado_equipo);
	 if (resultado_e_contrario==resultado_equipo){
	 printf("Empate\n");
	 resultado_final++;
 }
	 else if(resultado_e_contrario<resultado_equipo){
	 printf("ganó\n");
	 resultado_final= resultado_final+3;
 }
	 else {
	printf("perdio\n");
	resultado_final= resultado_final +0;
}
 }
	printf ("el resultado de los partidos hasta la quinta fecha es: %d\n", resultado_final);
 return 0;
}

