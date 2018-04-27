 /* algoritmo narrado:
  * crear una función para introducir el valor de la temperatura
  * crear una función que permita dibujar el termómetro virtualmente
  * crear otra función que permita llamar a la función 1 y 2 para imprimir el termometro virtual  y el asterisco en el lugar en el que se posiciona la tempaeratura ingresada.
 *Retornar a 0
 *FIN* 
  */
   
 #include <stdio.h>
 #include <stdlib.h>
  
 int 
 pedir_temperatura(){
	 int temperatura;
	 printf("ingresar el valor de temperatura (0-60): ");
	 scanf("%d", &temperatura);
	 return temperatura;
 }
	 
 
 void 
 dibujar_Temperatura(int temperatura){
	 int a;
	 printf("0         10        20        30        40        50        60\n");
	 printf("|         |         |         |         |         |         | \n");
		 
	 for (a = 0 ; a < temperatura; a++){
		 printf("-");
	 }
	 printf("*");
}

int main(){
	int temperatura;
	temperatura = pedir_temperatura();
	dibujar_Temperatura(temperatura);
	return 0;
}
			     
 
