/* Algoritmo: Creación de Archivo
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
	/* Se genera un archivo con un identificador 'id'.
	 * El identificador abre un archivo de texto llamado "walg.txt", que está habilitado para que se pueda escribir en él ("w").
	 * "w" --> Crea archivo vacío para escribir. Si ya existe, borra los datos existentes.
	 * "r" --> Abre archivo para lectura. El archivo debe ser existente.
	 * "a" --> Anexa datos al final de un archivo. Crea el archivo si no existe.
	 * "r+" --> Abre archivo para actualizar (leer y escribir). El archivo debe ser existente.
	 * "w+" --> Crea archivo vacío para leer y escribir. Si ya existe, borra los datos existentes.
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
		/* 'fprintf' es igual a 'printf', sólo que está especializado para escribir en un archivo.
		 * ¿En qué archivo se escribe? El que tenga el identificador 'id'.
		 */
		fprintf(id, "\n %i", num);
	}
		
	//Fin + Prolongación de Ventana
	// Así como se abrió el archivo al principio del programa, al final se debe cerrar.
	fclose(id);
	getch();
	return 0;
}
