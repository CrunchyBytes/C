/* Algoritmo: Venta de perfumes
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>

/* Main
 * El programa siempre empieza desde el Main
 */
int main(){
	int i, j, ventas[4][6], totTienda[4]={0,0,0,0}, totPerf[6]={0,0,0,0,0,0}, maxP=0, posP, minT=9999, posT;	
	float promTot=0;
	
	// T�tulo del Programa
	printf("\t\t\t\tVENTA DE PERFUMES\n");
	printf("--------------------------------------------------------------------------------\n");
	
	// Leyenda para que el usuario entienda qu� representan las columnas y las hileras
	printf("HILERAS: Tiendas\n");
	printf("COLUMNAS: Marcas\n\n");
	
	// N�mero de columnas <--> Marcas
	for (j=0; j<5; j++)
	{
        // Se imprime el �ndice de cada columna sobre la matriz
        printf("\t[%i]", j);
    }
    
    // Recorrido Rengl�n --> por columnas
	// N�mero de Tiendas
	for (i=0; i<4; i++)
	{
		// Se imprime el �ndice de cada rengl�n
		 printf("\n\n[%i]", i);
		 
        /* N�mero de Columnas
		 * El ciclo se recorre 5 veces nada m�s, a pesar de tener 6 columnas, porque la sexta no recibe valores aleatorios
		 * M�s tarde, en esta �ltima columna se guarda el total de ventas de perfumes por tienda.
		 */
		for (j=0; j<5; j++)
		{
            /* La matriz 'ventas' es rellena de valores aleatorios entre 0 y 50.
             * Se imprimen dichos valores
             * Separados por una sangr�a entre cada uno valor de la matriz.
             */
			ventas[i][j] = rand()%51;
			printf("\t%i", ventas[i][j]);
			
			// Las ventas de cada rengl�n (tienda) se almacena en 'totTienda' de su rengl�n correspondiente.
			totTienda[i]+=ventas[i][j];
			
			// Las ventas de cada columna (marca) se almacena en 'totPerf' de su columna correspondiente. 
			totPerf[j]+=ventas[i][j];
			
			// 'promTot' acumula el total de ventas de la matriz entera.
			promTot+=ventas[i][j];
			
			/* Perfume m�s vendido
             * Si el total de ventas de la marca #'j' de un perfume > a la marca m�s vendida:
             * Perfume #'j' se vuelve la marca m�s vendida.
             * Su posici�n del vector se guarda.
	         */
			if (totPerf[j] > maxP)
			{
			    maxP = totPerf[j];
			    posP = j;
            }
            
            /* Tienda que vendi� menos perfumes
             * Si el total de ventas de una tienda #'i' < al total de la tienda con menos ventas registradas:
             * Tienda #'i' se vuelve la tienda que menos ha vendido.
             * Su posici�n del vector se guarda. 
	         */
            if (totTienda[i] < minT)
            {
                minT = totTienda[i];
                posT = i;
            }            
		}
	}
	
	/* Decid� usar m�s de un ciclo para la impresi�n de los resultados
	 * Si lo hubiera dejado todo en un s�lo ciclo, entonces las impresiones desorganizar�an la impresi�n de la matriz
	 */
	 
    // Pausa entre matriz y resultado de sumas
	getch(); 
 
    // Subt�tulo
    printf("\n\n\nPERFUMES (DE DISTINTAS MARCAS) VENDIDOS POR TIENDA\n");
    printf("-------------------------------------------------------------------------------");
    
	for (i=0; i<4; i++)
	{
        // Se imprime el n�mero de tienda y el total de perfumes que vendi�
        printf("\n\nTienda [%i] vendi%c un total de %i perfumes", i, 162, totTienda[i]);
    }
    
    // Pausa
    getch();
    
    // Subt�tulo
    printf("\n\n\nPERFUMES (DE UNA MARCA) VENDIDOS EN LAS CUATRO TIENDAS\n");
    printf("--------------------------------------------------------------------------------");

    for (j=0; j<5; j++)
    {
        // Se imprime el n�mero de la marca y el total de unidades vendidas
        printf("\nMarca [%i] se vendi%c un total de %i veces\n", j, 162, totPerf[j]);
    }
    
    // Pausa
    getch(); 
    
    // Promedio de ventas de todos los perfumes / todas las tiendas
	printf("\n\nEl promedio de ventas de todos los perfumes en todas las tiendas = %.2f", promTot/=20);
	
	// Impresi�n de perfume m�s vendido + Tienda que vendi� menos perfumes
	printf("\n\nDonde el perfume m%cs vendido fue [%i], con un total de %i ventas,", 160, posP, totPerf[posP]);
	printf("\nY la tienda con peores ventas fue [%i], con %i ventas", posT, totTienda[posT]);
 
	 getch();
	 return 0;
}
