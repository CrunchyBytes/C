/* Algoritmo: Variaciones 'for' en Lenguaje C.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
	//Declaración de Variables
	int i, limite, suma=0;
	
	//Entrada de Datos
	printf("							SUMATORIA\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Ingrese un n%cmero entero: ", 163);
	scanf("%i", &limite);
	
	//Procesos + Salida de Datos
	printf("Los valores de 'i' (n%cmero de ciclos) y la suma son: \n", 163);
	/* for (i = 0; i<=limite; i = i + 2) --> Suma de ciclos pares.
	 * for (i = 0; i>=limite; i--) --> (c/ 'limite' positivo) Suma == 0.
	 * for (i = 0; i>=limite; i--) --> (c/ 'limite' negativo) Suma de números negativos.
	 * for (i = limite; i>=0; i++) --> Ciclo infinito.
	 */
	for (i = limite; i>=0; i++)
	{
		//La suma parcial. Va incrementando por 1 conforme cada ciclo.
		suma = suma + i;
		/* '\t' y '\n' son SERVICIOS DE ESCAPE. '\t' sirve como un tabulador.
		 * Muestra número del ciclo y la suma parcial.
		 */
		printf("\n\t\t%i\t\t\t  %i", i, suma);
		/* Valor 'i' de la condición aumenta 1 al finalizar cada ciclo.
		 * = i = i + 1;
		 * A continuación, es una OPERACIÓN UNARIA:
		 * NO CONFUNDIRSE CON i = i++; produce un ciclo infinito.
		 */
	}
	printf("\n\nEl resultado de la suma es = %i", suma);
	//Fin del Programa + Prolongación de Ventana
	getch();
	return 0;
}
