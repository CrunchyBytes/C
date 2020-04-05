/* Algoritmo: Trunca - Redondea
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>

// Función 'trunca'
int trunca(float num)
{
    // La función regresa la forma trunca del número leído; sin parte decimal.
	return num;
}

// Función 'redondea'
int redondeo(float num)
{
    /* Se le añade 0.5 al número, cuando su diferencia >= 0.5, porque, al leerlo como un entero,
     * truncaría la parte decimal del número.
     * Sin embargo, como añadirle 0.5 sería el mínimo para convertir al número al siguiente entero,
     * parece que "redondea" el número original.
     */
	return num+0.5;
}

// MAIN
int main(){
	//VARIABLES
	float prueba, difer;
	
	//PROCESOS
	printf("\t\t\t\tTRUNCA - REDONDEA\n", 224);
	printf("--------------------------------------------------------------------------------");
	printf("%cCu%cl es el n%cmero a convertir? ", 168, 160, 163);
	scanf("%f", &prueba);
	
	// 'difer' es el residuo decimal de 'prueba'
	difer = prueba - (int)prueba;
	printf("\nLa diferencia del n%cmero es = %.2f", 163, difer);
	
	if (difer < 0.5)
		printf("\n\n=> El n%cmero truncado es = %i", 163, trunca(prueba));
	else
		printf("\n\n=> El n%cmero redondeado es = %i", 163, redondeo(prueba));
	
	//FIN
	getch();
	return 0;
}
