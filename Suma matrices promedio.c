/* Algoritmo: Suma matrices promedio
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
 
 /* Llenar matrices A y B de valores aleatorios entre 1 y 15
 	Matriz C = Suma de A y B en respectivas posiciones
 	Sacar promedio de los valores de C
 	Imprimir valores de C > promedio
  */
  
#include<stdio.h> 

int main()
{
	//VARIABLES
	int n, m, i, j;
	float prom=0;
	
	//PROCESOS
	printf("\t\t\t\tSUMA MATRICES PROMEDIO\n");
	printf("--------------------------------------------------------------------------------");
	printf("Ingrese el n%cmero de renglones de su matriz, seguida por el n%cmero de columnas: ", 163, 163);
	scanf("%i %i", &n, &m);
	
	int a[n][m], b[n][m], c[n][m];
	
	printf("\n\nMATRIZ A:\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			a[i][j] = rand()%(15)+1;
			printf("%i\t", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMATRIZ B:\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			b[i][j] = rand()%(15)+1;
			printf("%i\t", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMATRIZ C:\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%i\t", c[i][j]);
			prom+=(float)c[i][j];
		}
		printf("\n");
	}
	
	prom/=m*n;
	printf("\n\nEl promedio de los valores de la matriz C es = %.2f", prom);
	
	printf("\n\nLos valores de la matriz que son mayores al promedio son:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			if (c[i][j]>prom)
			{
				printf("%i\n", c[i][j]);
			}
		}
	}
	
	//FIN
	getch();
	return 0;
}
