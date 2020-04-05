/* Algoritmo: Matriz de diagonales y transpuesta
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
int main() {
	//VARIABLES
	int n, i, j, limS=50, limI=10, sumD=0, sumI=0;
	
	//PROCESOS
	printf("\t\t\t\t\t\t  MATRIZ DE DIAGONALES\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	// Dimensión de la matriz
	printf("Ingrese el n%cmero de columnas/renglones de la matriz a crear: ", 163);
	scanf("%i", &n);
	
	// Creación de matriz cuadrada
	int x[n][n];
	int xT[n][n];
	
	printf("\n\nSu matriz es la siguiente: ");
	// Almacenamiento de datos enteros, entre 10 y 50, en la matriz + Proyección
	for (i=0; i<n; i++)
	{
		// Cuando el programa recorra un renglón nuevo, se hace salto de renglón
		printf("\n");
		for (j=0; j<n; j++)
		{
			x[i][j] = rand()%(limS-limI+1)+limI;
			// Al pasar a una nueva columna, se imprime el valor de la matriz y se presiona el tabulador (para dar la impresión de diferentes columnas)
			printf("%i\t", x[i][j]);
		}
	}
	// Calculación de suma de Diagonales
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			/* Si la coordenada de los renglones es el mismo que el de las columnas, es un elemento del diagonal principal.
			 * = Se añade a su suma correspondiente
			 */
			if (i==j)
			{
				sumD+=x[i][j];
			}
			/* Si la suma de la coordenada de los renglones y el de las columnas es igual a la dimensión de los (renglones/columnas)-1, entonces es un elemento del diagonal inverso.
			 * = Se añade a su suma correspondiente
			 * La condición debe ser 'if' y no 'else if', ya que los valores coincidentes de ambas diagonales no serían tomados en cuenta para la suma de diagonal inversa.
			 */
			if ((i+j)==(n-1))
			{
				sumI+=x[i][j];
			}
		}
	}
	// Proyección de las Sumas + cuál de las 2 es mayor
	if (sumD < sumI)
	{
		printf("\n\nLa suma de la diagonal inversa, %i, es mayor a la de la diagonal principal, %i", sumI, sumD);
	}
		else if (sumD > sumI)
		{
			printf("\n\nLa suma de la diagonal principal, %i, es mayor a la de la diagonal inversa, %i", sumD, sumI);
		}
			else if (sumD==sumI)
			{
				printf("\n\nLa suma de ambas diagonales, %i, son iguales", sumD);
			}

	printf("\n\nPor ende, la matriz transpuesta es: ");
	/* Proyección de matriz transversa
	 * Como la matriz original recorrió columnas --> renglones, la transpuesta hace lo opuesto: renglones --> columnas
	 * = Invierte columnas con renglones, y viceversa
	 */
	for (j=0; j<n; j++)
	{
		// Cuando el programa recorra un renglón nuevo, se hace salto de renglón
		printf("\n");
		for (i=0; i<n; i++)
		{
			xT[j][i]=x[i][j];
			// Al pasar a una nueva columna, se imprime el valor de la matriz y se presiona el tabulador (para dar la impresión de diferentes columnas)
			printf("%i\t", x[i][j]);
		}
	}

	//SALIDA
	getch();
	return 0;
}
