/* Algoritmo: Conversi�n de temperaturas, Fahrenheit a Celsius
 * Alexander D�az Ruiz
 * ID 160046
*/
/* Permite inclusi�n de bibliotecas
 * std = Standard
 * io = Input/Output
 */
#include<stdio.h>
// SIEMPRE se empieza por 'main'
int main() {
	/* Declaraci�n de variables.
	 * 'fahrenheit, celsius' son flotantes --> una d�cima
	 */
	float fahrenheit, celsius;
	 
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un regl�n
	 * scanf Lee el valor.
	 * "%d" Valor num�rico --> entero
	 * "%f" Valor num�rico --> flotante
	 * "%s" Valor alfanum�rico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nIngrese la temperatura a convertir (en Fahrenheit): ");
	scanf("%f", &fahrenheit);
	
	//C�lculo de conversi�n
	celsius = (fahrenheit-32)*(5.0/9);
	
	//Despliegue de resultados
	printf("\nLa temperatura en Celsius es de: %f C", celsius);
	
	//Fin + Prolongar ventana
	getch();
	return 0;
}
