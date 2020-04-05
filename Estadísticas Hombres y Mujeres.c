/* Algoritmo: Estadísticas Hombres y Mujeres
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
int main() {
	//Variables
	int i, hombres[32], mujeres[32], min =9999999, totM=0, totH=0, pos;
	char estados[32][20];
	float promM, promH, porcH, porcM;
	
	//Procesos
	printf("Ingrese el nombre del estado, seguido por el n%cmero de hombres y el de mujeres que habitan en el: ", 163);
	printf("\n");
	
	for (i=0; i<32; i++)
	{
		printf("\n#%i: ", i+1);
		scanf("%s %i %i", estados[i], &hombres[i], &mujeres[i]);
		if (hombres[i]<min)
		{
			min = hombres[i];
			pos = i;
		}
		totM+=mujeres[i];
		totH+=hombres[i];
	}
	
	promM = (float) totM/32;
	promH = (float) totH/32;
	printf("\nHay un promedio de %.2f hombres, y de %.2f mujeres en el pa%cs", promH, promM, 161);
	if (totM < totH)
	{
		printf("\n\nY hay m%cs hombres que mujeres en el pa%cs.", 160, 161);
	}
		else if (totH < totM)
		{
			printf("\n\nY hay m%cs mujeres que hombres en el pa%cs.", 160, 161);
		}
		else
		{
			printf("\n\nY hay el mismo n%cmero de mujeres que hombres en el pa%cs.", 163, 161);
		}
		
	porcH = (float)totH/(totH+totM)*100;
	porcM = (float)totM/(totH+totM)*100;
	printf("\n\nEl porcentaje de hombres en el pa%cs es de %.2f%%", 161, porcH);
	printf("\n\nEl porcentaje de mujeres en el pa%cs es de %.2f%%", 161, porcM);
	
	printf("\n\nFinalmente, el estado con menos hombres es %s, con una poblaci%cn de %i de ellos.", estados[pos], 162, min);
	
	//Fin
	getch();
	return 0;
}
