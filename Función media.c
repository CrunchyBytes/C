/* Algoritmo: Función media
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>

/* Función 'media' de tipo flotante
 * Requiere de 2 enteros, 'a' y 'b', como parámetros
 * Asimismo, 'a' y 'b' se refieren a los enteros recibidos como 'i' y 'j', respectivamente, en MAIN
 */
float media(int a, int b)
{
	/* También es posible declarar una variable local de la función como el resultado de la función,
	 * y al final, regresar tal variable local, en lugar de regresar el resultado como tal.
	 */
	return (a+b)/2;
}

// MAIN
int main(){
	//VARIABLES
	int i, j;
	float resp;	
	
	//PROCESOS
	printf("\t\t\t\t FUNCI%cN MEDIA\n", 224);
	printf("--------------------------------------------------------------------------------");
	printf("Ingrese los 2 enteros del que quiera sacar el promedio: ");
	scanf("%i %i", &i, &j);
	
	resp = media(i,j);
	printf("\nLa media de %i y %i = %.2f", i, j, resp);
	
	//FIN
	getch();
	return 0;
}
