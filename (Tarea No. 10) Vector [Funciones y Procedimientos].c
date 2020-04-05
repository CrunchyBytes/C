/* Algoritmo: Vector [Funciones y Procedimientos]
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

/* Variables Globales

 * Son todas aquellas variables declaradas fuera de funciones
 * Incluyendo Main
 
 * El vector 'x' no se quedará con ese tamaño (de capacidad '1').
 * Sólo le fue declarado un tamaño inicial cualquiera para ser sobreescrito más tarde
     
 * Inicialización de 'find', número a buscar en el vector 'x', = 0 
 * Únicamente para entrar al ciclo por primera vez. 
 */
int n, limS, limI, x[1], i, temp, find=0, frst=0, mid, last, pos;
bool edit=true;


// (PROCEDIMIENTO) Creación + Llenado del vector
void create(int n, int limI, int limS){
    
    // Declaración de semilla en constante cambio de la función "rand"
    srand(time(NULL));
    
    // Ciclo para inicializar valores del vector
    for (i=0; i<n; i++)
    {
        x[i] = rand()%(limS-limI+1)+limI;
    }
}

// (PROCEDIMIENTO) Impresión del Vector
void print(int n){
     
     printf("\n\nEl vector contiene los siguientes elementos:\n");
     
     for (i=0; i<n; i++)
     {
         printf("\n- %i", x[i]);
     } 
}

// (PROCEDIMIENTO) Ordenamiento del Vector
void ord(){
     
     while (edit==true)
    {
        edit = false;
        
        for(i=0; i<n-1; i++)
		{
			if (x[i] > x[i+1])
			{
				temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
				edit=true;
			}
		}
    }
}

/* (PROCEDIMIENTO) Impresión del Vector Ordenado
 * El procedimiento es exactamente igual al otro procedimiento "print"
 * La única diferencia es haber incluido "(ordenado)" en la impresión
 */
void printO(int n){
     
     printf("\n\nEl vector (ordenado) contiene los siguientes elementos:\n");
     
     for (i=0; i<n; i++)
     {
         printf("\n- %i", x[i]);
     } 
}

// (FUNCIÓN) Búsqueda Vector
int srch(int find){
    
    /* El ciclo seguirá mientras el primer valor ('frst'), aquel de donde se empieza la búsqueda,
     * anteceda al último ('last'), aquel donde termina.
     */
    while (frst<=last)
	{   
        // 'mid' es la posición exactamente en medio de 'frst' y 'last'
		mid = (frst+last)/2;
		
		/* Si el elemento del vector en la posición 'mid' es el valor a buscar:
		 * Se guarda la posición de 'mid'
		 * Se inicializa 'frst' fuera de rango, para salirse del ciclo
		 */
		if (x[mid] == find)
		{
			pos = mid;
			frst = n+1;
		}
		
		/* Si el número a buscar es menor a aquel en la posición 'mid' del vector 'x':
		 * 'last', la posición donde acaba la búsqueda, es el anterior a 'mid'
		 */
		else if (find < x[mid])
		{
			last = mid-1;
		}
		
		/* Si el número a buscar es mayor a aquel en la posición 'mid' del vector 'x':
		 * 'frst', la posición donde empieza la búsqueda, es el posterior a 'mid'
		 */
		else
		{
			frst = mid+1;
		}
	}
	
	/* Si 'frst' está fuera de rango (= n+1)
	 * El número fue encontrado
	 */
	if (frst==n+1)
	{
		printf("El n%cmero a buscar, %i, se encuentra en la posici%cn [%i] del vector", 163, find, 162, pos);
		
		/* Regresar variables a sus default
		 * Así serán eligibles para recorrer el ciclo nuevamente
		 */
		frst = 0;
		last = n-1;
		pos = n+1;
	}
	
	// Si no, el número no existe en el vector
	else
	{
		printf("El n%cmero a buscar, %i, no se encuentra en el vector", 163, find);
		
		/* Regresar variables a sus default
		 * Así serán eligibles para recorrer el ciclo nuevamente
		 */
		frst = 0;
		last = n-1;
		pos = n+1;
	}
}

// Main
int main(){

    printf("\t\t\t\tVECTOR c/ FUNCIONES Y PROCEDIMIENTOS\n");
   	printf("--------------------------------------------------------------------------------\n");
   	
   	// Tamaño del vector, Límites de valores a llenar el vector 'x'
    printf("Ingrese el tama%co del vector a crear, as%c como los l%cmites inferior y superior ", 164, 161, 161);
    printf("\nTAMA%cO: ", 165);
    scanf("%i", &n);
    printf("L%cMITE INFERIOR: ", 214);
    scanf("%i", &limI);
    printf("L%cMITE SUPERIOR: ", 214);
    scanf("%i", &limS);
    
    /* Inicialización de 'last'
     * Necesario para búsqueda dentro del vector
     */
    last = n-1;
    
    // LLamado al procedimiento "create"
    create(n, limI, limS);
    
    // LLamado al procedimiento "print"
    print(n);
    
    // LLamado al procedimiento "ord"
    ord();
    
    // LLamado al procedimiento "printO"
    printO(n);
    
    /* Ciclo de búsqueda de element dentro del Vector
     * Mientras el número a buscar 'find' sea mayor o igual a 0, el ciclo prosigue
     */
    while (find>=0)
    {
        printf("\n\nIngrese el n%cmero a buscar: ", 163);
        scanf("%i", &find);
        
        /* Parece redundante hacer un ciclo anidado c/ la misma condición,
         * Pero lo incluí para que el programa no se moleste en realizar la búsqueda si el número a buscar es negativo
         
         * No funcionó. Ciclo infinito.
         */
         
        /*while (find>=0)
        {*/
            // LLamado a la función "srch"
            srch(find);
        //}
    }
    
    // Fin
    getch();
    return 0;
}
