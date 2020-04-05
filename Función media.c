/* Algoritmo: Funci�n media
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>

/* Funci�n 'media' de tipo flotante
 * Requiere de 2 enteros, 'a' y 'b', como par�metros
 * Asimismo, 'a' y 'b' se refieren a los enteros recibidos como 'i' y 'j', respectivamente, en MAIN
 */
float media(int a, int b)
{
	/* Tambi�n es posible declarar una variable local de la funci�n como el resultado de la funci�n,
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
