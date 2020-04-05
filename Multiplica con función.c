/* Algoritmo: Multiplica c/ funci�n
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>

//Funci�n "misterio"
int misterio (int n){
	int t=0, i, m;
	for (i=1; i<6; i++)
	{
		/* 'm' es el resultado de la multiplicaci�n n*i
		 * La operaci�n completa del producto se imprime ANTES de la impresi�n en Main
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
	/* Aqu� no se imprime directamente el valor de 'num' tras pasar por la funci�n "misterio"
	 * Sino, llama a la funci�n, y de �sta es la que toma prioridad en imprimir.
	 */
	printf("\n\n\tEl resultado es: %i\n", misterio(num));
	
	getch();
	return 0;
}
