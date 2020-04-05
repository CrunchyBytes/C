/* Algoritmo: N�meros postivos o negativos, pares o impares, y m�ltiplos de 7.
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main() {
	//Declaraci�n de Variables
	int num;
	
	//Entrada de Datos
	//\xDA --> � (supuestamente)
	printf("					NUMEROS POSITIVOS O NEGATIVOS, PARES O IMPARES\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Favor de introducir un n%cmero entero: ", 163);
	scanf("%i", &num);
	
	//Procesos + Salida de Datos
	if (num>0)
	{
		//Funci�n M�dulo (%) s�lo es aplicable para enteros positivos.
		printf("\nEl n%cmero ingresado es positivo.", 163);
		if ((num%2)==0)
		{
			printf("\nEl n%cmero ingresado es par.", 163);
		}
		else
		{
			printf("\nEl n%cmero ingresado es impar.", 163);
			if ((num%7)==0)
			{
				printf("\nEl n%cmero ingresado es m%cltiplo de 7.", 163, 163);
			}
		}
	}
		else if (num==0)
		{
			printf("\nEl n%cmero ingresado es nulo (%i).", 163, num);
		}
			else
			{
				printf("\nEl n%cmero ingresado es negativo.", 163);
			}
		
	//Fin + Prolongaci�n de Ventana
	getch();
	return 0;
}
