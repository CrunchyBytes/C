/* Algoritmo: Palíndromos
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<stdbool.h>
int main() {
    //Variables
    int i=0, largo, pos=0, reverso;
    char frase[500];
    bool pal=true;

    //Procesos
    printf("\t\t\t\t   PAL%cNDROMOS\n", 214);
    printf("--------------------------------------------------------------------------------");
    printf("%cDe cu%cntas letras es su frase? ", 168, 160);
    scanf("%i", &largo);
    printf("\nIngrese, letra por letra, su frase: \n");
    for (i=0; i<largo; i++)
    {
        scanf("%s", &frase[i]);
    }
    /* 'reverso' se refiere a la última casilla del vector 'frase[]'
     * ¿Por qué es la longitud de los caracteres, menos 1?
     * Porque, al contar desde 0, la última casilla es el (tamaño del vector) - 1
     * (O, en este caso, la (longitud de caracteres de la frase) - 1).
     */
    reverso = largo-1;
    while (pos<reverso && pal==true)
    {
        if (frase[pos]!=frase[reverso])
        {
            pal=false;
        }
        else
        {
            pos++;
            reverso--;
        }
    }
    if (pal==true)
    {
        printf("\n\nLa frase S%c es un pal%cndromo.", 214, 161);
    }
    else
    {
        printf("\n\nLa frase NO es un pal%cndromo.", 161);
    }
                                      
    //Fin
    getch();
    return 0;
}
