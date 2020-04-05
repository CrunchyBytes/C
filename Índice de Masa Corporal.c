/* Algoritmo: Índice de Masa Corporal
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
	 * 'imc, peso, altura' son flotantes --> una décima
	 */
	float imc, peso, altura;
	
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un reglón
	 * scanf Lee el valor.
	 * "%d" Valor numérico --> entero
	 * "%f" Valor numérico --> flotante
	 * "%s" Valor alfanumérico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nCuanto pesas (en kg)? ");
	scanf("%f", &peso);
	printf("\nCuanto mides (en metros)? ");
	scanf("%f", &altura);
	
	//Cálculo del IMC
	imc = peso/(altura*altura);
		
	//Despliegue de resultados
	printf("\nSu indice de masa corporal es de: %f ", imc);
	
	//Fin + Pospone ventana abierta
	getch();
	return 0;
}
