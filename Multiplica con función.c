/* Algoritmo: Multiplica c/ función
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>

//Función "misterio"
int misterio (int n){
	int t=0, i, m;
	for (i=1; i<6; i++)
	{
		/* 'm' es el resultado de la multiplicación n*i
		 * La operación completa del producto se imprime ANTES de la impresión en Main
		 */
		m = n*i;
		printf("\n%i X %i = %i", n, i, m);
		t+=m;
	}
	return t;
}

/* Main
 * El programa siempre comienza a partir del Main
 */
int main(){
	int num;
	printf("\nN%cmero: ", 163);
	scanf("%i", &num);
	/* Aquí no se imprime directamente el valor de 'num' tras pasar por la función "misterio"
	 * Sino, llama a la función, y de ésta es la que toma prioridad en imprimir.
	 */
	printf("\n\n\tEl resultado es: %i\n", misterio(num));
	
	getch();
	return 0;
}
