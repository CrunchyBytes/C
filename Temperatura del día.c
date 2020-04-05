/* Algoritmo: Temperatura del día.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
	//Declaración de Variables
	float temp;
	
	//Entrada de Datos
	printf("					  	TEMPERATURA DEL D%cA\n", 214);
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Bienvenido. Introduzca la temperatura del d%ca de hoy (en grados %cC): ", 161, 248);
	scanf("%f", &temp);
	
	//Procesos + Salida de Datos
	if (temp<15)
	{
		printf("\n\nBrrr... %cQu%c fr%co!", 173, 130, 161);
	}
		else if (temp<25)
		{
			printf("\n\nClima templado.");
		}
			else
			{
				printf("\n\n%cBuf...! %cQu%c calor!", 173, 173, 130);
			}
	
	//Fin + Prolongación de Ventana
	getch();
	return 0;
}
