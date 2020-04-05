/* Algoritmo: Vector [Funciones y Procedimientos]
 * Alexander D�az Ruiz
 * ID 160046
 * Secci�n 2
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

/* Variables Globales

 * Son todas aquellas variables declaradas fuera de funciones
 * Incluyendo Main
 
 * El vector 'x' no se quedar� con ese tama�o (de capacidad '1').
 * S�lo le fue declarado un tama�o inicial cualquiera para ser sobreescrito m�s tarde
     
 * Inicializaci�n de 'find', n�mero a buscar en el vector 'x', = 0 
 * �nicamente para entrar al ciclo por primera vez. 
 */
int n, limS, limI, x[1], i, temp, find=0, frst=0, mid, last, pos;
bool edit=true;


// (PROCEDIMIENTO) Creaci�n + Llenado del vector
void create(int n, int limI, int limS){
    
    // Declaraci�n de semilla en constante cambio de la funci�n "rand"
    srand(time(NULL));
    
    // Ciclo para inicializar valores del vector
    for (i=0; i<n; i++)
    {
        x[i] = rand()%(limS-limI+1)+limI;
    }
}

// (PROCEDIMIENTO) Impresi�n del Vector
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

/* (PROCEDIMIENTO) Impresi�n del Vector Ordenado
 * El procedimiento es exactamente igual al otro procedimiento "print"
 * La �nica diferencia es haber incluido "(ordenado)" en la impresi�n
 */
void printO(int n){
     
     printf("\n\nEl vector (ordenado) contiene los siguientes elementos:\n");
     
     for (i=0; i<n; i++)
     {
         printf("\n- %i", x[i]);
     } 
}

// (FUNCI�N) B�squeda Vector
int srch(int find){
    
    /* El ciclo seguir� mientras el primer valor ('frst'), aquel de donde se empieza la b�squeda,
     * anteceda al �ltimo ('last'), aquel donde termina.
     */
    while (frst<=last)
	{   
        // 'mid' es la posici�n exactamente en medio de 'frst' y 'last'
		mid = (frst+last)/2;
		
		/* Si el elemento del vector en la posici�n 'mid' es el valor a buscar:
		 * Se guarda la posici�n de 'mid'
		 * Se inicializa 'frst' fuera de rango, para salirse del ciclo
		 */
		if (x[mid] == find)
		{
			pos = mid;
			frst = n+1;
		}
		
		/* Si el n�mero a buscar es menor a aquel en la posici�n 'mid' del vector 'x':
		 * 'last', la posici�n donde acaba la b�squeda, es el anterior a 'mid'
		 */
		else if (find < x[mid])
		{
			last = mid-1;
		}
		
		/* Si el n�mero a buscar es mayor a aquel en la posici�n 'mid' del vector 'x':
		 * 'frst', la posici�n donde empieza la b�squeda, es el posterior a 'mid'
		 */
		else
		{
			frst = mid+1;
		}
	}
	
	/* Si 'frst' est� fuera de rango (= n+1)
	 * El n�mero fue encontrado
	 */
	if (frst==n+1)
	{
		printf("El n%cmero a buscar, %i, se encuentra en la posici%cn [%i] del vector", 163, find, 162, pos);
		
		/* Regresar variables a sus default
		 * As� ser�n eligibles para recorrer el ciclo nuevamente
		 */
		frst = 0;
		last = n-1;
		pos = n+1;
	}
	
	// Si no, el n�mero no existe en el vector
	else
	{
		printf("El n%cmero a buscar, %i, no se encuentra en el vector", 163, find);
		
		/* Regresar variables a sus default
		 * As� ser�n eligibles para recorrer el ciclo nuevamente
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
   	
   	// Tama�o del vector, L�mites de valores a llenar el vector 'x'
    printf("Ingrese el tama%co del vector a crear, as%c como los l%cmites inferior y superior ", 164, 161, 161);
    printf("\nTAMA%cO: ", 165);
    scanf("%i", &n);
    printf("L%cMITE INFERIOR: ", 214);
    scanf("%i", &limI);
    printf("L%cMITE SUPERIOR: ", 214);
    scanf("%i", &limS);
    
    /* Inicializaci�n de 'last'
     * Necesario para b�squeda dentro del vector
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
    
    /* Ciclo de b�squeda de element dentro del Vector
     * Mientras el n�mero a buscar 'find' sea mayor o igual a 0, el ciclo prosigue
     */
    while (find>=0)
    {
        printf("\n\nIngrese el n%cmero a buscar: ", 163);
        scanf("%i", &find);
        
        /* Parece redundante hacer un ciclo anidado c/ la misma condici�n,
         * Pero lo inclu� para que el programa no se moleste en realizar la b�squeda si el n�mero a buscar es negativo
         
         * No funcion�. Ciclo infinito.
         */
         
        /*while (find>=0)
        {*/
            // LLamado a la funci�n "srch"
            srch(find);
        //}
    }
    
    // Fin
    getch();
    return 0;
}
