/* Algoritmo: Comparación de edades.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
/* 2 maneras de escribir "árbol" (c/ acento)
 * ("%crbol", 160) [ASCII] ó
 * ("\xA0rbol");
 */
/* Código ASCII de cada letra:
 * á --> ("%c", 160)
 * é --> ("%c", 130)
 * í --> ("%c", 161)
 * ó --> ("%c", 162)
 * ú --> ("%c", 163)
 * ñ --> \xA4
 */
 #include<stdio.h>
 int main() {
 	//Variables:
 	int e1, e2;
 	// El número entre [] es el número de caracteres disponibles para n1 y n2 (2 nombres pedidos).
	char n1 [20], n2 [20];
	
 	//Lectura de datos:
 	printf("PRIMERA PERSONA: Ingrese su nombre y edad: \n");
 	//Cuando se tiene un conjunto de caracteres (String), no hace falta añadir el "&" antes de la variable para guardarlo.
	scanf("%s %d", n1, &e1);
 	printf("\nSEGUNDA PERSONA: Ingrese su nombre y edad: \n");
 	//Cuando se tiene un conjunto de caracteres (String), no hace falta añadir el "&" antes de la variable para guardarlo.
	scanf("%s %d", n2, &e2);
 	
 	//Procesos + Resultados
 	/* Decidí usar la condición "else if" en lugar de sólo "if" para que los números escaneados no pudieran entrar en más de 1 condición.
 	 * Asimismo, decidí pasar la condición de (e1 == e2 +1) y viceversa antes de las demás condiciones para evitar que entraran
 	 * en las exclusivas de e1 > e2 ó e1 < e2.
 	 */
 	//Persona #1 es un año mayor que #2.
	if (e1==(e2)+1)
 	{
 		printf("\n\n%s es %d a\xA4o mayor que %s.", n1, (e1-e2), n2);
	}
	//Persona #2 es un año mayor que #1.
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
	
	//Fin del programa + Prolongación de la Ventana
	getch();
	return 0;
 }
