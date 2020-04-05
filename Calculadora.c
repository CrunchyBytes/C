/* Algoritmo: Calculadora.
 * Alexander D�az Ruiz
 * 160046
 * Secci�n 2
 */
#include<stdio.h>
int main(){
	//Declaraci�n de Variables
	float n1, n2, res;
	char op;
	
	//Lectura de Datos
	printf("						    CALCULADORA\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	/* � --> 162
	 * � --> 130
	 */
	printf("Por favor ingrese su operaci%cn aritm%ctica a continuaci%cn:\n", 162, 130, 162);
	scanf("%f", &n1);
	/* "%c" no salta white space antes de convertir un caracter. Por eso se deja un espacio en blanco antes de "%c".
	 * sscanf(" %c", &op);
	 */
	scanf("%c", &op);
	scanf("%f", &n2);
	
	//Procesos + Salidas
	/*if (n1!="%f"||n2!="%f")
	{
         printf("\n\nHa ingresado un caracter no v%clido. Favor de ingresar un n%cmero real.", 160, 163);
    }*/
	switch(op)
	{
		//strcpy(letras, "seis")
		case '+': res = (n1+n2);
				  break;
		case '-': res = (n1-n2);
				  break;
		case '*': res = (n1*n2);
				  break;
		case '/': res = (n1/n2);
			      if (n2==0)
			      {
				     //� --> 160
                     printf("\n\nERROR: No est%c definido dividir sobre 0. \nPor favor vuelva a correr el programa.", 160);
				     getch();
                     exit(0);
                  }
				  break;
		//� --> 161
		default: printf("\n\nOperador algor%ctmico no v%clido. Favor de ingresar '+, -, *, /' a la pr%cxima.", 161, 160, 162);
		getch();
		exit(0);
	}
	printf("\n\nEl resultado es = %.2f", res);
	
	//Fin + Prolongaci�n de Ventana
	getch();
	return 0;
}
