/* Algoritmo: Matriz triangular
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
	printf("\t\t\t\t\t\t  MATRIZ TRIANGULAR\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\nIngrese el n%cmero de columnas/renglones de la matriz: ", 163);
	scanf("%i", &n);
	
	int a[n][n];
	
	/* Llenar matriz con 0s y 1s
	 * Si (i+j) <= 2i [
	 */
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if (i+j <= 2*i)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	for (i=0; i<n; i++)
	{
		printf("\n");
		for (j=0; j<n; j++)
		{
			printf("\t%i", a[i][j]);
		}
	}
	
	//FIN
	getch();
	return 0;
}
