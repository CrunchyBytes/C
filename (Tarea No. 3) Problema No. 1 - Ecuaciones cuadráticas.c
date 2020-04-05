/* Algoritmo: Ecuaciones cuadráticas.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<math.h>
int main() {
    //Declaración de Variables
    float a, b, c, x1, x2, d;
    
    //Entrada de Datos
    /* 181 --> Á
     * \xA0178 --> ^2
     */
    printf("           CALCULADORA DE ECUACIONES CUADR%cTICAS (forma ax\xA178 + bx + c = 0)", 181);
    printf("\n--------------------------------------------------------------------------------");
    // 163 --> ó
    printf("Por favor ingrese las variables 'a', 'b', y 'c' de la ecuaci%cn:\n", 162);
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    
    //Procesos + Salida de Datos
    d = (b*b)-(4*a*c);
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    if (a==0)
    {
         // 160 --> á    
         printf("\nNo es posible hacer el c%clculo. Por favor elija otro valor para 'a' que no sea 0.", 160);
    }
         else if (d<0)
         {
              printf("\nLas ra%cces son imaginarias. Por favor verifique que el discriminante sea mayor que 0 para recibir valores reales.", 161);
         }
              else
              {
                  // 162 --> ó
                  printf("\nLas respuestas de la ecuaci%cn son x = %.2f, y x = %.2f", 162, x1, x2);
              }

    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
