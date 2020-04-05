/* Algoritmo: Campeonato de Fútbol Mexicano
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>

int main() {
    //VARIABLES
    int n, i, ptoChamp=0, champ, dG=0, champDG;
    
    //PROCESOS
    printf("\t\t\t\tCAMPEONATO DE F%cTBOL MEXICANO\n", 233);
    printf("--------------------------------------------------------------------------------");
    
    // Número de equipos a participar en el campeonato: 'n'
    printf("%cCu%cntos equipos participaron en el campeonato? ", 168, 160);
    scanf("%i", &n);
    
    /* Matriz de enteros con 6 columnas y 'n' renglones
     * 6 --> Partidos jugados, ganados, empatados, perdidos, diferencia de goles, y total de puntos.
     */
    int datos[n][6];
    // Arreglo de caracteres, de 'n' posiciones, con 35 caracteres de cupo, para los nombres de los equipos.
    char nom[n][35];
    
    /* Recolección de Datos
     * No hace falta un segundo ciclo, porque los datos a pedir siempre se guardarán en la misma columna, sea cual sea el renglón.
     */
    for (i=0; i<n; i++)
    {
        printf("\nEQUIPO #%i:\n", i+1);

        printf("Nombre: ");
        scanf("%s", nom[i]);
            
        printf("Partidos jugados: ");
        scanf("%i", &datos[i][0]);
        
        printf("Partidos ganados: ");
        scanf("%i", &datos[i][1]);
        
        printf("Partidos empatados: ");
        scanf("%i", &datos[i][2]);
                    
        printf("Partidos perdidos: ");
        scanf("%i", &datos[i][3]);

        printf("Diferencia de goles: ");
        scanf("%i", &datos[i][4]);
               
        /* La matriz 'datos' está ordenada de tal manera que hay 'n' renglones y 5 columnas.
         * Cada renglón representa un equipo.
         * Columna #1: Partidos jugados
         * Columna #2: Partidos ganados, donde c/u vale 3 puntos.
         * Columna #3: Partidos empatados, donde c/u vale 1 punto.
         * Columna #4: Partidos perdidos
         * Columna #5: Diferencia de goles
         * Columna #6: Puntos totales
         * Por ende, en la última columna de la matriz (puntos totales), por cada equipo, se multiplica el número que esté en la 
           columna [1] <--> #2 (partidos ganados) por 3, ya que esos partidos valen por 3 puntos, y se les añade el número que esté en 
           la columna [2] <--> #3 (partidos empatados), que valen 1 punto
         */
        datos[i][5] = (datos[i][1]*3) + datos[i][2];
        
        /* Si el acumulado de puntos del equipo 'i' es mayor a los puntos del campeón actual,
         * Entonces 'i' es el nuevo equipo campeón, y sus puntos se almacenan como los puntos del campeón.
         */
        if (datos[i][5] > ptoChamp)
        {
            champ = i;
            ptoChamp = datos[i][5];
        }
        
        /* Es lo mismo, pero en lugar de ser el equipo campeón, es del equipo con mayor diferencia de goles
         * Se utiliza 'datos[i][4]' porque, en la columna [4] <---> #5 se guarda el número de diferencia de goles.
         */
        if (datos[i][4] > dG)
        {
            champDG = i;
            dG = datos[i][4];
        }
    }
    
    // Equipos + Resultados
    printf("\n--------------------------------------------------------------------------------");
    printf("Resultados:\n\n");
    for (i=0; i<n; i++)
    {
        printf("EQUIPO #%i: %s\n", i+1, nom[i]);
        printf("\tPartidos jugados: %i\n", datos[i][0]);
        printf("\tPartidos ganados: %i\n", datos[i][1]);
        printf("\tPartidos empatados: %i\n", datos[i][2]);
        printf("\tPartidos perdidos: %i\n", datos[i][3]);
        printf("\tDiferencia de goles: %i\n", datos[i][4]);
        printf("\tPUNTOS TOTALES: %i\n\n", datos[i][5]);
    }
    
    //Veredicto Final
    printf("\nY el campe%cn de este a%co es... %c%s!, que obtuvo un total de %i puntos", 162, 164, 173, nom[champ], ptoChamp);
    printf("\nTambi%cn felicitamos a %s, que obtuvo la mayor diferencia de goles: %i", 130, nom[champDG], dG);
    
    //FIN
    getch();
    return 0;
}
