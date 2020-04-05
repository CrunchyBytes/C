/* Algoritmo: Área y Perímetro de Cuadrados y Triángulos Equilateros
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
*/
/* '#include' permite inclusión de bibliotecas
 * std = Standard
 * io = Input/Output
 */
#include<stdio.h>
// Importa función de raíz cuadrada:
#include<math.h>
// SIEMPRE se empieza por 'main'
int main() {
    system("color F0");
	/* Declaración de variables.
	 * 'lado, pC, pT, aC, aT, s' son flotantes --> una décima
	 */
	float lado, pC, pT, aC, aT, s;
    
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un reglón
	 * scanf Lee el valor.
	 * "%d" Valor numérico --> entero
	 * "%f" Valor numérico --> flotante
	 * "%s" Valor alfanumérico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nIngrese la medida del lado de su figura: ");
	scanf("%f", &lado);
	
	//Cálculo de conversión
	pC = lado*4;
	pT = lado*3;
	aC = lado*lado;
	//'sqrt' indica raíz cuadrada
	/* Decidí emplear esta fórmula en lugar de la que nos puso en la presentación,
     * dado que la primera fue explicada en un vídeo de Khan Academy.
	 * Usted puede ver el vídeo aquí: 
     * https://www.khanacademy.org/math/geometry-home/geometry-area-perimeter/
     * advanced-area-with-triangles/v/area-of-an-equilateral-triangle
	 */
	aT = (sqrt(3)/4)*(lado*lado);
	
	//Despliegue de resultados
	printf("\nSi su figura es un cuadrado, su perimetro es de %f unidades ", pC);
    printf("y su area es de %f unidades cuadradas.\n",aC);
	printf("\nSi es un triangulo equilatero, su perimetro es de %f unidades ", pT);
    printf("y su area es de %f unidades cuadradas.", aT);

	//Fin + Prolongar ventana
	getch();
	return 0;
}
