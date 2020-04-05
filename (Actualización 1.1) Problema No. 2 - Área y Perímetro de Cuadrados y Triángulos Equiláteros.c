/* Algoritmo: �rea y Per�metro de Cuadrados y Tri�ngulos Equilateros
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
*/
/* '#include' permite inclusi�n de bibliotecas
 * std = Standard
 * io = Input/Output
 */
#include<stdio.h>
// Importa funci�n de ra�z cuadrada:
#include<math.h>
// SIEMPRE se empieza por 'main'
int main() {
    system("color F0");
	/* Declaraci�n de variables.
	 * 'lado, pC, pT, aC, aT, s' son flotantes --> una d�cima
	 */
	float lado, pC, pT, aC, aT, s;
    
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un regl�n
	 * scanf Lee el valor.
	 * "%d" Valor num�rico --> entero
	 * "%f" Valor num�rico --> flotante
	 * "%s" Valor alfanum�rico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nIngrese la medida del lado de su figura: ");
	scanf("%f", &lado);
	
	//C�lculo de conversi�n
	pC = lado*4;
	pT = lado*3;
	aC = lado*lado;
	//'sqrt' indica ra�z cuadrada
	/* Decid� emplear esta f�rmula en lugar de la que nos puso en la presentaci�n,
     * dado que la primera fue explicada en un v�deo de Khan Academy.
	 * Usted puede ver el v�deo aqu�: 
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
