/* Algoritmo: Intercambio de valores
 * Alexander Díaz Ruiz
 * ID 160046
*/
/* Permite inclusión de bibliotecas
 * std = Standard
 * io = Input/Output
 */
#include<stdio.h>
// SIEMPRE se empieza por 'main'
int main() {
	
	/*Declaración de variables.
	 * 'a, b, y temp' son enteros
	 */
	int a, b, temp;
	
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un reglón
	 * scanf Lee el valor.
	 * "%d" Valor numérico --> entero
	 * "%f" Valor numérico --> flotante
	 * "%s" Valor alfanumérico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nIngrese el valor de a: ");
	scanf("%d", &a);
	printf("\nIngrese el valor de b: ");
	scanf("%d", &b);
	printf("\nLos valores originales de a y b son: %d y %d\n", a, b);
	
	// Intercambio de valores	
	temp = a;
	a = b;
	b = temp;
	
	//Despliegue de resultados
	printf("\nLos valores intercambiados son: %d y %d.", a, b);
	
	//Fin
	return 0;
}