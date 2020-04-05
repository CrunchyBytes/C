/* Algoritmo: Tipos de jubilaci�n.
 * Alexander D�az Ruiz
 * 160046
 * Secci�n 2
 */
#include <stdio.h>
int main() {
	//Variables
	int edad, antg;
	
	//Lectura de datos
	printf("Por favor ingrese su edad: \n");
	scanf("%d", &edad);
	/* � --> \xA4
	 * � --> ("%c", 129)
	 */
    printf("\nAhora, ingrese sus a\xA4os de antig%cedad: \n", 129);
	scanf("%d", &antg);
	
	//Procesos + Resultados
	// � --> ("%c", 162)
	/* Inclu� la expresi�n l�gica ">=" en lugar de ">" porque no ven�a incluido la condici�n si la antig�edad del usuario es exactamente
	 * 25 a�os.
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
		/* � --> ("%c", 163)
		 * � --> ("%c", 161)
		 * � --> ("%c", 160)
		 */
	    /* El mensaje se proyecta nada m�s en 2 l�neas.
         * S�lo lo repart� en 3 para que no abarcara mucho espacio texto en una l�nea de c�digo.
	     */
		printf("\n\nLo lamentamos, usted a%cn no puede jubilarse.", 163);
        printf("\nEspere %d a\xA4os para cumplir la edad m%cnima, ", (60-edad), 161);
        printf("o trabaje durante %d a\xA4os m%cs para lograr la antig%cedad necesaria.", (26-antg), 160, 129);
	}
	
	//Fin + Prolongaci�n ventana
	getch();
	return 0;
}
