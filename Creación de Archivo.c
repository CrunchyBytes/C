/* Algoritmo: Creaci�n de Archivo
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
#include<time.h>
int main() {
	//Declaraci�n de Variables
	int num, i, max=100, min=60;
	/* 'srand' es la "semilla".
	 * Dependiendo del argumento de 'time()', la "semilla" se altera.
	 */
	srand(time(0));
	/* Se genera un archivo con un identificador 'id'.
	 * El identificador abre un archivo de texto llamado "walg.txt", que est� habilitado para que se pueda escribir en �l ("w").
	 * "w" --> Crea archivo vac�o para escribir. Si ya existe, borra los datos existentes.
	 * "r" --> Abre archivo para lectura. El archivo debe ser existente.
	 * "a" --> Anexa datos al final de un archivo. Crea el archivo si no existe.
	 * "r+" --> Abre archivo para actualizar (leer y escribir). El archivo debe ser existente.
	 * "w+" --> Crea archivo vac�o para leer y escribir. Si ya existe, borra los datos existentes.
	 * "a+" --> Abre un archivo para leer y anexar.
	 */
	FILE * id;
	id = fopen("walg.txt", "w");
	/*Entrada de Datos
	 * Nulo. No hace falta que el usuario ingrese datos.
	 */
	
	//Procesos + Salida de Datos
	for (i=0; i<10; i++)
	{
		/* 'rand()' quiere decir "random"; produce n�meros aleatorios.
		 * La funci�n no tiene argumentos (('')).
		 * A pesar de llamarse "random", siempre genera los mismos n�meros. 
		 * Le hace falta una "semilla" para que en verdad produzca n�meros aleatorios.
		 */
		/* num = (Residuo de (#aleatorio) / (41)) + 60
		 * = (N�mero entre [0, 40]) + 60
		 * = N�mero entre [60, 100] 
		 */
		num = rand()%(max-min+1)+min;
		printf("\n%i", num);
		/* 'fprintf' es igual a 'printf', s�lo que est� especializado para escribir en un archivo.
		 * �En qu� archivo se escribe? El que tenga el identificador 'id'.
		 */
		fprintf(id, "\n %i", num);
	}
		
	//Fin + Prolongaci�n de Ventana
	// As� como se abri� el archivo al principio del programa, al final se debe cerrar.
	fclose(id);
	getch();
	return 0;
}
