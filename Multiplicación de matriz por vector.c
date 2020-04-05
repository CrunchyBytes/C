/* Algoritmo: Multiplicaci�n de matriz por vector
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h> 
int main(){
	//VARIABLES
	float ventas[7][5], precioUni[5]={250, 300, 450, 425, 400}, ventasTotEst[7], ventasTotProd[5], totProd=0, totEst=0;
	char estados[7][30]={"Mor", "Oax", "Pue", "Tlx", "Ver", "Yuc", "Zac"}, nomProd[5][10]={"coche1", "coche2", "coche3", "coche4", "coche5"};
	int i, j, k, edo, prod;
	
	//PROCESOS
	printf("\t\t\t  MULTIPLICACI%cN DE MATRIZ POR VECTOR\n", 224);
	printf("--------------------------------------------------------------------------------");
	
	// Impresi�n de Estados + Asignaci�n e Impresi�n de Ventas por Estado y Producto
	// N�mero de los productos
    printf("\t");
    for (k=0; k<5; k++)
    {
        printf("\t [%i]", k);
    }
	for (i=0; i<7; i++)
	{
        // Muestra tanto el nombre del estado como su n�mero
		printf("\n%s [%i]:\t", estados[i], i);
		for (j=0; j<5; j++)
		{
			ventas[i][j] = rand()%100 + 1;
			printf("$%.2f,\t", ventas[i][j]);
		}
		printf("\n");
	}
	
	// C�lculo de Ventas por Estado
	printf("\n\nVentas por Estado:\n");
	for(i=0; i<7; i++)
	{
		// Inicializaci�n de cada elemento del vector = 0
		ventasTotEst[i] = 0;
		for (j=0; j<5; j++)
		{
			ventasTotEst[i]+=ventas[i][j]*precioUni[j];
		}
		printf("%s:\t$%.2f\n", estados[i], ventasTotEst[i]);
	}
	
	// Calcular de Ventas por Producto
	printf("\n\nVentas por Producto:\n");
	for(j=0; j<5; j++)
	{
		// Inicializaci�n de cada elemento del vector = 0
		ventasTotProd[j] = 0;
		for (i=0; i<7; i++)
		{
			ventasTotProd[j]+=ventas[i][j]*precioUni[j];
		}
		printf("%s:\t$%.2f\n", estados[j], ventasTotProd[j]);
	}
	
	// Total de Ventas por Estado
	for (i=0; i<7; i++)
	{
		totEst+=ventasTotEst[i];
	}
	printf("\n\nEl total de ventas por estado es = $%.2f", totEst);
	
	// Total de Ventas por Producto
	for (j=0; j<5; j++)
	{
		totProd+=ventasTotProd[j];
	}
	printf("\n\nEl total de ventas por producto es = $%.2f", totProd);
	
	// B�squeda espec�fica de ventas 
	printf("\n\nIngrese el n%cmero del estado y del producto: ", 163);
	scanf("%i %i", &edo, &prod);
	printf("\nLa venta del estado %s del producto [%i] es = $%.2f", estados[edo], prod, ventas[edo][prod]);
	
	//FIN
	getch();
	return 0;
}
