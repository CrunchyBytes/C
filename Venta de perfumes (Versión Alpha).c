/* Algoritmo: Venta de perfumes
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>

/* Main
 * El programa siempre empieza desde el Main
 */
int main(){
	int i, j, ventas[4][6], totTienda[4]={0,0,0,0}, totPerf[6]={0,0,0,0,0,0}, maxP=0, posP, minT=9999, posT;	
	float promTot=0;
	
	// Título del Programa
	printf("\t\t\t\tVENTA DE PERFUMES\n");
	printf("--------------------------------------------------------------------------------\n");
	
	// Leyenda para que el usuario entienda qué representan las columnas y las hileras
	printf("HILERAS: Tiendas\n");
	printf("COLUMNAS: Marcas\n\n");
	
	// Número de columnas <--> Marcas
	for (j=0; j<5; j++)
	{
        // Se imprime el índice de cada columna sobre la matriz
        printf("\t[%i]", j);
    }
    
    // Recorrido Renglón --> por columnas
	// Número de Tiendas
	for (i=0; i<4; i++)
	{
		// Se imprime el índice de cada renglón
		 printf("\n\n[%i]", i);
		 
        /* Número de Columnas
		 * El ciclo se recorre 5 veces nada más, a pesar de tener 6 columnas, porque la sexta no recibe valores aleatorios
		 * Más tarde, en esta última columna se guarda el total de ventas de perfumes por tienda.
		 */
		for (j=0; j<5; j++)
		{
            /* La matriz 'ventas' es rellena de valores aleatorios entre 0 y 50.
             * Se imprimen dichos valores
             * Separados por una sangría entre cada uno valor de la matriz.
             */
			ventas[i][j] = rand()%51;
			printf("\t%i", ventas[i][j]);
			
			// Las ventas de cada renglón (tienda) se almacena en 'totTienda' de su renglón correspondiente.
			totTienda[i]+=ventas[i][j];
			
			// Las ventas de cada columna (marca) se almacena en 'totPerf' de su columna correspondiente. 
			totPerf[j]+=ventas[i][j];
			
			// 'promTot' acumula el total de ventas de la matriz entera.
			promTot+=ventas[i][j];
			
			/* Perfume más vendido
             * Si el total de ventas de la marca #'j' de un perfume > a la marca más vendida:
             * Perfume #'j' se vuelve la marca más vendida.
             * Su posición del vector se guarda.
	         */
			if (totPerf[j] > maxP)
			{
			    maxP = totPerf[j];
			    posP = j;
            }
            
            /* Tienda que vendió menos perfumes
             * Si el total de ventas de una tienda #'i' < al total de la tienda con menos ventas registradas:
             * Tienda #'i' se vuelve la tienda que menos ha vendido.
             * Su posición del vector se guarda. 
	         */
            if (totTienda[i] < minT)
            {
                minT = totTienda[i];
                posT = i;
            }            
		}
	}
	
	/* Decidí usar más de un ciclo para la impresión de los resultados
	 * Si lo hubiera dejado todo en un sólo ciclo, entonces las impresiones desorganizarían la impresión de la matriz
	 */
	 
    // Pausa entre matriz y resultado de sumas
	getch(); 
 
    // Subtítulo
    printf("\n\n\nPERFUMES (DE DISTINTAS MARCAS) VENDIDOS POR TIENDA\n");
    printf("-------------------------------------------------------------------------------");
    
	for (i=0; i<4; i++)
	{
        // Se imprime el número de tienda y el total de perfumes que vendió
        printf("\n\nTienda [%i] vendi%c un total de %i perfumes", i, 162, totTienda[i]);
    }
    
    // Pausa
    getch();
    
    // Subtítulo
    printf("\n\n\nPERFUMES (DE UNA MARCA) VENDIDOS EN LAS CUATRO TIENDAS\n");
    printf("--------------------------------------------------------------------------------");

    for (j=0; j<5; j++)
    {
        // Se imprime el número de la marca y el total de unidades vendidas
        printf("\nMarca [%i] se vendi%c un total de %i veces\n", j, 162, totPerf[j]);
    }
    
    // Pausa
    getch(); 
    
    // Promedio de ventas de todos los perfumes / todas las tiendas
	printf("\n\nEl promedio de ventas de todos los perfumes en todas las tiendas = %.2f", promTot/=20);
	
	// Impresión de perfume más vendido + Tienda que vendió menos perfumes
	printf("\n\nDonde el perfume m%cs vendido fue [%i], con un total de %i ventas,", 160, posP, totPerf[posP]);
	printf("\nY la tienda con peores ventas fue [%i], con %i ventas", posT, totTienda[posT]);
 
	 getch();
	 return 0;
}
