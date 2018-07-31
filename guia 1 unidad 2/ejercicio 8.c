//inicializar el ciclo al reves partiendo de n a n-1,  
#include <stdio.h>
#include <stdlib.h>

	
	
void impresion (int N, int matriz[N][N]){
	printf ("\n");
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			printf ("[%d]", matriz[i][j]);
		}
		printf ("\n");
	}	
	
}

void impresioninversa (int N, int matriz [N][N]){
	printf ("\n\nImpresion inversa\n");
	for (int i=N-1; i>=0; i--){
			for (int j=0; j<N; j++){
				printf ("[%d]", matriz[i][j]);
			
			}
			printf ("\n");
	}
}

int main(){
	
	int N;
	int i;
	int j;
		printf("ingresa el numero de filas y columnas para tu matriz\n");
		scanf("%d", &N);
	int matriz [N][N];
	
	for(i=0; i<N; i++){
		for (j=0; j<N; j++){
			printf( "ingrese un valor:");
			scanf("%d", &matriz [i][j]);
		} 
		}
	impresion (N, matriz);
	impresioninversa (N, matriz);
	
	return 0;
}
