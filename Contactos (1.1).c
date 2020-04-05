/* Algoritmo: Contactos
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
 
#include<stdio.h> 
#include<stdbool.h> 
#include<time.h> 
#include<stdlib.h>
#include<string.h>
//#include<filesystem>

// Estructura de cada Contacto
struct contacto {
	long long int num;
	char nom[35];
	char ap[35];
	char email[50];
} agenda[200];

/* Vector 'agenda' c/ cupo de 200 estructuras 'contacto'
 * Variable global, dado que está fuera de toda función
 */

// Primeros 5 contactos de la 'agenda'
/*agenda[0] = {2227236531, "Alex D", "alexander.diazrz@udlap.mx"};
agenda[1] = {2227198476, "Marco R", "quien_es_marco@gmail.com"};
agenda[2] = {2228498748, "Alex W", "where_is_alex@outlook.com"};
agenda[3] = {2228425465, "Elijah W", "elijah.who@gmail.com"};
agenda[4] = {2228157614, "Nujabes", "nujabes.rip@gmail.com"};
*/
/*agenda[0].num = 2227236531;
strcpy(agenda[0].nom, "Alex D");
strcpy(agenda[0].email, "alexander.diazrz@udlap.mx");

agenda[1].num = 2227198476;
strcpy(agenda[1].nom, "Marco R");
strcpy(agenda[1].email, "quien_es_marco@gmail.com");

agenda[2].num = 2228498748;
strcpy(agenda[2].nom, "Alex W");
strcpy(agenda[2].email, "where_is_alex@outlook.com");

agenda[3].num = 2228425465;
strcpy(agenda[3].nom, "Elijah W");
strcpy(agenda[3].email, "elijah.who@gmail.com");

agenda[4].num = 2228157614;
strcpy(agenda[4].nom, "Nujabes");
strcpy(agenda[4].email, "nujabes.rip@gmail.com");
*/

// Procedimiento
void desplegar(struct contacto x[], int n){
	
	int i;
	
	for (i=0; i<n; i++)
	{
		printf("\n%i", agenda[i].num);
		printf("\t%s", agenda[i].nom);
		printf("\t%s\n\n", agenda[i].email);
	}
}

int agregar(struct contacto a[], int n){
	
	char apellido[20];
	printf("\nAgregar Contacto: ");
	
	printf("\nN%cmero del contacto: ");
	scanf("%lli", &a[n].num);
	
	printf("\nNombre: ");
	scanf("%s", a[n].nom);
	strcat(a[n].nom, "");
	
	printf("\nApellido: ");
	scanf("%s", apellido);
	strcat(a[n].nom, apellido);
	
	printf("\nCorreo electr%cnico: ", 162);
	scanf("%s", a[n].email);
	
	return n+1;
}

int leerDatos(struct contacto a[]){
	
	int i = 0;
	
	char apellido[20];
	FILE * id;
	
	// El identificador 'id' del archivo leerá ('r') el archivo con el siguiente nombre:
	id = fopen("datos.txt" , "r");
	
	/* Mientras 
	 *
	 */
	while (fscanf(id, "%i", &a[i].num)!= EOF)
	{
		fscanf(id, "%s", &a[i].nom);
		strcat(a[i].nom, "");
		
		fscanf(id, "%s", &a[i].ap);
		strcat(a[i].nom, apellido);
		
		fscanf(id, "%s", &a[i].email);
		i++;
	}
	
	// Se cierra 
	fclose(id);
	return i;
}

void guardarDatos(struct contacto a[], int n){
	
	int k;
	
	// Archivo c/ identificador 'id'
	FILE * id;
	// El identificador 'id' del archivo escribirá ('w') en el archivo con el siguiente nombre:
	id = fopen("datos.txt" , "w");
	
	for (k=0; k<n; k++)
	{
		fprintf(id, "%i\t", a[k].num);
		fprintf(id, "%s\t", a[k].nom);
		fprintf(id, "%s\t", a[k].email);
	}
	fclose(id);
}
// Ciclo "for"


// Main
int main(){
	
	int t=5, opc, pos;
	char otra[3];
	char search[35];
	int numB;
	
	t = leerDatos(agenda);
	
	// Contactos
	agenda[0].num = 2227236531;
	strcpy(agenda[0].nom, "Alex D");
	strcpy(agenda[0].email, "alexander.diazrz@udlap.mx");
	
	agenda[1].num = 2227198476;
	strcpy(agenda[1].nom, "Marco R");
	strcpy(agenda[1].email, "quien_es_marco@gmail.com");
	
	agenda[2].num = 2228498748;
	strcpy(agenda[2].nom, "Alex W");
	strcpy(agenda[2].email, "where_is_alex@outlook.com");
	
	agenda[3].num = 2228425465;
	strcpy(agenda[3].nom, "Elijah W");
	strcpy(agenda[3].email, "elijah.who@gmail.com");
	
	agenda[4].num = 2228157614;
	strcpy(agenda[4].nom, "Nujabes");
	strcpy(agenda[4].email, "nujabes.rip@gmail.com");
	
	strcpy(otra, "SI");
	
	do {
		printf("\nMen%c", 163);
		printf("\n1) Desplegar contactos");
		printf("\n2) Agregar nuevo contacto");
		printf("\n3) Eliminar contacto");
		printf("\n4) Buscar datos de un contacto");
		printf("\n5) Ordenar contactos");
		
		printf("\n\n%cQu%c opci%cn desea elegir? ", 168, 130, 162);
		scanf("%i", &opc);
		
		switch(opc)
		{
			case 1:
					desplegar(agenda, t);
					break;
			case 2:
				
			default: printf("\nShame >:(");
		}
	}
	
	while (otra == "SI" || otra == "si");
	
	guardarDaots(agenda, t);
	// Ciclo "do while"
		// Switch
		
	
	getch();
	return 0;
}
