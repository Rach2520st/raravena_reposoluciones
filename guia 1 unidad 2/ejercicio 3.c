#include <stdio.h>

void sumatoria_matriz(int N, int matriz[N][N]){
	
	int i;
	int j;
	int sumatoria_matriz=0;
	for (i=0; i<N;i++){
			for(j=0; j<N; j++){
				sumatoria_matriz= matriz[i][j] + sumatoria_matriz;
			}
		}
		printf("la sumatoria de la matriz es: %d", sumatoria_matriz);
}	

void sumatoria_de_filas (int N, matriz[N][N]){
	
	int i;
	int j;
	int sumatoria_de_filas=0
	for (i=0; i<N;i++){
			for(j=0; j<N; j++){
				
				sumatoria_de_filas= matriz[i][j] + sumatoria_de_filas;
			}
			printf("la sumatoria de la fila %d es: %d \n", i+1, sumatoria_de_filas);
			sumatoria_de_filas=0;
		}
	}
int main()
{
	
	int N;
	int j;
	int i;
	

	printf("ingrese el valor de el numero de columnas y filas:\n");
	scanf ("%d", &N);
		
	int matriz  [N][N];
	 
	for(i=0; i<N; i++){
		for (j=0; j<N; j++){
			printf( "ingrese un valor:");
			scanf("%d",& matriz [i][j]);
		} 
		}
		
		for(i=0; i<N; i++){
		for (j=0; j<N; j++){
			printf("%d  " , matriz [i][j]);
		}
		printf("\n");
	}
		
		sumatoria_matriz(N, matriz);
		sumatoria_de_filas(N, matriz);	
		
		return 0;
	}
