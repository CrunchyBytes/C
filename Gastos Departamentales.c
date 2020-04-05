/* Algoritmo: Gastos Departamentales
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h> 
int main() {
	//Declaraci�n de Variables
	int dep, mes, max;
	float g, gA=0, gM, sgM=0, maxG=0, gPG;
	
	//Entrada de Datos+ Procesos + Salida de Datos
	printf("\t\t\t\t\t\tGASTOS DEPARTAMENTALES\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	for (dep=1; dep<=3; dep++)
	{
		for (mes=1; mes<=2; mes++)
		{
			printf("\nGasto Mensual #%i: ", mes);
			scanf("%f", &g);
			gA+=g;
		}
		gM = gA/2;
		sgM+=gM;
		printf("\n\nGasto Anual = %f [#%i]", dep, gA);
		printf("\nGasto Mensual (Promedio) [#%i] = %f", dep, gM);
		if (gA > maxG)
		{
			max = dep;
			maxG = gA;
		}
	}
	gPG = sgM/3;
	printf("El departamento #%i tuvo el mayor gasto ($%.2f)", max, maxG);
	printf("El gasto mensual promedio de todos los departamentos fue de %.2f", gPG);
	
	//Fin + Prolongaci�n de Ventana
	getch();
	return 0;
}
