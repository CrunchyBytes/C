/* Algoritmo: Compara-ciclos
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main(){
	//Variables
	int x;
	char segm;
	
	//Procesos
	printf("Ingrese la letra del segmento para ver su prueba de escritorio: ");
	scanf("%c", &segm);
	switch (segm)
	{
		case 'A': for (x=15; x>3; x-=3)
					{
						printf("\n%i", x);
					}
		break;
		case 'a': for (x=15; x>3; x-=3)
					{
						printf("\n%i", x);
					}
		break;
		case 'B': x=3;
					while (x<=9)
					{
						x+=3;
						printf("\n%i", x);
					}
		break;
		case 'b': x=3;
					while (x<=9)
					{
						x+=3;
						printf("\n%i", x);
					}
		break;
		case 'C': x=15;
					while (x>3) 
					{
						printf("\n%i", x-3);
						x-=3;
					}
		break;
		case 'c': x=15;
					while (x>3) 
					{
						printf("\n%i", x-3);
						x-=3;
					}
		break;
		case 'D': for (x=3; x<=9; x+=3)
					{
						printf("\n%i", x+3);
					}
		break;
		case 'd': for (x=3; x<=9; x+=3)
					{
						printf("\n%i", x+3);
					}
		break;
	}

	//Fin
	getch();
	return 0;
}
