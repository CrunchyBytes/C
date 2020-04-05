/* Algoritmo: Suma de pares e impares
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
    //Variables
    int i, x[10], a=0, b=0, limS=37, limI=15;
    
    //Procesos
    printf("\t\t\t\tSUMA DE PARES E IMPARES\n");
    printf("--------------------------------------------------------------------------------");
    printf("Lista de n%cmeros aleatorios: ", 163);
    for (i=0; i<10; i++)
    {
        x[i] = rand()%(limS-limI+1)+limI;
        printf("\n%i", x[i]);
        if (x[i]%2==0)
        {
            a+=x[i];
        }
        else
        {
            b+=x[i];
        }              
    }
    printf("\n\nLa suma de los pares (a) = %i, mientras que la de los impares (b) = %i", a, b);
    
    //Fin
    getch();
    return 0;
} 
