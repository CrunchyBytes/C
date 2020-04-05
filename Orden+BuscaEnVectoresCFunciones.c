//  main.c
//  OrdenayBuscaenVectoresconFunciones
//
//  Created by Ofelia Cervantes  on 11/13/17.
//  Copyright © 2017 Universidad de las Américas Puebla. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Procedimiento para generar vector
void generar(int x[],int n)
{
    int i;
    int min,max;
    
    min=50;
    max=100;
    for(i=0;i<n;i++)
    {
        x[i]=rand()%(max-min+1)+min;
    }
}







// Procedimiento para imprimir vector
void imprimir(int x[],int n)
{
    int j;
    for(j=0;j<n;j++)
        printf("\n %d", x[j]);
    printf("\n");
}




// Procedimiento para ordenar por selección
void ordenar( int x[], int y[], int n)
{
    int paso, min, i, temp;
    
    for (paso=0; paso <n; paso++){
        min = paso;
        for ( i = paso+1; i< n; i++) {
            if (x[i] <  x[min])
                min = i;
        }
        // intercambia entre paso y min
        temp = x[paso];  x[paso] = x[min];  x[min] = temp;
        temp = y[paso];  y[paso] = y[min];  y[min] = temp;
    }
}






// Función calcula promedio
float promedio(int x[],int n)
{
    int j;float suma=0;
    for(j=0;j<n;j++)
        suma = suma + x[j];
    return suma/n;
}



// Búsqueda secuencial
int buscarseq(int x[ ], int n ,int buscado)
{
    int i, donde;
    donde = -1; i=0;
    while(i < n && donde <0){
        if(x[i]== buscado)
            donde = i;  //retornamos la posición del elemento encontrado
        else i = i+1;
    }
    return donde;
}










// Búsqueda binaria

int buscarbin(int x[ ], int n ,int buscado)
{
    int centro, prim = 0, ult = n-1, donde = -1;
    while  (prim <= ult ) {
        centro = (prim + ult) / 2;
        if   (x[centro] == buscado) {
            donde = centro;
            prim =  n +1 ;
        }
        else  { if (buscado  < x[centro])
            ult  = centro - 1;
        else
            prim  = centro + 1;
        }
    }
    return donde;
}


// Programa principal
int main() {
    
    int n, cual;
    cual=0 ;
    char otra;
    printf("\n Cuantos datos quieres generar en cada vector? ");
    scanf("%d",&n);
    int a[n], b[n];
    int opc, donde;
    float pr;
    
    //srand(time_t(0));
    
    // Creación de los vectores con valores aleatorios
    generar(a,n);
    generar(b,n);
    
    otra = 's';
    do
    {
        printf("\nElija una de las siguientes opciones");
        printf("\n1. Desplegar contenido vectores");
        printf("\n2. Buscar un elemento en vector a");
        printf("\n3. Calcular promedio del vector b");
        printf("\n4. Ordenar los vectores");
        printf("\n ¿Que opcion desea utilizar?");
        scanf("%d", &opc);
        
        switch(opc){
                
            case 1: imprimir(a,n);
                    imprimir(b,n);
                    break;
                
            case 2: printf("\nNúmero a buscar en vector a: ?");
                    scanf("%d", &cual);
                    donde=buscarseq(a,n,cual);
                    if (donde >= 0)
                        printf("\n Su pareja en el vector b, es: %d", b[donde]);
                    else printf("\n No lo encontré");
                    break;
                


            case 3: pr = promedio (b,n);
                    printf("\nEl promedio del vector b es: %f ",pr );
                    break;
                
            case 4: ordenar (a,b,n);
                    break;
                
            default:printf("\nNo se encuentra esta opcion.");
                    break;
        }
        
        printf("\n\nDesea aplicar otra opcion? si/no ");
        scanf("%s", &otra);
    }
    while (otra == 'S' || otra =='s');
    
    printf("\n\tGracias por utilizar este programa.\n");
    
    return (0);
    
}

