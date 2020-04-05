/* Algoritmo: Ecuaciones de primer grado.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
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
    float a, b, x;
    
    //Entrada de Datos
    printf("                  ECUACIONES DE PRIMER GRADO (forma ax+b = 0)\n");
    printf("\nFavor de ingresar 'a': ");
    scanf("%f", &a);
    printf("\nAhora, ingrese 'b': ");
    scanf("%f", &b);
    
    //Procesos: Condición + Despliegue de Resultado
    if (a==0)
    {
        system("color FC");
        printf("\n\nERROR. No es posible dividir por 0; ");
        printf("favor de ingresar un valor real para 'a'.");
    }
        else if (b==0)
        {
             //Para que el despliegue de 'x' no sea -0.00
             x = b/a;
             printf("\n\nLa soluci%cn de su ecuaci%cn es x = %.2f", 162, 162, x);
        }
             else
             {
                 x = -b/a;
                 printf("\n\nLa soluci%cn de su ecuaci%cn es x = %.2f",162,162,x);
             }
    
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
