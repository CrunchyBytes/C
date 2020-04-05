/* Algoritmo: Calculadora de IMC con condiciones anidadas.
 * Alexander Díaz Ruiz
 * 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Declaración de Variables
	int peso;
	float estatura, imc;
	
	//Lectura de Datos
	//"%c", 214 --> Í
	printf("                     CALCULADORA DE %cNDICE DE MASA CORPORAL ", 214);
	printf("\n--------------------------------------------------------------------------------");
	// "%c", 162 --> ó
    printf("\nPor favor ingrese su peso (en kg) y su estatura (en m) a continuaci%cn:\n", 162);
	printf("PESO: ");
	scanf("%i", &peso);
	printf("ESTATURA: ");
	scanf("%f", &estatura);
	
	//Cálculo del IMC
	imc = peso / (estatura*estatura);
	
	//Evaluación
	printf("\nSu %cndice de Masa Corporal es de %.2f, y por lo tanto, tiene ", 214, imc);
	if (imc < 20)
	{    
         printf("bajo peso.");
    }
         else if (imc < 25)
         {    
              printf("peso adecuado.");
         }    
              else if (imc < 27.5)
              {
                   printf("sobrepeso.");
              }
                   else if (imc < 30)
                   {
                        printf("obesidad.");
                   }
                        else
                        {
                            printf("obesidad severa.");
                        }
    // Fin + Prolongación de Ventana
    getch();
    return 0;
}
