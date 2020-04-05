/* Algoritmo: Calificaciones, promedio, aprobados (Número de calificaciones)
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
    //Declaración de Variables
    int ncals, cont, apr=0;
    // 'max' y 'min' están inicializadas con valores bajos y ridículamente altos, respectivamente, para que sea más fácil su actualización durante los Procesos.
    float cals, max=0, min=9999, sum=0, prom, porc;
    
    //Entrada de Datos
    printf("                         CALIFICACIONES, PROMEDIO, APROBADOS\n");
    printf("--------------------------------------------------------------------------------");
    printf("%cCu%cntas calificaciones ingresar%c?: ", 168, 160, 160);
    scanf("%i", &ncals);
    
    //Procesos + Salida de Datos
    printf("\nCALIFICACIONES: ");
    for (cont=1; cont<=ncals; cont++)
    {
        printf("\n#%i: ", cont);
        scanf("%f", &cals);
        // Si el usuario ingresa una calificación irreal (<0 ó >10), el programa imprime un mensaje y se sale del mismo.
        if (cals<0||cals>10)
        {
            printf("\nSu calificaci%cn es imposible de obtener. Favor de ingresar un valor v%clido cuando vuelva a correr el programa.", 162, 160);
            getch();
            exit(0);
        }
        if (cals>max)
        {
            max=cals;
        }
        if (cals<min)
        {
            min=cals;
        }
        if (cals>=7.5)
        {
            apr++;
        }
        sum = sum + cals;
    }
    prom = (sum/ncals);
    /* Casting de 'porc', porque 'apr' y 'ncals' son int, cuando 'porc' es un float. 
     * Siendo int, si (apr/ncals) < 1, ésta se trunca y da como resultado "0", porque no permiten decimales.
     * Y al parecer, escribir "(float)(apr/ncals)*100" también se trunca.
     */
    porc = (float)apr/ncals*100;
    printf("\n\nLa mayor calificaci%cn fue de %.1f\nLa menor, de %.1f\n\nEl promedio del grupo fue de %.2f\nY %.2f%% de los alumnos aprobaron.", 162, max, min, prom, porc);
    
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
