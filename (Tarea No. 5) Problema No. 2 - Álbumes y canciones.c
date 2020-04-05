/* Algoritmo: Álbumes y canciones
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
    //Declaración de Variables
    int n_song, album;
    float dura, time=0, song, prom, prom_gral;
    
    //Entrada + Procesos + Salida de Datos
    printf("\t\t\t\t%cLBUMES Y CANCIONES\n", 181);
    printf("--------------------------------------------------------------------------------");
    for (album=1; album<=25; album++)
    {
        printf("\n\n%cLBUM #%i: ", 181, album);
        printf("\n%cCu%cnto dura la primera canci%cn (en minutos)? ", 168, 160, 162);
        scanf("%f", &song);
        dura = 0;
        n_song = 0;
        while (song>0)
        {
            dura = dura + song;
            n_song++;
            printf("\n%cY la siguiente? ", 168);
            scanf("%f", &song);
        }
        prom = dura/n_song;
        printf("\nLa duraci%cn promedio de las canciones (del %clbum #%i) es = %.2f minutos.", 162, 160, album, prom);
        time = time + prom;
    }
    prom_gral = time/25;
    printf("\n\nLa duraci%cn promedio de todos los %clbumes es = %.2f minutos.", 162, 160, prom_gral);
    
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
