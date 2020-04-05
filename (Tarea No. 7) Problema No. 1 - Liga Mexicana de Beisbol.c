/* Algoritmo: Liga Mexicana de Beisbol
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main() {
    //Variables
    char nom[15][35], tempN[35];
    int i, max=0, aB[15], hits[15], totHit=0, sumAB=0, pos;
    float porcBat[15], promAB, temp;
    bool edit=true;
    
    //Procesos
    printf("\t\t\t\tESTAD%cSTICAS BEISBOL\n", 214);
    printf("--------------------------------------------------------------------------------");
    printf("Ingrese, por cada jugador, su nombre, n%cmero de oportunidades para batear (AB), y sus hits exitosos:\n", 163);
    for (i=0; i<15; i++)
    {
        printf("\nJUGADOR #%i: ", i+1);
        scanf("%s %i %i", nom[i], &aB[i], &hits[i]);
        
        // Suma acumulativa del total de Hits y veces que el equipo ha podido batear
        totHit+=hits[i]; 
        sumAB+=aB[i];

        //Se hace Casting al convertir datos de tipo entero a float.
        porcBat[i] = (float)hits[i]/aB[i];
        
        /* Checa si el porcentaje de bateo del jugador actual es mayor al del máximo previamente establecido.
         * Si sí, entonces el jugador actual tiene su porcentaje de bateo guardado como el mayor, al igual que su posición en el vector.
         */
        if (porcBat[i] > max)
        {
            max = porcBat[i];
            pos = i;
        }
    }
    // Promedio de veces que el equipo ha tenido oportunidad de batear 
    promAB = (float)sumAB/15;

    printf("\n--------------------------------------------------------------------------------");
    printf("\nLa selecci%cn estuvo al bat un promedio de %.2f veces, con un total de %i hits realizados,", 162, promAB, totHit);
    printf("\n\nDonde %s tuvo el mayor porcentaje de bateo (%.2f%%), al estar al bat %i veces y tener %i hits exitosos\n", nom[pos], porcBat[pos]*100, aB[pos], hits[pos]);
    
    //Ordenamiento Burbuja
    while (edit==true)
	{
		edit=false;
		
		/* El ciclo va de 0 - 13
		
		 * Como la instrucción de Ordenamiento es checar el dato del espacio siguiente,
		 * de esta manera checaría como máximo al espacio [14] <--> #15, el cual es el último jugador
		 
		 * Si el ciclo recorriera el vector de 0 - 14, eventualmente saldría de rango,
		 * y así recuperaría un número que no es parte de los datos recibidos.
		 */
		for(i=0; i<14; i++)
		{
			if (porcBat[i] > porcBat[i+1])
			{
				temp = porcBat[i];				
                //tempN = nom[i];
                
                /* No es posible comparar/copiar cadenas entre/de otras cadenas de la misma manera que con los demás tipos de datos.
                 * Hace falta importar una biblioteca '<string.h>' y usar 'strcpy'
                 */
                strcpy(tempN, nom[i]);
				
				porcBat[i] = porcBat[i+1];
				//nom[i] = nom[i+1];
				strcpy(nom[i], nom[i+1]);
				
				porcBat[i+1] = temp;
				//nom[i+1] = tempN;
				strcpy(nom[i+1], tempN);
				
				edit=true;
			}
		}
	}
	
	printf("\n--------------------------------------------------------------------------------");
	printf("\nLa lista de los jugadores, ordenados ascendentemente por porcentaje de bateo, es:");
	
	/* Un cambio leve
	
	 * Desubrí que, si el nombre del jugador contenía 7 o más caracteres,
	 * al hacer un \t, recorrería un mayor espacio al de los nombres de los
	 * jugadores con una longitud menor, desfasando la lista de ser ordenada.
	 
	 * Por eso, aquellos con una longitud mayor no tienen tanto espacio entre
	 * su nombre y su porcentaje de bateo.
	 */
	for (i=0; i<15; i++)
	{
        if (strlen(nom[i]) >= 7)
            printf("\n\n%s: %.2f%% de bateo", nom[i], porcBat[i]*100);
        else
            printf("\n\n%s:\t%.2f%% de bateo", nom[i], porcBat[i]*100);
    }
	
    //Fin
    getch();
    return 0;
}
