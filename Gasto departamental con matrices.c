/* Algoritmo: Gasto departamental c/ matrices
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h> 
int main() {
	//Variables
	// 'd' quiere decir número de departamentos; 'p', número de periodos.
	int d=3, p=12, mes, depto, maxGasto=0;
	char nomDepto [d][30];
	float gasto[d][p], gasto_anual[d], gasto_total=0, gastoProm, gasto_mensual[p], promMens;
	
	//Procesos
	printf("\t\t\t\t GASTOS DEPARTAMENTALES\n");
	printf("----------------------------------------------------------------------------------");

    printf("A continuaci%cn, favor de ingresar el nombre del departamento y su gasto peri%cdico:\n\n", 162, 162);
    
	for (depto=0; depto<d; depto++)
	{
		printf("Nombre del departamento (#%i): ", depto+1);
		scanf("%s", nomDepto[depto]);
		
		gasto_anual[depto]=0;
		
		for (mes=0; mes<p; mes++)
		{
			printf("Mes #%i: $", mes+1);
			scanf("%f", &gasto[depto][mes]);
			gasto_anual[depto]+=gasto[depto][mes];
		}
		
		// Se hace Casting de 'gasto_anual[depto]/p' porque 'p' es de tipo entero, mientras que 'gastoProm' es de tipo flotante.
		gastoProm = (float)gasto_anual[depto]/p;
		gasto_total+=gasto_anual[depto];
		
		printf("\nTotal del departamento: $%.2f", gasto_anual[depto]);
		printf("\nPromedio: $%.2f\n\n\n", gastoProm);
		
		if (gasto_anual[depto] > gasto_anual[maxGasto])
		{
			maxGasto = depto;
		}
	}
	printf("---------------------------------------------------------------------------------");
	printf("\nRESULTADOS:\nEl departamento %s tuvo el mayor gasto anual ($%.2f)\n", nomDepto[maxGasto], gasto_anual[maxGasto]);
	
	for (mes=0; mes<p; mes++)
	{
		gasto_mensual[mes]=0;
		
		for (depto=0; depto<d; depto++)
		{
			gasto_mensual[mes]+=gasto[depto][mes];
		}
		
		promMens = gasto_mensual[mes]/d;
		printf("\nMES #%i:", mes+1 );
		printf("\nGasto Total: $%.2f", gasto_mensual[mes]);
		printf("\nPromedio: $%.2f\n", promMens);
	}
	
	//Salida
	getch();
	return 0;
}
