/* Algoritmo: Hotel - "EL BUEN DESCANSO"
 * Alexander Díaz Ruiz y Eduardo Salguero Domínguez
 * ID 160046 y 160050
 * Sección 2
 */
 
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// Estructura
struct prueba {
       // Número de la habitación
       int num;
       
       // Nombre de la habitación  
       char nomb[35];
       
       // Número de personas alojando la habitación
       int persi;
       
       // Disponibilidad de la habitación
       bool disp;
       
       // "DISPONIBLE" u "OCUPADO"/"<nombre_cliente>" dependiendo de 'disp'
       char nombDisp[35];
       
       // Número de personas que puede alojar la habitación
       int alojo;
       
       /* Precio por noche (sin impuestos)
        * Aplicable nada más para una persona (la que hace el Check In)
        * Todo alojado adicional debe pagar $250 c/u por noche
        */
       float precio;
       
       // Nombre del cliente que alquila la habitación
       char nombcli[35];
       
       /* Estructura anidada "fecha", dentro de estructura "prueba"
        * 2 variables de este tipo: 'FLlega' y 'FSal'
        */
       struct fecha {
    		int dia;
    		int mes;
 		 } FLlega, FSal;
};

// Contador global
int i;

/* Procedimiento "imp"
 * Imprime datos de la estructura "prueba" en pantalla
 * Y también en un archivo "prueba.txt"
 */
 void tabla(struct prueba x[])
 {
 	
 		printf("\n---------------------------------------------------HABITACIONES---------------------------------------------------------");
	
	// Pointer de archivo 'id'
	FILE * id;
    
    // 'id' crea un archivo .txt de nombre "prueba.txt" para escribir en ella. 
    id = fopen("prueba.txt", "w");
    
   	printf("\nNum.\tNombre  \tPers. \tDisponibilidad \tCupo \t Precio \tNom.Clie \tLlegada \tSalida");
   	printf("\n------------------------------------------------------------------------------------------------------------------------");
   	
   	/* Impresión de los datos guardados en el vector de estructuras 'x' tanto en comando como en "prueba.txt"
   	 * Condiciones son sólo para organizar impresión de datos.
   	 */
    for (i=0; i<8; i++)
    {
        if (strlen(x[i].nomb) <= 7 && strlen(x[i].nombcli) <= 3)  
        {   
            printf("\n%i\t%s\t\t%i\t%s\t %i \t%0.2f\t    \t\t%s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s\t\t%i\t%s\t %i \t%0.2f\t\t\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) <= 7 && strlen(x[i].nombcli) <= 11)  
        {   
            printf("\n%i\t%s\t\t%i\t%s\t %i \t%0.2f\t    \t%s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s\t\t%i\t%s\t %i \t%0.2f\t\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) <= 7 && strlen(x[i].nombcli) <= 19)  
        {   
            printf("\n%i\t%s\t\t%i\t%s\t %i \t%0.2f\t    %s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s\t\t%i\t%s\t %i \t%0.2f\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) == 8 && strlen(x[i].nombcli) <= 3)
        {
		    printf("\n%i\t%s\t%i\t%s\t %i \t%0.2f\t    \t\t%s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s\t%i\t%s\t %i \t%0.2f\t\t\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) == 8 && strlen(x[i].nombcli) <= 11)
        {
		    printf("\n%i\t%s\t%i\t%s\t %i \t%0.2f\t    \t%s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s\t%i\t%s\t %i \t%0.2f\t\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) == 8 && strlen(x[i].nombcli) <= 19)
        {
		    printf("\n%i\t%s\t%i\t%s\t %i \t%0.2f\t    %s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s\t%i\t%s\t %i \t%0.2f\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) == 9 && strlen(x[i].nombcli) <= 3)
        {
   			printf("\n%i\t%s \t%i\t%s\t %i \t%0.2f\t    \t\t%s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s \t%i\t%s\t %i \t%0.2f\t\t\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) == 9 && strlen(x[i].nombcli) <= 11)
        {
   			printf("\n%i\t%s \t%i\t%s\t %i \t%0.2f\t    \t%s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s \t%i\t%s\t %i \t%0.2f\t\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
        
        else if (strlen(x[i].nomb) == 9 && strlen(x[i].nombcli) <= 18)
        {
   			printf("\n%i\t%s \t%i\t%s\t %i \t%0.2f\t    %s\t %i/%i\t         %i/%i\n", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
            fprintf(id, "\n\n%i\t%s \t%i\t%s\t %i \t%0.2f\t%s\t%i\t%i\t%i\t%i", x[i].num, x[i].nomb, x[i].persi, x[i].nombDisp,x[i].alojo,x[i].precio,x[i].nombcli,x[i].FLlega.dia,x[i].FLlega.mes,x[i].FSal.dia,x[i].FSal.mes);
        }
    }
    // Se cierra "prueba.txt"
    fclose(id);

 }
 
void imp(struct prueba x[]){
	
  int perstemp;
  char vecnom[8][35];
  
	tabla(x);
  
    // Número de personas a alojar en la habitación
		printf("\n%cA cu%cntas personas va a alojar? ", 168, 160);
		scanf("%d", &perstemp);
  
  	if (perstemp < 1)
    {
      printf("\nTememos que esto no es posible. \nFavor de ingresar un n%cmero v%clido de alojados.\n\n", 163, 160);
      perstemp=0;
      system("pause");
      system("cls");
      imp(x);
      
    }
  else if (perstemp > 4)
  {
     printf("\nLo lamentamos, no tenemos ninguna habitaci%cn con ese cupo. \nFavor de ingresar un n%cmero v%clido de alojados.\n\n", 162, 163, 160);
      perstemp=0;
      system("pause");
      system("cls");
      imp(x);
      
  }
  else
  {
    printf("\nLas habitaciones que se adec%can a su n%cmero de personas son:\n\n", 163, 163);
  	for (i=0; i<8; i++)
    {
      if (perstemp<=x[i].alojo )
      
      {

       strcpy(vecnom[i], x[i].nomb);
        printf("Habitaci%cn %d: %s\n", 162, i+1,vecnom[i]);
    }
}
}
}

/* Procedimiento "registros"
 * Se encarga de guardar los datos a pedir en el Check In
 */
void registros(struct prueba x[])
{
	
	int elegida;
	char apellido[35];

		tabla(x);
		
		if (x[0].persi !=0 && x[1].persi !=0 && x[2].persi !=0 && x[3].persi !=0 && x[4].persi !=0 && x[5].persi !=0 && x[6].persi !=0 && x[7].persi !=0)
    {
        printf("\nLo lamentamos, no hay cupo en ninguna de nuestras habitaciones.\nPor favor vuelva m%cs tarde.\n\n", 160);
        system("pause");
        system("cls");
        main();   
    }               
    
  	printf("\n%cQu%c habitaci%cn desea alquilar? ", 168, 130, 162);
		scanf("%d",&elegida);
		
    if (elegida < 1)
    {
      printf("\nTememos que esto no es posible. \nFavor de ingresar un n%cmero de habitaci%cn v%clida de alojados.\n\n", 163, 162, 160);
      elegida=0;
      system("pause");
      system("cls");
      registros(x);
      
    }
   else if (elegida > 8)
  {
     printf("\nLo lamentamos, no disponemos de tantas habitaciones en el hotel. \nFavor de ingresar un n%cmero de habitaci%cn v%clida de alojados.\n\n", 163, 162, 160);
      elegida=0;
      system("pause");
      system("cls");
      registros(x);
  }
  
  if (x[elegida-1].persi != 0)
    {
        printf("\nLo lamentamos, parece que esta habitaci%cn ya est%c ocupada.\nFavor de elegir una disponible.\n\n", 162, 160);
        elegida=0;
        system("pause");
        system("cls");
        registros(x);             
    }
  else
  {
  	// Número de personas a alojar en la habitación
		printf("\n%cA cu%cntas personas va a alojar? ", 168, 160);
		scanf("%d", &x[elegida-1].persi);
  		
  
  switch(elegida)
  {
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
    
    		  if (x[elegida-1].persi > x[elegida-1].alojo)
            {
              printf("\nLo lamentamos, ha ingresado un n%cmero de alojados mayor al cupo de la habitaci%cn.\nFavor de ingresar un cupo v%clido.\n\n", 163, 162, 160);
              x[elegida-1].persi=0;
               system("pause");
   		         system("cls");
               registros(x);
            }
            else if (x[elegida-1].persi < 1)
            {
                 printf("\nTememos que no es posible alquilar una habitaci%cn para nadie.\nFavor de ingresar un cupo v%clido.\n\n", 162, 160);
              x[elegida-1].persi=0;
               system("pause");
   		         system("cls");
               registros(x);
            }
    break;
  }	
	// Nombre del cliente que se registra
	printf("\nIntroduzca su nombre: ");
	scanf("%s",x[elegida-1].nombcli);  
	strcat(x[elegida-1].nombcli, " ");
	scanf("%s", apellido);
	strcat(x[elegida-1].nombcli, apellido);
	
	
	printf("\nFecha de llegada: ");
	scanf("%d %d",&x[elegida-1].FLlega.dia,&x[elegida-1].FLlega.mes);
	switch(x[elegida-1].FLlega.mes)
	{
	    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
           if (((x[elegida-1].FLlega.dia < 1) || (x[elegida-1].FLlega.dia) > 31))
           {
              printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
               getch();
               system("cls");
               strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
               strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
               x[elegida-1].persi = 0;
               x[elegida-1].FLlega.dia=0;
			   x[elegida-1].FLlega.mes=0;
			   x[elegida-1].FSal.dia=0;
			   x[elegida-1].FSal.mes=0;
               registros(x);
           }
           break;
        case 4: case 6: case 9: case 11:
             if (((x[elegida-1].FLlega.dia < 1) || (x[elegida-1].FLlega.dia) > 30))
             {
                 printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
                 getch();
				 system("cls");
                 strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
                 strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
                 x[elegida-1].persi = 0;
                 x[elegida-1].FLlega.dia=0;
			     x[elegida-1].FLlega.mes=0;
			     x[elegida-1].FSal.dia=0;
			     x[elegida-1].FSal.mes=0;
                 registros(x);
             }
             break;
        case 2:
              if (((x[elegida-1].FLlega.dia < 1) || (x[elegida-1].FLlega.dia) > 28))
              { 
			  	  printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
                  getch();
				  system("cls");
                  strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
                  strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
                  x[elegida-1].persi = 0;
                  x[elegida-1].FLlega.dia=0;
			      x[elegida-1].FLlega.mes=0;
			      x[elegida-1].FSal.dia=0;
			      x[elegida-1].FSal.mes=0;
                  registros(x);
              }
              break;
        default:
            printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
            getch();
            system("cls");
            strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
            strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
            x[elegida-1].persi = 0;
            x[elegida-1].FLlega.dia=0;
			x[elegida-1].FLlega.mes=0;
			x[elegida-1].FSal.dia=0;
			x[elegida-1].FSal.mes=0;
           registros(x);
           break;                   
    }
	printf("\nFecha de salida: ");
	scanf("%d %d", &x[elegida-1].FSal.dia, &x[elegida-1].FSal.mes);
	
	if ((x[elegida-1].FSal.mes < x[elegida-1].FLlega.mes) || (x[elegida-1].FSal.mes == x[elegida-1].FLlega.mes && x[elegida-1].FSal.dia < x[elegida-1].FLlega.dia))
	{
	    printf("\n\nNo es posible salir del hotel antes de haber llegado. Por favor ingrese una fecha v%clida.\n\n", 160);
                getch();
               system("cls");
               strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
               strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
               x[elegida-1].persi = 0;
               x[elegida-1].FLlega.dia=0;
			   x[elegida-1].FLlega.mes=0;
			   x[elegida-1].FSal.dia=0;
			   x[elegida-1].FSal.mes=0;
               registros(x);
     }
     else
     {
                               
	switch(x[elegida-1].FSal.mes)
	{
	    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
           if (((x[elegida-1].FSal.dia < 1) || (x[elegida-1].FSal.dia) > 31))
           {
                printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
                getch();
               system("cls");
               strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
               strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
               x[elegida-1].persi = 0;
               x[elegida-1].FLlega.dia=0;
			   x[elegida-1].FLlega.mes=0;
			   x[elegida-1].FSal.dia=0;
			   x[elegida-1].FSal.mes=0;
               registros(x);
           }
           break;
        case 4: case 6: case 9: case 11:
             if (((x[elegida-1].FSal.dia < 1) || (x[elegida-1].FSal.dia) > 30))
             {
                 printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
                 getch();
                 system("cls");
                 strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
                 strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
                 x[elegida-1].persi = 0;
                 x[elegida-1].FLlega.dia=0;
			     x[elegida-1].FLlega.mes=0;
			     x[elegida-1].FSal.dia=0;
			     x[elegida-1].FSal.mes=0;
                 registros(x);
             }
             break;
        case 2:
              if (((x[elegida-1].FSal.dia < 1) || (x[elegida-1].FSal.dia) > 28))
              {
                   printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
                   getch();
                  system("cls");
                  strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
                  strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
                  x[elegida-1].persi = 0;
                  x[elegida-1].FLlega.dia=0;
			      x[elegida-1].FLlega.mes=0;
			      x[elegida-1].FSal.dia=0;
			      x[elegida-1].FSal.mes=0;
                  registros(x);
              }
              break;
        default:
         printf("\nLa fecha ingresada no es v%clida. Por favor ingr%csela nuevamente.", 160, 130);
           getch();
           system("cls");
           strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
           strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
           x[elegida-1].persi = 0;
           x[elegida-1].FLlega.dia=0;
		   x[elegida-1].FLlega.mes=0;
		   x[elegida-1].FSal.dia=0;
		   x[elegida-1].FSal.mes=0;
           registros(x);
           break;                                 
    }
  }					
}	
  if(x[elegida-1].persi>0)
  {
  	strcpy(x[elegida-1].nombDisp,"-OCUPADO-");
  	
  }

  system("pause");
  system("cls");
  
  tabla(x);

}

void factura(struct prueba x[],int elegida)
{
	int noches=0,dia1=0;
	double total=0.0;
	
	if(x[elegida-1].FLlega.mes==x[elegida-1].FSal.mes)
	{
		noches=x[elegida-1].FSal.dia-x[elegida-1].FLlega.dia;
	}
	else
	{
		switch(x[elegida-1].FLlega.mes)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		
		dia1=31-x[elegida-1].FLlega.dia;
		break;
		
		case 4: case 6: case 9: case 11:
		
		dia1=30-x[elegida-1].FLlega.dia;
		break;
		
		case 2:
		dia1=28-x[elegida-1].FLlega.dia;
		break;
		}	
		noches=dia1+x[elegida-1].FSal.dia;
	}
	
	FILE * id2;
    
    id2 = fopen("Ticket.txt", "w");
	
	total=(double)(((x[elegida-1].precio+((x[elegida-1].precio+250)*(x[elegida-1].alojo-1)))*noches)*(118/100));
	
		printf("\n------------------.Hotel el buen descanso.------------------");
		fprintf(id2,"\n------------------.Hotel el buen descanso.------------------");
		printf("\nFecha: %d/%d/17", x[elegida-1].FSal.dia,x[elegida-1].FSal.mes); printf("                       Av.Paseo Udlap num.505");
		fprintf(id2,"\nFecha: %d/%d/17", x[elegida-1].FSal.dia,x[elegida-1].FSal.mes); fprintf(id2,"                       Av.Paseo Udlap num.505");
		printf("\n");
		printf("\nNombre: %s",x[elegida-1].nombcli);
		fprintf(id2,"\nNombre: %s",x[elegida-1].nombcli);
		printf("\n");
		printf("\nFecha entrada: %d/%d/17", x[elegida-1].FLlega.dia,x[elegida-1].FLlega.mes);
		fprintf(id2,"\nFecha entrada: %d/%d/17", x[elegida-1].FLlega.dia,x[elegida-1].FLlega.mes);
		printf("\n");	
		printf("\nFecha  Salida: %d/%d/17",x[elegida-1].FSal.dia,x[elegida-1].FSal.mes);printf("                       Tot:$%0.2f",total);
		fprintf(id2,"\nFecha  Salida: %d/%d/17",x[elegida-1].FSal.dia,x[elegida-1].FSal.mes);fprintf(id2,"                       Tot:$%0.2f",total);	
		printf("\n-------------------------------------------------------------");
		fprintf(id2,"\n-------------------------------------------------------------");
		fclose(id2);

}

void out(struct prueba x[])
{
     int elegida;
     
     tabla(x);
     
     printf("\n%cEn qu%c habitaci%cn se hosped%c? ", 168, 130, 162, 162);
     scanf("%i", &elegida);
     
     switch(elegida)
     {
         case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
              
			  if(x[elegida-1].persi==0)
             {
          	     printf("\nLo lamentamos, debe haber una equivocaci%cn: esta habitaci%cn ya se encontraba sin clientes alojados", 162, 162);
          	     printf("\nFavor de elegir la habitaci%cn correcta\n\n", 162);
          	     
          	     system("pause");
                 system("cls");
        
                 out(x);
             }
             else if (x[elegida-1].persi>0)
             {
             	system("cls");
             	 factura(x,elegida);
                 strcpy(x[elegida-1].nombDisp, "DISPONIBLE");
                 strcpy(x[elegida-1].nombcli, "xxxxxxx xxxxxxxx");
                 x[elegida-1].persi = 0;
                 x[elegida-1].FLlega.dia=0;
				 x[elegida-1].FLlega.mes=0;
				 x[elegida-1].FSal.dia=0;
				 x[elegida-1].FSal.mes=0;
             }

             printf("\n\nGracias por habernos elegido. Esperamos que su estancia haya sido de su agrado :)\n\n");
             system("pause");
             system("cls");
          
          tabla(x);
              break;
              
         default:
                 if (elegida<1)
                 {
                     printf("\nTememos que esto no es posible. \nFavor de ingresar un n%cmero de habitaci%cn v%clida.\n\n", 163, 162, 160);
                     elegida=0;
                     system("pause");
                     system("cls");
                     out(x);
                 }
                 
                 else if (elegida > 8)
                 {
                      printf("\nLo lamentamos, no disponemos de tantas habitaciones en el hotel. \nFavor de ingresar un n%cmero de habitaci%cn v%clida.\n\n", 163, 162, 160);
                      elegida=0;
                      system("pause");
                      system("cls");
                      out(x);
                 }
                 break;
     }
     
     
}
void reporte(struct prueba x[])
{
	printf("--------------------------------------------------REPORTE DE ESTANCIA-----------------------------------------------\n\n");
	
	for(i=0;i<8;i++)
	{
		printf("N%cmero de habitaci%cn: %i\n", 163, 162, x[i].num);
		printf("Nombre de la habitaci%cn: %s\n", 162, x[i].nomb);
		printf("Nombre del cliente: %s\n", x[i].nombcli);
		printf("Fecha de Llegada: %i/%i/17\n", x[i].FLlega.dia, x[i].FLlega.mes);
		printf("Fecha de Salida: %i/%i/17\n", x[i].FSal.dia, x[i].FSal.mes);
		printf("N%cmero de alojados en la habitaci%cn: %i\n\n", 163, 162, x[i].persi);
		printf("-------------------------------------------------------------------------------------------------------------------\n\n");
	}
}

void busquedaclie(struct prueba x[])
{		
	   tabla(x);
	  int paso,min,prim,ult,centro=0,n=8,donde;
    struct prueba temp;
	char buscado[50],apellido[30];
    
    for(paso=0; paso <8; paso++) 
	{
        min=paso;
        for(i=paso+1; i<8; i++) 
		{
            if (strcmp(x[i].nombcli, x[min].nombcli) < 0)
                min=i;
        }
        
        //intercambio cambio de valores
        temp = x[paso];
        x[paso] = x[min];
        x[min]= temp;
    }
	printf("\nIngrese el nombre a buscar: ");
	scanf("%s",&buscado);
	strcat(buscado, " ");
	scanf("%s", apellido);
	strcat(buscado, apellido);
	
	prim=0; 
	ult=7;
	
	while(prim<=ult)
	{
		centro=(prim+ult)/2;
	
		if (strcmp(x[centro].nombcli,buscado) == 0)
		{
			donde=centro;
			prim=n+1;
		}
		else if (strcmp(x[centro].nombcli,buscado)>0)
		{
			ult=centro-1;
		}
		else
		{
			prim=centro+1;
		}
	}
				
	if(prim==n+1)
	{
		printf("\nEl cliente %s se encuentra en la habitaci%cn %d\n", buscado, 162, x[donde].num);
	}
	else
	{
		printf("\nDisculpe, el nombre buscado no se encuentra en la lista.\n");
	}
	
}

void decin(struct prueba x[], int opc)
{
	char apellido[20];
    int i = 0;
    FILE * id;
	id = fopen("prueba.txt", "r");
	while (fscanf(id, "%i", &x[i].num)!= EOF)
    {		
		fscanf(id, "%s", x[i].nomb);
		fscanf(id, "%i", &x[i].persi);
		fscanf(id, "%s", x[i].nombDisp);
		fscanf(id, "%i", &x[i].alojo);
		fscanf(id, "%f", &x[i].precio);
		fscanf(id, "%s",  x[i].nombcli);
		strcat (x[i].nombcli, " ");
		fscanf(id, "%s",apellido);
		strcat (x[i].nombcli,apellido);
		fscanf(id, "%i", &x[i].FLlega.dia);
		fscanf(id, "%i", &x[i].FLlega.mes);
		fscanf(id, "%i", &x[i].FSal.dia);
		fscanf(id, "%i", &x[i].FSal.mes);
		i++;
}
	fclose(id);

    if(opc==1)
    {
    	imp(x);
    }
	if(opc==2)
	{
		registros(x);
	}
	if(opc==3)
	{
		out(x);
	}
	if (opc==4)
	{
		busquedaclie(x);
	}
	if (opc==5)
	{
		reporte(x);
	}
	
}

// Main
int main(){
  
    int opc;
  	char cont[15];
    
    struct prueba x[8];
    
    do {
      	printf("\n\nPor favor elija una de las siguientes opciones:\n");
      	printf("1) Buscar habitaci%cn disponible\n", 162);
      	printf("2) Check in\n");
      	printf("3) Check out + Factura\n");
      	printf("4) B%csqueda de clientes\n", 163);
      	printf("5) Reporte\n\n");
      	
      	scanf("%i", &opc);
      
      	switch (opc)
        {
            case 1:
            		system("cls");
      				decin(x,opc);
      				break;
      case 2:
      				system("cls");
          			decin(x,opc);
      				break;
      case 3:
      				system("cls");
          			decin(x,opc);
      				break;
      case 4:		
      				system("cls");
      				decin(x,opc);
      				break;
      case 5:
      				system("cls");
      				decin(x,opc);
      				break;
      default: printf("\nPor favor elija una opci%cn v%clida.", 162, 160);
      				break;
    }
  printf("\n%cDesea continuar? (SI/NO) ", 168);
  scanf("%s", cont);
  	system("cls");
  } while((strcmp(cont, "SI")==0) || (strcmp(cont, "si")==0) || (strcmp(cont, "Si")==0) || (strcmp(cont, "sI")==0));
  
    printf("\n\nVuelva pronto~ :)");
    getch();
    return 0;
}
