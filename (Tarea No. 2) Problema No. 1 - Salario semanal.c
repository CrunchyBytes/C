/* Algoritmo: Salario semanal.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
*/
#include<stdio.h>
int main() {
    /* Función para cambiar el color del fondo y texto del despliegue de resultados.
     * system("color xy");
     * Donde, x = Color del fondo [0, F] (Hexadecimal)
     * Y y = Color del texto [0, F] (Hexadecimal)
     * 0 = Negro
     * 1 = Azul
     * 2 = Verde
     * 3 = Aqua
     * 4 = Rojo
     * 5 = Morado
     * 6 = Amarillo
     * 7 = Blanco
     * 8 = Gris
     * 9 = Azul claro
     * A = Verde claro
     * B = Aqua claro
     * C = Rojo claro
     * D = Morado claro
     * E = Amarillo claro
     * F = Blanco brillante
     */
    system("color F0");
    //Declaración de Variables
    int hrs, sal, bhrs, bsal;
    
    //Entrada de Datos
    printf("Hola, por favor ingrese el total de horas trabajadas en la semana:\n");
    scanf("%i", &hrs);
   
    //Procesos: Condiciones + Despliegue de Resultados
    if (hrs>168)
    {
         /*í --> ("%c", 161)
          *á --> ("%c", 160)
          */
         printf("\n\nEs f%csicamente imposible trabajar m%c de ", 161, 160);
         printf("168 horas en una semana (sin contar muy ilegal).");
         printf("\nVuelva a correr el programa, mentiros%c.", 64);            
    }
        else if (hrs>48)
        {
             //é --> ("%c", 130)
             printf("\n\nEs ilegal trabajar m%cs de 48 horas a la ", 160);
             printf("semana en M%cxico.", 130);
             printf("\nLe sugiero ingresar un horario verdadero ");
             printf("o cambiar de empleo).");
        }
           else if (hrs>40)
           {
                bhrs = (hrs-40);
                sal = (40*65) + (bhrs*75);
                bsal = bhrs*75;
                /*ó --> ("%c", 162)
                 *¡ --> ("%c", 172)
                 *¿ --> ("%c", 168)
                 */
                printf("\n\n%cIncre%cble!, como usted trabaj%c ", 173, 161, 162);
                printf("%i horas, %i m%cs de las correspondidas, ", hrs, bhrs,160);
                printf("se ha ganado un salario semanal de $%i. ", sal);
                printf("\n(%c%cEso es una recompensa de $%i!!)", 173, 173, bsal);
           }
               else if (hrs>0)
               {   
                    sal = (hrs*65);
                    printf("\n\nComo usted trabaj%c %i horas, ", 162, hrs);
                    printf("le corresponde un salario semanal de $%i.", sal);
               }    
                    else
                    {
                        printf("\n\nSi usted no trabaj%c, %centonces ", 162, 168);
                        printf("para qu%c est%c ocupando este programa?", 130, 160);
                    }
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
