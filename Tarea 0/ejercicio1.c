#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamano 15500

int matriz[tamano][tamano];
int matriz2[tamano][tamano];
int matrizResultado[tamano][tamano];

int main(){
	int i,j;
	//long int tamano=strtol(argv[1], NULL, 10);
	
	

	
	double tiempo=0.0;
	time_t inicio=time(NULL);

	//clock_t inicio=clock();
	

	srand(time(0));

	for(i=0; i<tamano;i++){
		for(j=0;j<tamano;j++){
			matriz[i][j]=rand()%1001;
			matriz2[i][j]=rand()%1001;
			matrizResultado[i][j]=matriz[i][j]+matriz2[i][j];
		}
	}
	//clock_t final=clock();
	time_t final=time(NULL);
	tiempo=(double)(final-inicio);
	//printf("%f",tiempo);
	
	FILE* fichero;
	fichero=fopen("datosEjercicio1.txt","a");
	fprintf(fichero,"\n%d %f",tamano,tiempo);
	fclose(fichero);

	return 0;
}
