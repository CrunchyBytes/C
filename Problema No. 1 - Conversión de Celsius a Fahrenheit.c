/* Algoritmo: Conversi�n de temperaturas, Celsius a Fahrenheit.
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
*/
/* '#include' permite inclusi�n de bibliotecas
 * std = Standard
 * io = Input/Output
 */
#include<stdio.h>
// SIEMPRE se empieza por 'main'
int main() {
    system("color F0");
	/* Declaraci�n de variables:
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
	printf("\nIngrese la temperatura a convertir (en grados Celsius): ");
	scanf("%f", &celsius);
	
	//C�lculo de conversi�n
	fahrenheit = ((9*celsius)/5)+32;
	
	//Despliegue de resultados
	printf("\nLa temperatura convertida en grados Fahrenheit es de: %f F", fahrenheit);
	
	//Fin + Prolongar ventana
	getch();
	return 0;
}
