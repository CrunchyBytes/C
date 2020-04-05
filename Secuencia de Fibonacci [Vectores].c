/* Algoritmo: Secuencia de Fibonacci [Vectores]
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Variables
	int i=2, n;
	
	long long int suma=0;
	
	//Procesos
	printf("\t\t\t SECUENCIA DE FIBONACCI c/ VECTORES\n");
	printf("--------------------------------------------------------------------------------");
	
	/* A partir de n = 94, se acaba la capacidad de la longitud de los bits.
	 * Cuando esto sucede, el último bit se vuelve negativo.
	 * Al convertir de número binario a decimal, el resultado se ve afectado.
	 */
	printf("%cDe cu%cntos n%cmeros desea la secuencia? ", 168, 160, 163);
	scanf("%i", &n);
	
	/* 'u' y 'p' son declarados como enteros tipo "long long" (%lli)
     * "int" (%i) [2 bytes] --> {-32,768; 32,767}
     * "long" (%li) [4 bytes] --> {-2,147,483,648; 2,147,483,647}
     * "long long" (%lli) [8 bytes] --> {9,223,372,036,854,775,808}
     */
	long long int fb[n];
	fb[0]=0, fb[1]=1; 
	
	while (i<n)
	{
		fb[i]=fb[i-1]+fb[i-2];
		i++;
	}
	printf("\nLos primeros %i t%crminos de la Serie de Fibonacci son: \n", n, 130);
	
	for (i=0; i<n; i++)
	{
		printf("\n%i) %lli", i+1, fb[i]);
		suma = suma + fb[i];
	}
	printf("\n\nY todos los t%crminos suman un total de = %lli", 130, suma);
	
	//Fin
	getch();
	return 0;
}
