/* Algoritmo: Capitales
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
 
#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

int main()
{
	//VARIABLES
	/*char pais[5][25] = {"Francia", "Espa%ca", "Alemania", "L%cbano", "Italia", 164, 161};
	char cap[5][25] = {"Par%cs", "Madrid", "Berl%cn", "Beirut", "Roma", 161, 161};
	*/
	char pais[5][25] = {"Francia", "Espana", "Alemania", "Libano", "Italia"};
	char cap[5][25] = {"Paris", "Madrid", "Berlin", "Beirut", "Roma"};
	char buscado[25];
	int i=0, n=5, pos=-1;
	bool sigue=true;
	char otro[] = "S";
	
	//PROCESOS
	/*for (i=0; i<5; i++)
	{
		printf("%s\n", cap[i][25]);
	}		
	*/
	printf("\t\t\t\t  CAPITALES\n");
	printf("--------------------------------------------------------------------------------");
	// Mientras 'otro' == "S":
	while (strcmp(otro, "S")==0)
	{ 
		// Se pregunta el nombre del pa�s
		printf("\nIngrese el nombre del pa%cs: ", 161);
		scanf("%s", &buscado);
		
		// Mientras 'sigue' == true y el contador no haya acabado:
		while (sigue && i<n)
		{
			// Si el pa�s 'i' es igual al que se busca, entonces se guarda la posici�n y ya no se sigue en el ciclo
			if (strcmp(pais[i], buscado)==0)
			{
				pos = i;
				sigue = false;
			}
			// Si no, entonces se recorre a la siguiente posici�n del vector
			else
			{
				i++;
			}
		}
		// Si el ciclo acaba, y nunca se encontr� el pa�s, entonces se muestra el siguiente mensaje:
		if (i>n && sigue==true)
		{
			printf("\nNO se encontr%c el pa%ss solicitado.", 162, 161);
		}
		/* Si el pa�s s� se encontr�, entonces se muestra su capital
		 * Tambi�n se reinician los valores iniciales del contador y de la posici�n
		 * Esto es para no empezar la b�squeda desde donde el �ltimo recorrido se qued�, si es que el usuario desea continuar
		 */
		else
		{
			printf("\nLa capital es %s", cap[pos]);
			i=0;
			pos=-1;
		}
		
		printf("\n\n%cDesea continuar? ", 168);
		scanf("%s", &otro);
		printf("\n");
	}
	
	//FIN
	return 0;
}
