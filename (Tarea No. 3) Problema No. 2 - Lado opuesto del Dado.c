/* Algoritmo: N�mero opuesto del Dado
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
int main() {
    //Declaraci�n de Variables
    int num;
    char letras[10];

    //Entrada de Datos
    printf("                              LADO OPUESTO DEL DADO");
    printf("\n--------------------------------------------------------------------------------");
    // 163 --> �
    printf("\nIngrese el n%cmero del dado: ", 163);
    scanf("%i", &num);
    
    //Procesos + Salida de Datos
    switch(num)
    {
         //strcpy(x, y) --> Copia var 'y' y lo guarda en 'x'.
         case 1: strcpy(letras, "seis");
                 printf("\nDel lado opuesto se encuentra el n%cmero %s.", 163, letras);
                 break;
         case 2: strcpy(letras, "cinco");
                 printf("\nDel lado opuesto se encuentra el n%cmero %s.", 163, letras);
                 break;
         case 3: strcpy(letras, "cuatro");
                 printf("\nDel lado opuesto se encuentra el n%cmero %s.", 163, letras);
                 break;
         case 4: strcpy(letras, "tres");
                 printf("\nDel lado opuesto se encuentra el n%cmero %s.", 163, letras);
                 break;
         case 5: strcpy(letras, "dos");
                 printf("\nDel lado opuesto se encuentra el n%cmero %s.", 163, letras);
                 break;
         case 6: strcpy(letras, "uno");
                 printf("\nDel lado opuesto se encuentra el n%cmero %s.", 163, letras);
                 break;
         default: printf("\nN%cmero inv%clido. Por favor ingrese un n%cmero disponible en el dado.", 163, 160, 163);
    }
    
    //Fin + Prolongaci�n de Ventana
    getch();
    return 0;
}
