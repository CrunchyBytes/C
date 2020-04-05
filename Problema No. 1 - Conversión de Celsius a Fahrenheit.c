/* Algoritmo: Conversión de temperaturas, Celsius a Fahrenheit.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
*/
/* '#include' permite inclusión de bibliotecas
 * std = Standard
 * io = Input/Output
 */
#include<stdio.h>
// SIEMPRE se empieza por 'main'
int main() {
    system("color F0");
	/* Declaración de variables:
	 * 'fahrenheit, celsius' son flotantes --> una décima
	 */
	float fahrenheit, celsius;
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un reglón
	 * scanf Lee el valor.
	 * "%d" Valor numérico --> entero
	 * "%f" Valor numérico --> flotante
	 * "%s" Valor alfanumérico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nIngrese la temperatura a convertir (en grados Celsius): ");
	scanf("%f", &celsius);
	
	//Cálculo de conversión
	fahrenheit = ((9*celsius)/5)+32;
	
	//Despliegue de resultados
	printf("\nLa temperatura convertida en grados Fahrenheit es de: %f F", fahrenheit);
	
	//Fin + Prolongar ventana
	getch();
	return 0;
}
