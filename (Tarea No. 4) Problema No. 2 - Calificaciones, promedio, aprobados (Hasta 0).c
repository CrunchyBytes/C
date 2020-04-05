/* Algoritmo: Calificaciones, promedio, aprobados (Hasta 0)
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main() {
    //Declaraci�n de Variables
    int valcals=0, cont=1, apr=0;
    // 'max' y 'min' est�n inicializadas con valores bajos y rid�culamente altos, respectivamente, para que sea m�s f�cil su actualizaci�n durante los Procesos.
    float cals, max=0, min=9999, sum=0, prom, porc;
    
    //Entrada de Datos
    printf("                         CALIFICACIONES, PROMEDIO, APROBADOS\n");
    printf("--------------------------------------------------------------------------------");
    
    //Procesos + Salida de Datos
    printf("\nCALIFICACIONES: ");
    while (cals!=0)
    {
        printf("\n#%i: ", cont);
        scanf("%f", &cals);
        /* Puede parecer redundante hacer una condici�n de "si el n�mero !=0...", estando dentro de un ciclo con esa misma condici�n.
         * Sin embargo, ya que el valor se lee dentro de esa misma condici�n, es posible que un 0 entre por lo menos durante un ciclo.
         * Por eso hace falta especificar esto; tomando en cuenta su efecto sobre 'calificaci�n m�nima', 'promedio', y 'aprobados'.
         */
        if (cals!=0)
        {
            //'valcals' quiere decir "calificaciones v�lidas". Es decir, aquellas que !=0.
            valcals++;
        }
        // Si el usuario ingresa una calificaci�n irreal (<0 � >10), el programa imprime un mensaje y se sale del mismo.
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
        /* Se a�adi� la condici�n "cals!=0" porque, si el usuario ingresa un "0" como calificaci�n, el programa debe tomarlo en cuenta como fin de las calificaciones y no una calificaci�n como tal.
         * Por ende, no lo tomo en consideraci�n para ser la calificaci�n m�nima.
         */
         if (cals<min&&cals!=0)
         {
             min=cals;
         }
         if (cals>=7.5)
         {
             apr++;
         }
         sum = sum + cals;
         cont++;
       }
    /* El promedio depende de "calificaciones v�lidas" ('valcals') en lugar del n�mero de calificaciones ('ncal') 
     * De esta manera, el promedio depende de aquellas calificaciones que s� hayan sido "v�lidas".
     */
    prom = (sum/valcals);
    /* Casting de 'porc', porque 'apr' y 'valcals' son int, cuando 'porc' es un float. 
     * Siendo int, si (apr/valcals) < 1, �sta se trunca y da como resultado "0", porque no permiten decimales.
     * Y al parecer, escribir "(float)(apr/valcals)*100" tambi�n se trunca.
     */
    porc = (float)apr/valcals*100;
    printf("\n\nLa mayor calificaci%cn fue de %.1f\nLa menor, de %.1f\n\nEl promedio del grupo fue de %.2f\nY %.2f%% de los alumnos aprobaron.", 162, max, min, prom, porc);
    
    //Fin + Prolongaci�n de Ventana
    getch();
    return 0;
}
