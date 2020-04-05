/* Algoritmo: Media, Varianza, y Desviación Estándar
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<math.h>
int main() {
	//Variables
	float temp[365];
	float med, var, des, sum=0, tot_sum=0;
	int dia, dias, tot_dias = 3;
	
	//Datos
	for (dia=0; dia<tot_dias; dia++)
	{
		printf("\n\nIngrese una temperatura: ");
		scanf("%f", &temp[dia]);
		sum = sum + temp[dia];
	}
	med = sum/tot_dias;
	
	for(dia=0; dia<tot_dias; dia++)
	{
		//No me fío de pow(x, 2). La otra vez en la Tarea 4 dio valores incorrectos.
		sum = (temp[dia] - med)*(temp[dia] - med);
		tot_sum = tot_sum + sum;
	}
	var = tot_sum/(tot_dias-1);
	des = sqrt(var);
	
	printf("\n\nEl promedio de las %i temperaturas = %.2f, su varianza = %.2f, y la desviaci%cn est%cndar = %.2f", tot_dias, med, var, 162, 160, des);
	
	//Fin
	getch();
	return 0;
}
