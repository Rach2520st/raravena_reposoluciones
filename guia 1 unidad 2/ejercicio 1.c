# include <stdio.h>

int main(){
	
	int N;
	int i;
	int j;
	printf("ingrese el valor de N:\n");
	scanf ("%d", &N);
	
	int matriz  [N][N];
	
	for(i=0; i<N; i++){
		for (j=0; j<N; j++){
			matriz[i][j]=0;
			printf("%d  " , matriz [i][j]);
		}
		printf("\n");
	}
	return 0;
}

