/* Algoritmo: Venta de perfumes
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/* Main
 * El programa siempre empieza desde el Main
 */
int main(){
	int i, j, ventas[4][6], totPerf[6]={0,0,0,0,0,0}, maxP=0, posP, minT=9999, posT;	
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
        
        /* Inicializaci�n de todo rengl�n en la sexta columna = 0
         * ventas[j][5] = 0;
         * ^Tambi�n est� correcto, s�lo prefer� inicializarla en el siguiente ciclo.
         */
    }
    
    /* Generaci�n de semilla para n�meros aleatorios a llenar la matriz 'ventas'
     * La semilla necesita declararse previamente, no puede ser al mismo tiempo en que se declaran los valores de la matriz
     */
    srand(time(NULL));
    
    // Recorrido Rengl�n --> por columnas
	// N�mero de Tiendas
	for (i=0; i<4; i++)
	{
        // Inicializaci�n de todo rengl�n en la sexta columna = 0
        ventas[i][5] = 0;
        
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
			
			// Las ventas de cada rengl�n (tienda) se almacena en la sexta columna <--> [5] de 'ventas' de su rengl�n correspondiente.
			ventas[i][5]+=ventas[i][j];
			
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
            if (ventas[i][5] < minT)
            {   
                minT = ventas[i][5];
                posT = i;
            }                   
		}
	}
	
	/* Decid� usar m�s de un ciclo para la impresi�n de los resultados
	 * Si lo hubiera dejado todo en un s�lo ciclo, entonces las impresiones desorganizar�an la impresi�n de la matriz
	 */
	 
    // Pausa entre matriz y resultado de sumas
    printf("\n\n\nPresione ENTER para visualizar siguientes datos...");
	getch(); 
 
    // Subt�tulo
    printf("\n\n\nPERFUMES (DE DISTINTAS MARCAS) VENDIDOS POR TIENDA\n");
    printf("-------------------------------------------------------------------------------");
    
	for (i=0; i<4; i++)
	{
        // Se imprime el n�mero de tienda y el total de perfumes que vendi�
        printf("\n\nTienda [%i] vendi%c un total de %i perfumes", i, 162, ventas[i][5]);//totTienda[i]);
    }
    
    // Pausa
    printf("\n\n\nPresione ENTER para visualizar siguientes datos...");
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
    printf("\n\nPresione ENTER para visualizar siguientes datos...");
    getch(); 
    
    // Promedio de ventas de todos los perfumes / todas las tiendas
    printf("\n\n--------------------------------------------------------------------------------");
	printf("\nEl promedio de ventas de todos los perfumes en todas las tiendas = %.2f", promTot/=20);
	
	// Impresi�n de perfume m�s vendido + Tienda que vendi� menos perfumes
	printf("\n\nDonde el perfume m%cs vendido fue la marca [%i], con un total de %i ventas,", 160, posP, totPerf[posP]);
	printf("\nY la tienda con peores ventas fue [%i], con %i ventas", posT, ventas[posT][5]);//totTienda[posT]);
 
     // FIN
	 getch();
	 return 0;
}
