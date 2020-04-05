/* Algoritmo: Comparación de Vectores
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
#include<stdbool.h>
int main() {
	//Variables
	int a[] = {2, 4, 6, 9, 3};
	int b[] = {2, 4, 6, 8, 16};
	int i, n=5;
	bool iguales=true;
	
	//Procesos
	for(i=0; i<5; i++)
	{
		if a[i]!=b[i]
		{
			iguales = false;
		}
	}
	
	if (iguales==true)
	{
		printf("Los vectores S%c son iguales.", 214);
	}
	else
	{
		printf("Los vectores NO son iguales.");
	}
	
	//Fin
	getch();
	return 0;
}
