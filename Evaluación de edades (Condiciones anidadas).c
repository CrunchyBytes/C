/* Algoritmo: Evaluaci�n de edades (Condiciones anidadas).
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main(){
	//Declaraci�n de Variables
	int edad;
	
	//Entrada de Datos
	printf("					  	EVALUACI%CN DE EDAD\n", 224);
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Por favor ingrese su edad (en a%cos): ", 164);
	scanf("%i", &edad);
	
	//Procesos + Salida de Datos
	if (edad>=0&&edad<=12)
	{
		printf("\n\nUsted es un ni%co.", 164);
	}
		else if (edad>12&&edad<=17)
		{
			printf("\n\nUsted es un adolescente.");
		}
			else if (edad>17)
			{
				printf("\n\nUsted es un adulto.");
			}
				else
				{
					printf("\n\nFavor de ingresar una edad v%clida.", 160);
				}
	
	//Fin + Prolongaci�n de Ventana
	getch();
	return 0;
}
