#include <stdio.h>
void matriz_traspuesta(int M, int N, matriz[M][N]){
	int i;
	int j;
	
	for (i=0; i<N;i++){
		for (j=0; j<M; j++){
			printf("%d  ", matriz [j][i]);
		}
		printf("\n");
	}
}
int main(){
	int M;
	int N;
	int i;
	int j;
	
	
	printf("introduce el numero de filas (entre 1 y 50):\n");
	scanf("%d", &M);
	printf("introduce el numero de columnas(entre 1 y 30):\n");
	scanf("%d", &N);
	
	 int matriz[M][N];
	for(i=0; i<M; i++){
		for (j=0; j<N; j++){
			printf( "ingrese un valor:");
			scanf("%d",& matriz [i][j]);
		} 
		}
		for(i=0; i<M; i++){
			for (j=0; j<N; j++){
			printf("%d  " , matriz [i][j]);
		}
	printf("\n");
	}
	printf("\n");
	printf("la matriz traspuesta es:\n");
		
		matriz_traspuesta(M,N,matriz);
		
		return 0;
	}

