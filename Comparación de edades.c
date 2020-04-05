/* Algoritmo: Comparaci�n de edades.
 * Alexander D�az Ruiz
 * 160046
 * Secci�n 2
 */
/* 2 maneras de escribir "�rbol" (c/ acento)
 * ("%crbol", 160) [ASCII] �
 * ("\xA0rbol");
 */
/* C�digo ASCII de cada letra:
 * � --> ("%c", 160)
 * � --> ("%c", 130)
 * � --> ("%c", 161)
 * � --> ("%c", 162)
 * � --> ("%c", 163)
 * � --> \xA4
 */
 #include<stdio.h>
 int main() {
 	//Variables:
 	int e1, e2;
 	// El n�mero entre [] es el n�mero de caracteres disponibles para n1 y n2 (2 nombres pedidos).
	char n1 [20], n2 [20];
	
 	//Lectura de datos:
 	printf("PRIMERA PERSONA: Ingrese su nombre y edad: \n");
 	//Cuando se tiene un conjunto de caracteres (String), no hace falta a�adir el "&" antes de la variable para guardarlo.
	scanf("%s %d", n1, &e1);
 	printf("\nSEGUNDA PERSONA: Ingrese su nombre y edad: \n");
 	//Cuando se tiene un conjunto de caracteres (String), no hace falta a�adir el "&" antes de la variable para guardarlo.
	scanf("%s %d", n2, &e2);
 	
 	//Procesos + Resultados
 	/* Decid� usar la condici�n "else if" en lugar de s�lo "if" para que los n�meros escaneados no pudieran entrar en m�s de 1 condici�n.
 	 * Asimismo, decid� pasar la condici�n de (e1 == e2 +1) y viceversa antes de las dem�s condiciones para evitar que entraran
 	 * en las exclusivas de e1 > e2 � e1 < e2.
 	 */
 	//Persona #1 es un a�o mayor que #2.
	if (e1==(e2)+1)
 	{
 		printf("\n\n%s es %d a\xA4o mayor que %s.", n1, (e1-e2), n2);
	}
	//Persona #2 es un a�o mayor que #1.
	else if (e2==(e1)+1)
 	{
 		printf("\n\n%s es %d a\xA4o mayor que %s.", n2, (e2-e1), n1);
	}
    else if (e1<e2)
 	{
 		printf("\n\n%s es %d a\xA4os mayor que %s.", n2, (e2-e1), n1);
	}
	else if (e1>e2)
 	{
 		printf("\n\n%s es %d a\xA4os mayor que %s.", n1, (e1-e2), n2);
	}
	else if (e1==e2)
 	{
 		printf("\n\n%s y %s tienen la misma edad (%d a\xA4os).", n1, n2, e1);
	}
	
	//Fin del programa + Prolongaci�n de la Ventana
	getch();
	return 0;
 }
