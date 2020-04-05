/* Algoritmo: Trunca - Redondea
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>

// Funci�n 'trunca'
int trunca(float num)
{
    // La funci�n regresa la forma trunca del n�mero le�do; sin parte decimal.
	return num;
}

// Funci�n 'redondea'
int redondeo(float num)
{
    /* Se le a�ade 0.5 al n�mero, cuando su diferencia >= 0.5, porque, al leerlo como un entero,
     * truncar�a la parte decimal del n�mero.
     * Sin embargo, como a�adirle 0.5 ser�a el m�nimo para convertir al n�mero al siguiente entero,
     * parece que "redondea" el n�mero original.
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
