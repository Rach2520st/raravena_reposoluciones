#include <stdio.h>

void sumatoria_de_filas(int matriz[4][5]){
	int i;
	int j;
	int suma_fila1=0;
	int suma_fila2=0;
	int suma_fila3=0;
	int suma_fila4=0;
	for (i=0; i<1; i++){
			for(j=0; j<5; j++){
				suma_fila1= matriz[i][j] + suma_fila1;
			}
		}
		for (i=1; i<2; i++){
			for(j=0; j<5; j++){
				suma_fila2= matriz[i][j] + suma_fila2;
			}
		}
		for (i=2; i<3; i++){
			for(j=0; j<5; j++){
				suma_fila3= matriz[i][j] + suma_fila3;
			}
		}
		for (i=3; i<4; i++){
			for(j=0; j<5; j++){
				suma_fila4= matriz[i][j] + suma_fila4;
			}
		}
		printf("\n");
		printf(" %d		%d		%d		%d\n", suma_fila1, suma_fila2, suma_fila3, suma_fila4);
	} 
int main(){
	
	int j;
	int i;
	int matriz [4][5];	
	
	for(i=0; i<4; i++){
		for (j=0; j<5; j++){
			printf( "ingrese un valor:\n");
			scanf("%d",& matriz [i][j]);
		} 
		}
		
		for(i=0; i<4; i++){
			for (j=0; j<5; j++){
			printf("%d  " , matriz [i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	sumatoria_de_filas(matriz);
	
	return 0;
}

