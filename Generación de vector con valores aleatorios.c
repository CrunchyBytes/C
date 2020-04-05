/* Algoritmo: Generación de vector con valores aleatorios 
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
int main(){
	//Variables
	int n, i, limI, limS, paso, min, temp;
	
	//Procesos
	printf("\t\t\t\t\t\tVECTOR CON VALORES ALEATORIOS\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Por favor ingrese el n%cmero de t%crminos de su lista: ", 163, 130);
	scanf("%i", &n);
	printf("\nAhora, el l%cmite inferior y el superior, respectivamente: \n", 161);
	scanf("%i %i", &limI, &limS);
	
	int list[n];
	printf("\nSu lista (desordenada) es:");	
	for (i=0; i<n; i++)
	{
		/* 'list[i]' es el residuo de un número aleatorio con (límiteSuperior - límiteInferior + 1) + límiteInferior
		 * ¿Qué quiere decir eso?
		 * Por ejemplo, el límite Superior es 100 y el Inferior es 0.
		 * = 'list[i]' = residuo de un número aleatorio con (100 - 0 + 1) + 0
		 * = 'list[i]' = residuo de un número aleatorio con (101) + 0
		 * = 'list[i]' = residuo de un número aleatorio con 101
		 * Por ende, sin importar cuál sea el número aleatorio generado, 'list[i]' = un número entre 0 y 100.
		 * Porque, el residuo de una división puede ser [0, (divisor-1)].
		 */
		list[i] = rand()%(limS-limI+1)+limI;
		printf("\n%i", list[i]);
	}
	
	for (paso=0; paso<n; paso++)
	{
		min = paso;
		for (i=paso+1; i<n; i++)
		{
			if (list[i] < list[min])
			{
				min = i;
			}
		}
		/* Intercambio entre 'paso' y 'min'
		 * Usa la variable temporal 'temp' para no perder el registro de 'list[paso]'
		 */
		temp = list[paso];
		list[paso] = list[min];
		list[min] = temp;
	}
	
	printf("\n\nSu lista (ordenada) es:");
	for (i=0; i<n; i++)
	{
		printf("\n%i", list[i]);
	}
	
	//Fin
	getch();
	return 0;
}
