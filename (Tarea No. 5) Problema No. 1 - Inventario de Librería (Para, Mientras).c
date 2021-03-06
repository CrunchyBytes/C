/* Algoritmo: Inventario de Librer�a (Para, Mientras)
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main() {
    //Declaraci�n de Variables
    int libros, n_est, est=1, librero, tot_librero=0, tot_libreria=0;
    
    printf("\t\t\t\tINVENTARIO DE LIBRER%cA\n", 214);
    printf("--------------------------------------------------------------------------------");
    
    //Entrada de Datos + Procesos + Salida de Datos
    for (librero=1; librero<=100; librero++)
    {
        printf("\n\nIngrese cu%cntos estantes tiene el librero #%i: ", 160, librero);
        scanf("%i", &n_est);
        /* Aqu�, "est" se inicializa nuevamente para que sea susceptible a entrar al ciclo otra vez.
         * Si no, el total de la librer�a se quedar�a con el mismo valor que se ley� durante el primer (y �nico) ciclo.
         */
        est=1;
        /* Algo similar ocurre con "tot_librero", ya que, si no se vuelve a inicializar estar�a aumentando de m�s el n�mero de libros por librero.
         * = En lugar de contar el n�mero de libros de cada librero (despu�s del primero), estar�a ley�ndolos + agregando los libros de los libreros pasados.
         */
        tot_librero=0;
        while (est<=n_est)
        {
            printf("\n%cCu%cntos libros hay en el estante #%i? ", 168, 160, est);
            scanf("%i", &libros);
            tot_librero = tot_librero + libros;
            est++;
        }
        tot_libreria = tot_libreria + tot_librero;
        printf("\n\nEl total de libros del librero #%i es = %i", librero, tot_librero);
    }
    /* Se le resta 1 a "librero" porque al final del ciclo Para se le aumenta de valor para que se salga del ciclo.
     * Mas no representa el verdadero n�mero de libreros en la librer�a.
     */
    printf("\n\nLa librer%ca, con sus %i libreros, cuenta con un total de %i libros.", 161, (librero-1), tot_libreria);
    
    //Fin + Prolongaci�n de Ventana
    getch();
    return 0;
}
