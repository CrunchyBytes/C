/* Algoritmo: Matriz m�gica
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
#include<stdbool.h>
int main() {
    //VARIABLES
    int i, j, n, sumD=0, sumI=0;
    /* Para prueba c/ matriz ejemplo de la presentaci�n:
       n=3;
     */
    bool magic = true;
    
    //PROCESOS
    printf("\t\t\t\tMATRICES M%cGICAS\n", 181);
    printf("--------------------------------------------------------------------------------");
    
    // Obtenci�n de dimensiones de la matriz + creaci�n
    printf("%cDe qu%c tama%co ser%c su matriz? ", 168, 130, 164, 160);
    scanf("%i", &n);
    
    int x[n][n], sumR[n], sumC[n];
    
    /* Matriz ejemplo de la presentaci�n:
     int x[3][3] = {2, 7, 6,
                    9, 5, 1,
                    4, 3, 8},
     */
     
    // Asignaci�n + Impresi�n de valores de la matriz + Calcular sumas (Excepto por Columnas)
    for (i=0; i<n; i++)
    {
        // Inicializaci�n de cada elemento del vector = 0
        sumR[i]=0;
        
        printf("\n");
        for (j=0; j<n; j++)
        {
            x[i][j] = rand()%(9)+1;
            printf("%i\t", x[i][j]);
            // Suma Diagonal
            if (i==j)
            {
                sumD+=x[i][j];
            }
            // Suma Diagonal Inversa
            if ((i+j)==(n-1))
            {
                sumI+=x[i][j];
            }
            /* Suma Renglones
             * Mientras el recorrido de los ciclos permanezca en el mismo rengl�n, todos los elementos de la matriz son a�adidos al elemento del vector correspondiente.
             */ 
            sumR[i]+=x[i][j];
        }
    }
    
    // Calcular suma de Columnas
    for (j=0; j<n; j++)
    {
        // Inicializaci�n de cada elemento del vector = 0
        sumC[j]=0;
        
        for (i=0; i<n; i++)
        {
            /* A diferencia del ciclo anidado anterior, �sta tiene un recorrido por columnas.
             * Por lo tanto, mientras el recorrido de la matriz se mantenga en la misma columna, todo elemento es a�adido al elemento del vector correspondiente.
             */
            sumC[j]+=x[i][j];
        }
    }
    
    // Impresi�n + Comparaci�n de Sumas
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\nSuma Diagonal: %i\nSuma Diagonal Inversa: %i\n", sumD, sumI);
    
    for (i=0; i<n; i++)
    {
        printf("\nSuma Columna #%i: %i", i+1, sumC[i]);
        printf("\nSuma Rengl%cn #%i: %i\n", 162, i+1, sumR[i]);
        
        /* La comparaci�n parece redundante e ineficaz, pero parece ser la �nica manera de comparar correctamente
         * Usar '(sumC[i]==sumR[i]==sumD==sumI)' no funcion�
         */
        if (sumC[i]==sumR[i] && sumC[i]==sumD && sumC[i]==sumI && sumR[i]==sumC[i] && sumR[i]==sumD && sumR[i]==sumI && sumD==sumC[i] && sumD==sumR[i] && sumD==sumI && sumI==sumR[i] && sumI==sumC[i] && sumI==sumD)
        {
            magic = true;
        }
        else
        {
            magic = false;
        }  
    }

    // Veredicto Final
    if (magic==false)
    {
        printf("\n\nEsta matriz no es m%cgica", 160);
    }
    else 
    {
         printf("\n\n%cIncre%cble: la matriz es m%cgica!\nLa diagonal, la diagonal inversa, y todo rengl%cn y columna suman lo mismo: %i", 173, 161, 160, 162, sumD);
    }
    
    //FIN
    getch();
    return 0;
}
