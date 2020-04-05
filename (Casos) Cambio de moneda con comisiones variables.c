/* Algoritmo: (Casos) Cambio de moneda con comisiones variables.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
	//Declaración de Variables
	int tipo_cli;
	float tasa, pesos, cambio, comision;
	const float COMISION_MENOR = 0.0025, COMISION_MEDIA = 0.005, COMISION_MAYOR = 0.01;
	
	//Lectura de Datos				F  	F
	printf("						  CASA DE CAMBIO\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Favor de ingresar la tasa de cambio, monto ingresado (en $ MXN), y su tipo de cliente:\n");
	printf("TASA: ");
	scanf("%f", &tasa);
	printf("INGRESO: $");
	scanf("%f", &pesos);
	printf("TIPO DE CLIENTE: ");
	scanf("%i", &tipo_cli);
	
	//Procesos + Salidas
	if (tipo_cli > 0 && tipo_cli < 5)
	{
		//La función "switch" tiene uso exclusivo para enteros (int) y caracteres (char)
		switch(tipo_cli)
		{
			case 1: cambio = pesos/tasa;
					comision = 0;
					break;
			case 2: cambio = pesos/tasa * (1-COMISION_MENOR);
					comision = COMISION_MENOR*100;
					break;
			case 3: cambio = pesos/tasa * (1-COMISION_MEDIA);
					comision = COMISION_MEDIA*100;
					break;
			case 4: cambio = pesos/tasa * (1-COMISION_MAYOR);
					comision = COMISION_MAYOR*100;
					break;
			//Es posible usar "default" al final de los "casos" en lugar del if <>... else...
		}
		printf("\n\nSu cambio es de $%.2f, equivalente a los $%.2f MXN ingresados c/ comisi%cn de %.2f%%.", cambio, pesos, 162, comision);
	} 
	else
	{
		/* 163 --> ú
		 * 160 --> á
		 */
		printf("\n\nNo existe tal tipo de cliente. Por favor ingrese un n%cmero v%clido.", 163, 160);
	}

	
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
