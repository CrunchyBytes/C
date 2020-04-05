/* Algoritmo: Factorial
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h> 
int main() {
	//Declaraci�n de Variables
	int n, fact=1;
	float tot;
	
	//Entrada de Datos
	printf("\t\t\t\t\t\tFACTORIALES\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Ingrese el n%cmero al que se realizar%c el factorial: ", 163, 160);
	scanf("%i", &n);
	
	//Procesos + Salida de Datos
	if (n>=0)
	{
		while (n>=1)
		{
			fact*=n;
			n--;
		}
		printf("\nEl factorial del n%cmero = %i", 163, fact);
	}
	else
	{
		printf("\nERROR. No es posible sacar el factorial de un n%cmero negativo.", 163);
	}
	
	//Fin + Prolongaci�n de Ventana
	getch();
	return 0;
}
