/* Algoritmo: Búsqueda secuencial en lista
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
#include<stdbool.h>
int main() {
	//Declaración de Variables
	int i, j=0, n, pos, num;
	bool esta=0;
	
	//Entrada de Datos + Procesos + Salida de Datos
	printf("%cDe cu%cntos elementos es su lista? ", 168, 160);
	scanf("%i", &n);
	int a[n];
	
	for (i=0; i<n; i++)
	{
		printf("\n\nIngrese un valor (entero) para 'a': ");
		scanf("%i", &a[i]);
		printf("\na[%i] = %i", i, a[i]);
	}
	
	printf("\n\nAhora, ingrese el n%cmero a buscar: ", 163);
	scanf("%i", &num);
	
	while(j<=n && esta==0)
	{
		if (a[j]!=num)
		{
			j++;
		}
		else
		{
			esta=1;
			pos=j;
		}
	}
	
	if (esta==1)
	{
		printf("\n\nSu n%cmero (%i) est%c en la posici%cn [%i] del arreglo.", 163, num, 160, 162, pos);
	}
	else
	{
		printf("\n\nLo siento, su n%cmero no se encuentra guardado en el arreglo.", 163);
	}
	
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
