/* Algoritmo: �ndice de Masa Corporal
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
	 * 'imc, peso, altura' son flotantes --> una d�cima
	 */
	float imc, peso, altura;
	
	/* Lectura de datos
	 * printf Imprime un mensaje
	 * \n Salta un regl�n
	 * scanf Lee el valor.
	 * "%d" Valor num�rico --> entero
	 * "%f" Valor num�rico --> flotante
	 * "%s" Valor alfanum�rico --> Cadena
	 * &a Guarda el dato en la variable 'a'
	 */
	printf("\nCuanto pesas (en kg)? ");
	scanf("%f", &peso);
	printf("\nCuanto mides (en metros)? ");
	scanf("%f", &altura);
	
	//C�lculo del IMC
	imc = peso/(altura*altura);
		
	//Despliegue de resultados
	printf("\nSu indice de masa corporal es de: %f ", imc);
	
	//Fin + Pospone ventana abierta
	getch();
	return 0;
}
