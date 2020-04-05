/* Algoritmo: Sumatoria (Para)
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main(){
	//Declaraci�n de Variables
	int i, n, suma=0;
	
	//Entrada de Datos
	printf("							SUMATORIA\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Ingrese un n%cmero entero: ", 163);
	scanf("%i", &n);
	
	//Procesos + Salida de Datos
	printf("Los valores de 'i' (n%cmero de ciclos) y la suma son: \n", 163);
	for (i = 1; i<=n; i++)
	{
		//La suma parcial. Va incrementando por 1 conforme cada ciclo.
		suma = suma + i;
		/* '\t' y '\n' son SERVICIOS DE ESCAPE. '\t' sirve como un tabulador.
		 * Muestra n�mero del ciclo y la suma parcial.
		 */
		printf("\n\t\t%i\t\t\t  %i", i, suma);
		/* Valor 'i' de la condici�n aumenta 1 al finalizar cada ciclo.
		 * = i = i + 1;
		 * A continuaci�n, es una OPERACI�N UNARIA:
		 * NO CONFUNDIRSE CON i = i++; produce un ciclo infinito.
		 */
	}
	printf("\n\nEl resultado de la suma es = %i", suma);
	//Fin del Programa + Prolongaci�n de Ventana
	getch();
	return 0;
}
