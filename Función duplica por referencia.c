/* Algoritmo: Funci�n duplica por referencia
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>

// Funci�n
void duplicate(int *a, int *b, int *c)
{
	/* "*var" no se refiere a la variable 'var', sino al apuntador de 'var'
	 * = Transferencia de valor por referencia
	 * = "Al valor que est� guardado en 'var' (apuntador de 'var'), as�gnale (su valor del momento) * 2
	 */
	*a *= 2;
	*b *= 2;
	*c *= 2;
}

int main(){
	//VARIABLES
	int x, y, z;
	
	//PROCESOS
	printf("\t\t\t\tDUPLICA POR REFERENCIA\n");
	printf("--------------------------------------------------------------------------------");
	printf("Ingrese los valores enteros para x, y, z a duplicar: ");
	scanf("%i %i %i", &x, &y, &z);
	printf("\nx: %i\ny: %i\nz: %i", x, y, z);
	/* Aqu�, en lugar de tomar el valor guardado en las variables y trasladarlo a las variables
	 * locales de la funci�n, se pasa el apuntador de las variables en tiempo real
	 * => Los procesos en la funci�n trabajan sobre y modifican las variables en el MAIN.
	 * = Transferencia de valor por referencia
	 */
	duplicate(&x, &y, &z);
	printf("\n\nDUPLICADOS:\nx = %i\ny = %i\nz = %i", x, y, z);
	
	//FIN
	getch();
	return 0;
}
