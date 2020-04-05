/* Algoritmo: D�as del mes.
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main() {
	//Declaraci�n de Variables
	int dia, mes, anho;
	
	//Entrada de Datos
	printf("						     DIAS DEL MES\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Ingrese el n%cmero del mes: ", 163);
	scanf("%i", &mes);
	
	//Procesos + Salida de Datos
	switch(mes)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("El mes tiene 31 d%cas.", 161);
				break;
		/* 233 --> �
		 * 241 --> +-
		 */
		case 2: printf("En que anho? ");
				scanf("%i", &anho);
				if ((anho%4)==0)
				{
					printf("Es un anho bisiesto. Febrero tiene 29 d%cas.", 241, 161);
				}
				else
				{
					printf("Es un anho com%cn. Febrero tiene 28 d%cas.", 241, 163, 161);
				}
				break;
		case 4: case 6: case 9: case 11:
				printf("El mes tiene 30 d%cas.", 161);
				break;
	}
	
	//Fin + Prolongaci�n de Ventana
	getch();
	return 0;
}
