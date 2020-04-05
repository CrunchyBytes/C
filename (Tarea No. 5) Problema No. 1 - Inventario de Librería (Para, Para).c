/* Algoritmo: Inventario de Librería (Para, Para)
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
    //Declaración de Variables
    int libros, n_est, est=1, librero, tot_librero=0, tot_libreria=0;
    
    printf("\t\t\t\tINVENTARIO DE LIBRER%cA\n", 214);
    printf("--------------------------------------------------------------------------------");
    
    //Entrada de Datos + Procesos + Salida de Datos
    for (librero=1; librero<=100; librero++)
    {
        printf("\n\nIngrese cu%cntos estantes tiene el librero #%i: ", 160, librero);
        scanf("%i", &n_est);
        /* Se inicializa nuevamente "tot_librero", ya que, si no, estaría aumentando de más el número de libros por librero.
         * = En lugar de contar el número de libros de cada librero (después del primero), estaría leyéndolos + agregando los libros de los libreros pasados.
         */
        tot_librero=0;
        for (est=1; est<=n_est; est++)
        {
            printf("\n%cCu%cntos libros hay en el estante #%i? ", 168, 160, est);
            scanf("%i", &libros);
            tot_librero = tot_librero + libros;
        }
        tot_libreria = tot_libreria + tot_librero;
        printf("\n\nEl total de libros del librero #%i es = %i", librero, tot_librero);
    }
    /* Se le resta 1 a "librero" porque al final del primer ciclo Para se le aumenta de valor para que se salga del ciclo.
     * Mas no representa el verdadero número de libreros en la librería.
     */
    printf("\n\nLa librer%ca, con sus %i libreros, cuenta con un total de %i libros.", 161, (librero-1), tot_libreria);
    
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
