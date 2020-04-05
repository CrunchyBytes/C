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

// Estructura de cada Contacto
struct contacto {
       /* 'num' es declarado como un entero tipo "long long" (%lli)
        * "int" (%i) [2 bytes] --> {-32,768; 32,767}
        * "long" (%li) [4 bytes] --> {-2,147,483,648; 2,147,483,647}
        * "long long" (%lli) [8 bytes] --> {9,223,372,036,854,775,808}
        
        * Como 'num' es un número teléfonico, entra en la última categoría
        */
	long long int num;
	char nom[35];
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
		printf("%lli", agenda[i].num);
		printf("\t\t%s", agenda[i].nom);
		printf("\t\t%s\n\n", agenda[i].email);
	}
}

// Ciclo "for"


// Main
int main(){
	
	int t=5, opc, pos;
	char otra[3];
	char search[35];
	int numB;
	
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
	printf("");
	// Ciclo "do while"
		// Switch
		
	getch();
	return 0;
}
