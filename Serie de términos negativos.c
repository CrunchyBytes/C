/* Algoritmo: Serie de términos negativos
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
int main() {
	//Declaración de Variables
	int n, term, sign=-1, d=2;
	float tot=1;
	
	//Entrada de Datos
	printf("\t\t\t\t\t\tSERIE DE NEGATIVOS\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Ingrese el n%cmero de t%crminos (incluyendo el '1' del Inicio): ", 163, 130);
	scanf("%i", &n);
	
	//Procesos + Salida de Datos
	for (term=2; term<=n; term++)
	{
		tot+=sign*(1.0/d);
		d+=2;
		sign*=-1;
	}
	printf("\n\nEl resultado de la secuencia es %.2f", tot);
	
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
