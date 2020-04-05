/* Algoritmo: Conversión de temperaturas, Fahrenheit a Celsius
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
	/* Declaración de variables.
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
	printf("\nIngrese la temperatura a convertir (en Fahrenheit): ");
	scanf("%f", &fahrenheit);
	
	//Cálculo de conversión
	celsius = (fahrenheit-32)*(5.0/9);
	
	//Despliegue de resultados
	printf("\nLa temperatura en Celsius es de: %f C", celsius);
	
	//Fin + Prolongar ventana
	getch();
	return 0;
}
