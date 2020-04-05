/* Algoritmo: Números primos
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main() {
	//Declaración de Variables
	int num, div=2, coc;
	bool prime=true;
	
	//Entrada de Datos
	printf("\t\t\t\t\t\t  N%cMEROS PRIMOS\n", 233);
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Ingrese su n%cmero: ", 163);
	scanf("%i", &num);
	
	/*Procesos + Salida de Datos
	 * A partir del 1, todo número que le sigue puede ser primo o no.
	 */
	if (num>1)
	{
		prime=true;
	}
	else
	{
		prime=false;
	}
	// No hace falta hacer un ciclo hasta ('n'-1), con llegar a la raíz cuadrada de 'n' basta.
	while (div<=sqrt(num)&&prime)
	{
		coc = num/div;
		printf("\n/%i\t-->\t%i", div, coc);
		if (coc*div == num)
		{
			prime=false;
		}
		div++;
	}
	if (prime)
	{
		printf("\n\nEl n%cmero %i es primo.", 163, num);
	}
	else
	{
		printf("\n\nEl n%cmero %i NO es primo.", 163, num);
	}
		
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
