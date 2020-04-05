/* Algoritmo: Tipos de jubilación.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
#include <stdio.h>
int main() {
	//Variables
	int edad, antg;
	
	//Lectura de datos
	printf("Por favor ingrese su edad: \n");
	scanf("%d", &edad);
	/* ñ --> \xA4
	 * ü --> ("%c", 129)
	 */
    printf("\nAhora, ingrese sus a\xA4os de antig%cedad: \n", 129);
	scanf("%d", &antg);
	
	//Procesos + Resultados
	// ó --> ("%c", 162)
	/* Incluí la expresión lógica ">=" en lugar de ">" porque no venía incluido la condición si la antigüedad del usuario es exactamente
	 * 25 años.
	 */
	if (edad>=60 && antg<25)
	{
		printf("\n\nFelicidades!, usted tiene la opci%cn de jubilarse por edad.", 162);
	}
	else if (edad>=60 && antg>=25)
	{
		printf("\n\nFelicidades!, usted tiene la opci%cn de jubilarse por antig%cedad adulta.", 162, 129);
	}
	else if (edad<60 && antg>=25)
	{
		printf("\n\nFelicidades!, usted tiene la opci%cn de jubilarse por antig%cedad joven.", 162, 129);
	}
	else if (edad<60 && antg<25)
	{
		/* ú --> ("%c", 163)
		 * í --> ("%c", 161)
		 * á --> ("%c", 160)
		 */
	    /* El mensaje se proyecta nada más en 2 líneas.
         * Sólo lo repartí en 3 para que no abarcara mucho espacio texto en una línea de código.
	     */
		printf("\n\nLo lamentamos, usted a%cn no puede jubilarse.", 163);
        printf("\nEspere %d a\xA4os para cumplir la edad m%cnima, ", (60-edad), 161);
        printf("o trabaje durante %d a\xA4os m%cs para lograr la antig%cedad necesaria.", (26-antg), 160, 129);
	}
	
	//Fin + Prolongación ventana
	getch();
	return 0;
}
