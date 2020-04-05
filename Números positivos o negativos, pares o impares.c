/* Algoritmo: Números postivos o negativos, pares o impares, y múltiplos de 7.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Declaración de Variables
	int num;
	
	//Entrada de Datos
	//\xDA --> Ú (supuestamente)
	printf("					NUMEROS POSITIVOS O NEGATIVOS, PARES O IMPARES\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Favor de introducir un n%cmero entero: ", 163);
	scanf("%i", &num);
	
	//Procesos + Salida de Datos
	if (num>0)
	{
		//Función Módulo (%) sólo es aplicable para enteros positivos.
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
		
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
