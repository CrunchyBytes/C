/* Algoritmo: Calculadora.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
	//Declaración de Variables
	float n1, n2, res;
	char op;
	
	//Lectura de Datos
	printf("						    CALCULADORA\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	//ú --> 163
	printf("Por favor ingrese ambos n%cmeros y el operador:\n", 163);
	printf("N%cMERO 1: ", 233);
	scanf("%f", &n1);
	printf("OPERADOR: ");
	//scanf("%c", &op);
	// cambiar %c por %s
	scanf("%s", &op);
	printf("N%cMERO 2: ", 233);
	scanf("%f", &n2);
	
	//Procesos + Salidas
	switch(op)
	{
		//strcpy(letras, "seis")
		case '+': res = n1 + n2;
				  break;
		case '-': res = n1 - n2;
				  break;
		case '*': res = n1 * n2;
				  break;
		case '/': res = n1 / n2;
			if (n2==0)
			{
				//á --> 160
				printf("\n\nERROR: No est%c definido dividir sobre 0.", 160);
			}
				  break;
		//í --> 161
		default: printf("\n\nOperador algor%ctmico no v%clido. Favor de ingresar '+, -, *, /'.", 161, 160);
	}
	//printf("\n\nEl resultado es = ", res);
	// Falta %f
	printf("\n\nEl resultado es = %f", res);
	
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
