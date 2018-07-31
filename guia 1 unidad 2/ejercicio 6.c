#include <stdio.h>
void temperatura_msemana(int n, int m, int matriz[n][m]){
	int i;
	int j;
	int suma_temp=0;
	float temp_media_Semana=0;
	
	for (i=0; i<n;i++){
			for(j=0; j<m; j++){
				suma_temp= matriz[i][j] + suma_temp;
			}
		}
		temp_media_Semana = (suma_temp /(168));
		printf("la temperatura media de la semana fue %.2f °C\n",temp_media_Semana);
	}

void tmp_media_c_dia(int n, int m, int matriz[n][m]){
	int i;
	int j;
	float tmp_md1=0;
	int suma_tmpd1=0;
	float tmp_md2=0;
	int suma_tmpd2=0;
	float tmp_md3=0;
	int suma_tmpd3=0;
	float tmp_md4=0;
	int suma_tmpd4=0;
	float tmp_md5=0;
	int suma_tmpd5=0;
	float tmp_md6=0;
	int suma_tmpd6=0;
	float tmp_md7=0;
	int suma_tmpd7=0;
	int cont=0;
	for (i=0; i<1; i++){
			for(j=0; j<m; j++){
				suma_tmpd1= matriz[i][j] + suma_tmpd1;
			}
		}
		tmp_md1 = (suma_tmpd1 /(7));
		printf("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md1);
	
	for (i=1; i<2; i++){
			for(j=0; j<m; j++){
				suma_tmpd2= matriz[i][j] + suma_tmpd2;
			}
		}
		tmp_md2 = (suma_tmpd2 /(7));
		printf("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md2);
	
	for (i=2; i<3; i++){
			for(j=0; j<m; j++){
				suma_tmpd3= matriz[i][j] + suma_tmpd3;
			}
		}
		tmp_md3 = (suma_tmpd3 /(7));
		printf("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md3);

	for (i=3; i<4;i++){
			for(j=0; j<m; j++){
				suma_tmpd4= matriz[i][j] + suma_tmpd4;
			}
		}
		tmp_md4 = (suma_tmpd4/7);
		printf ("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md4);
	
	for (i=4; i<5; i++){
			for(j=0; j<m; j++){
				suma_tmpd5= matriz[i][j] + suma_tmpd5;
			}
		}
		tmp_md5 = (suma_tmpd5 /(7));
		printf("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md5);
	
	for (i=5; i<6;i++){
			for(j=0; j<m; j++){
				suma_tmpd6= matriz[i][j] + suma_tmpd6;
			}
		}
		tmp_md6 = (suma_tmpd6 /(7));
		printf("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md6);
	
	for (i=6; i<7;i++){
			for(j=0; j<m; j++){
				suma_tmpd7= matriz[i][j] + suma_tmpd7;
			}
		}
		tmp_md7 = (suma_tmpd7 /(7));
		printf("la temperatura media del día %d fue %.2f °C\n", i+1, tmp_md7);
	if (tmp_md1>30)
		cont++;
	if (tmp_md2>30)
		cont++;
	if (tmp_md3>30)
		cont++;
	if (tmp_md4>30)
		cont++;
	if (tmp_md5>30)
		cont++;
	if(tmp_md6>30)
		cont++;
	if(tmp_md7>30)
	   cont++;
	printf("número de días en que la temperatura media fue mayor a 30 °C: %d\n", cont);
}
void 
temp_minima(int n, int m, int matriz[n][m]){
	
	int i;
	int j;
	int menor= 50;
	int minima[n];
	
	for (i=0; i<n; i++){
		menor=50;
		for (j=0; j<m; j++){
			if (menor>matriz[i][j]){
				menor=matriz[i][j];
			}
		}
		minima[i] = menor;
		printf ("\nLa menor temperatura del dia %d es %d °C", i+1, menor);
	}
	
	printf ("\n");
	
	for (i=0; i<n;i++){
		if (menor>minima[i]){
			menor=minima[i];
			}
		
	}
	printf ("\nLa menor temperatura de la semana es %d °C\n", menor);
}

void temp_maxima(int n, int m, int matriz[n][m]){
	int maxima[n];
	int i;
	int j;
	int mayor=0;
	for (i=0; i<n; i++){
		mayor=0;
		for (j=0; j<m; j++){
			if (mayor<matriz[i][j]){
				mayor= matriz[i][j];
			}
		}
	
		maxima[i] = mayor;
		printf ("\nLa mayor temperatura del dia %d es %d °C", i+1, mayor);
	}
	
	for (i=0; i<n;i++){
		if (mayor<maxima[i]){
			mayor=maxima[i];
		}
	}
	printf ("\n\nLa mayor temperatura de la semana es %d °C\n", mayor);
}


int main()
{
	
	int n=7;
	int m=24;
	int matriz[n][m];
	int i;
	int j;
	
	for(i=0; i<n; i++){
		for (j=0; j<m; j++){
			printf( "ingrese la temperatura de la hora %d del día %d en grados centigrados:\n", j+1,i+1);
			scanf("%d",& matriz [i][j]);
		} 
		}
		temperatura_msemana(n,m,matriz);
		tmp_media_c_dia(n,m, matriz);
		temp_maxima(n,m,matriz);
		temp_minima(n,m,matriz);
	return 0;
}

