/* Algoritmo: Ordenamiento de Burbuja
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
#include<stdbool.h>
int main() {
	//Variables
	int i, temp, n, limS, limI;
	bool edit=true;
	
	//Procesos
	printf("\t\t\t\tORDENAMIENTO DE BURBUJA\n");
	printf("--------------------------------------------------------------------------------");
	// Establecimiento de los límites de los valores a llenar el vector
	printf("%cDe cu%cntos elementos ser%c su lista? ", 168, 160, 160);
	scanf("%i", &n);
	printf("\n\n%cCu%cles son los l%cmites de los valores? ", 168, 160, 161);
	printf("\nL%cMITE INFERIOR: ", 214);
	scanf("%i", &limI);
	printf("L%cMITE SUPERIOR: ", 214);
	scanf("%i", &limS);
	
	int x[n];
	
	printf("\n\nLa lista (desordenada) es: ");
	for (i=0; i<n; i++)
	{
		x[i] = rand()%(limS-limI+1)+limI;
		printf("\n#%i: %i", i+1, x[i]);
	}
	// Ordenamiento de Burbuja
	while (edit==true)
	{
		edit=false;
		for(i=0; i<n; i++)
		{
			if (x[i] > x[i+1])
			{
				temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
				edit=true;
			}
		}
	}
	
	printf("\n\nLa lista (ordenada) es: ");
	for (i=0; i<n; i++)
	{
		printf("\n#%i: %i", i+1, x[i]);
	}
	
	//Fin
	getch();
	return 0;
}
