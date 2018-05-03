/*algoritmo narrado:
ingresar un numero entero cualquiera
* invertir el numero según los restos dividiendolo por 10
* por ejemplo: si se ingresa 456 el numero final entregado será 654
*/

#include <stdio.h>
int pedir_numero()
{
    int numero;                                            
    printf ("ingrese un numero:\n");        
    scanf("%d",&numero);
    return numero;
}
  int main()
  {
	  int n,resto, invertido=0;
  n=pedir_numero();
    while(n!=0)                               
      {
         resto=n%10;                  
         n=n/10;                         
         invertido=invertido*10+resto;         
       }
printf("%d \n",invertido);
return 0;
}
	 
	   
 
