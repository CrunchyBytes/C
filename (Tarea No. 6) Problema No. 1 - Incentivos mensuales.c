/* Algoritmo: Incentivos mensuales
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main (){
    //Variables
    int ID[16], i;
    float ventas[16], suma=0, prom;
    
    //Procesos
    printf("\t\t\t\t   INCENTIVOS MENSUALES\n");
    printf("--------------------------------------------------------------------------------------");
    printf("Ingrese el ID del vendedor, y seguido de un espacio, el monto de sus ventas mensuales:\n\n");
    for (i=0; i<16; i++)
    {
        printf("Vendedor [#%i]: ", i+1);
        scanf("%i", &ID[i]);
        scanf("%f", &ventas[i]);
        suma = suma + ventas[i];
        printf("\n");
    }
    prom = suma/16;
    printf("\nEl promedio de las ventas fue de $%.2f", prom);
    /* No se me olvidó separar "ventas" de "ejemplares".
     * Pero al dejar el espacio (como debería ser), se veía como si hubiera incluido un espacio de más al correr el programa.
     */
    printf("\n\n%cBuen trabajo! Los siguientes vendedores recibir%cn un incentivo mensual por sus ventasejemplares:\n\n", 173, 160);
    for (i=0; i<16; i++)
    {
        if (ventas[i]>prom)
        {
            printf("ID[%i], quien vendi%c $%.2f ($%.2f m%cs del promedio)", ID[i], 162, ventas[i], (ventas[i]-prom), 160);
            printf("\n");
        }
    }
                           
    //Fin
    getch();
    return 0;
}
