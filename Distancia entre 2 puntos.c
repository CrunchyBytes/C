/* Algoritmo: Distancia entre 2 puntos 
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<math.h>


/* Función 'distancia' de tipo flotante
 * Requiere de 4 floatantes como parámetros
 */
float distancia(float x1, float y1, float x2, float y2)
{
	float d;
	/* La fórmula de distancia entre 2 puntos del plano cartesiano =
	 * Raíz cuadrada de ( (cuadrado de diferencia de coordenadas-x de ambos puntos) + (cuadrado de diferencia de coordenadas-y de ambos puntos) )
	 */
	d =  sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return d;
}

// MAIN
int main(){
	//VARIABLES
	float x1, y1, x2, y2, result;
	
	//PROCESOS
	printf("\t\t\t    DISTANCIA ENTRE DOS PUNTOS\n");
	printf("--------------------------------------------------------------------------------");
	/* Si se anotan los puros valores, sin el coma de la forma de notación, toma los primeros dos 
	 * valores como las coordenadas-x de ambos puntos
	 * En cambio, si se leen los valores como (%f %f) (sin las comas), y se escriben las coordenadas 
     * con ellas (las comas), el programa sólo lee el primer valor y lo guarda como x1.
	 */
    printf("Ingrese, en notaci%cn (x, y), las coordenadas del primer punto: ", 162);
	scanf("%f, %f", &x1, &y1);
	printf("\nAhora, las coordenadas del segundo punto: ");
	scanf("%f, %f", &x2, &y2);
	
	result = distancia(x1, y1, x2, y2);
	printf("\n\nLa distancia entre los puntos (%.2f, %.2f) y (%.2f, %.2f) = %.2f unidades", x1, y1, x2, y2, result);
	
	//FIN
	getch();
	return 0;
}
