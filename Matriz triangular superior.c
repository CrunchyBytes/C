/* Algoritmo: Matriz triangular superior
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
int main(){
	//VARS
	int n, i, j;
	
	//PROCESOS
	// Recibir tamaño de la matriz + Declaración
	printf("\t\t\t\t\t\t  MATRIZ TRIANGULAR SUPERIOR\n");
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
	 * Por cada nuevo renglón al que se avanza, se hace un salto de línea
	 * 
	 */
	for (i=0; i<n; i++)
	{
		printf("\n");
		/* Inicializar 'j' en 'i' para incluir diagonal de la matriz
		 * Inicializar 'j' en 'i+1' para no incluir diagonal de la matriz
		 */
		for (j=i+1; j<n; j++)
		{
			a[i][j] = 1;
			printf("\t%i", a[i][j]);
		}
	}
	
	//FIN
	getch();
	return 0;
}
