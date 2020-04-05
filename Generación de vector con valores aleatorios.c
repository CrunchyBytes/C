/* Algoritmo: Generaci�n de vector con valores aleatorios 
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
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
		/* 'list[i]' es el residuo de un n�mero aleatorio con (l�miteSuperior - l�miteInferior + 1) + l�miteInferior
		 * �Qu� quiere decir eso?
		 * Por ejemplo, el l�mite Superior es 100 y el Inferior es 0.
		 * = 'list[i]' = residuo de un n�mero aleatorio con (100 - 0 + 1) + 0
		 * = 'list[i]' = residuo de un n�mero aleatorio con (101) + 0
		 * = 'list[i]' = residuo de un n�mero aleatorio con 101
		 * Por ende, sin importar cu�l sea el n�mero aleatorio generado, 'list[i]' = un n�mero entre 0 y 100.
		 * Porque, el residuo de una divisi�n puede ser [0, (divisor-1)].
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
