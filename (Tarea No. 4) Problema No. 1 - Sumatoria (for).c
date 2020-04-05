/* Algoritmo: Sumatoria (for)
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
//#include<math.h>
int main() {
    //Declaraci�n de Variables
    int k=1, n, suma=0, total=0;
    
    //Entrada de Datos
    printf("                                      SUMATORIA\n");
    printf("--------------------------------------------------------------------------------");
    printf("Ingrese el %cltimo n%cmero de la sumatoria: ", 163, 163);
    scanf("%i", &n);
    
    //Procesos + Salida de Datos
    printf("\nSUMA PARCIAL:\t%i", suma);
    for (k=1; k<=n; k++)
    {
        /* Por alguna raz�n, (k*k) != pow(k,2). La sumatoria = 3858; cuando el resultado deber�a ser = 3860
         * suma = (pow(k,2))+(5*k)-3; 
         */
        suma = (k*k)+(5*k)-3;
        printf("\n\t(k=%i)\t%i", k, suma);
        total = total + suma;
    }
    printf("\n\nLa sumatoria es = %i", total);
    
    //Fin + Prolongaci�n de Ventana
    getch();
    return 0;
}
