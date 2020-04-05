/* Algoritmo: Cambio de moneda con comisiones variables.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Declaración de Variables
	float tasa, pesos, cambio, comision;
	int tipo_cli;
	const float COMISION_MENOR = 0.0025, COMISION_MEDIA = 0.005, COMISION_MAYOR = 0.01;
	
	//Procesos: Condiciones + Cálculos + Impresiones
	printf("                             BOLSA DE CAMBIO\n");
	printf("-------------------------------------------------------------------------------\n");
    printf("Favor de ingresar la tasa de cambio, cantidad a cambiar (en MXN), y su tipo de cliente:\n\n");
	printf("TASA: ");
	scanf("%f", &tasa);
	printf("CANTIDAD: ");
	scanf("%f", &pesos);
	printf("CLIENTE: ");
	scanf("%i", &tipo_cli);
	
	cambio  = (pesos/tasa);
		
	if (tipo_cli==1)
	{
		cambio = cambio;
		comision = 0;
	}
		else if (tipo_cli==2)
		{
			cambio = cambio * (1-COMISION_MENOR);
			comision = COMISION_MENOR*100;
		}
			else if (tipo_cli==3)
			{
				cambio = cambio * (1-COMISION_MEDIA);
				comision = COMISION_MEDIA*100;
			}
				else if (tipo_cli==4)
				{
					cambio = cambio * (1-COMISION_MAYOR);
					comision = COMISION_MAYOR*100;
				}
				else
				{
                    /* Sin las instrucciones "getch()" y "exit()", el programa imprimiría el mismo mensaje de cambio como si fuera el
                     * cliente 1.
                     */
					printf("\n\nNo existe tal tipo de cliente. Por favor ingrese un n%cmero v%clido entre 1 y 4.", 163, 160);
					getch();
                    exit(0);
				}
	printf("\n\nSu cambio es de $%.2f, equivalente a los $%.2f MXN ingresados c/ comisi%cn de %.2f%%.", cambio, pesos, 162, comision);
	
	//Fin + Prolongación de Ventanas
	getch();
	return 0;
}
