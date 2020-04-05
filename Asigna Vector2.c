/* Algoritmo: Asigna Vector
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Declaración de Variables
	int i, j, n=6;
	/* long: x >= 32k
	 * int: 4 bytes
	 */
	long a[] = {42775, 75342, 94534, 34643, 43676, 43677};
	/* float: 8 bytes
	 * double: 16 bytes
	 */
	float c[] = {63.33, 2.63, 72.66, 1.66, 2.52, 7.24};
	
	//Procesos + Salida de Datos
	printf("\t\t\t\t\t\tVECTOR (DE VALORES ASIGNADOS)\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	
	printf("\nLos n%cmeros enteros del vector 'a' son: ", 163);
	for (i=0; i<n; i++)
	{
		//Se utiliza "%li" para denominar "long integer".
		printf("\n%li", a[i]);
	}
	
	printf("\n\nLos n%cmeros reales del vector 'c' son: ", 163);
	for (j=0; j<n; j++)
	{
		printf("\n%.2f", c[j]);
	}
	
	//Fin + Prolongación de Ventana
	getch();
	return 0;	
}
