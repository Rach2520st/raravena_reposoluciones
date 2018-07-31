# include <stdio.h>


int main(){
	
	int N;
	int i;
	int j;
	int cont=0;
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
			if(i!=j && matriz[i][j]==matriz[j][i]){
				cont= cont+1;
				}
			}
			cont= cont-1;
		}
	if(N==cont){
		printf("la matriz es simetrica\n");
	}
	else {
		printf("la matriz no es simetrica");
	}
	return 0;
}


