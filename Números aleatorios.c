/* Algoritmo: Números aleatorios
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<time.h>
int main() {
	//Declaración de Variables
	int num, i, max=100, min=60;
	/* 'srand' es la "semilla".
	 * Dependiendo del argumento de 'time()', la "semilla" se altera.
	 */
	srand(time(0));
	/*Entrada de Datos
	 * Nulo. No hace falta que el usuario ingrese datos.
	 */
	
	//Procesos + Salida de Datos
	for (i=0; i<10; i++)
	{
		/* 'rand()' quiere decir "random"; produce números aleatorios.
		 * La función no tiene argumentos (('')).
		 * A pesar de llamarse "random", siempre genera los mismos números. 
		 * Le hace falta una "semilla" para que en verdad produzca números aleatorios.
		 */
		/* num = (Residuo de (#aleatorio) / (41)) + 60
		 * = (Número entre [0, 40]) + 60
		 * = Número entre [60, 100] 
		 */
		num = rand()%(max-min+1)+min;
		printf("\n%i", num);
	}
		
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
