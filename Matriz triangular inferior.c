/* Algoritmo: Matriz triangular inferior
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h> 
int main(){
	//VARS
	int n, i, j;
	
	//PROCESOS
	// Recibir tama�o de la matriz + Declaraci�n
	printf("\t\t\t\t\t\t  MATRIZ TRIANGULAR INFERIOR\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\nIngrese el n%cmero de columnas/renglones de la matriz: ", 163);
	scanf("%i", &n);
	
	int a[n][n];
	
	// La matriz se llena de 0s
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
				a[i][j] = 0;
		}
	}
	
	/* Se recorre la matriz
	 * Por cada nuevo rengl�n al que se avanza, se hace un salto de l�nea
	 * Desde la columna 
	 */
	for (i=0; i<n; i++)
	{
		printf("\n");
		/* Inicializar 'j' en '<=i' para incluir diagonal de la matriz
		 * Inicializar 'j' en '<i' para no incluir diagonal de la matriz
		 */
		for (j<i; j<n; j++)
		{
			a[i][j] = 1;
			printf("\t%i", a[i][j]);
		}
	}
	
	//FIN
	getch();
	return 0;
}
