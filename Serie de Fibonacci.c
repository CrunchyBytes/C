/* Algoritmo: Serie de Fibonacci
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Declaración de Variables
	int t, n;
	
	 /* 'u' y 'p' son declarados como enteros tipo "long long" (%lli)
      * "int" (%i) [2 bytes] --> {-32,768; 32,767}
      * "long" (%li) [4 bytes] --> {-2,147,483,648; 2,147,483,647}
      * "long long" (%lli) [8 bytes] --> {9,223,372,036,854,775,808}
      */
	long long int u=1, p=0, term;
	
	//Entrada de Datos
	printf("\t\t\t\t SERIE DE FIBONACCI\n");
	printf("--------------------------------------------------------------------------------");
	printf("Ingrese el n%cmero de t%crminos de la serie: ", 163, 130);
	
	/* A partir de n = 94, se acaba la capacidad de la longitud de los bits.
	 * Cuando esto sucede, el último bit se vuelve negativo.
	 * Al convertir de número binario a decimal, el resultado se ve afectado.
	 */
	scanf("%i", &n);
	
	//Procesos + Salida de Datos
	 printf("\n\n1) %lli\n2) %lli", p, u);

	for (t=3; t<=n; t++)
	{
		term = p + u;
		printf("\n%i) %lli", t, term);
		p = u;
		u = term;
	}
	
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
