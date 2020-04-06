
#include "mic.h"



int main ()

{



        char mensaje[50];

        int i;

 for(i = 1; i<133; i++){

                sprintf(mensaje, "%s %d","Error nro.",i);

            errno = i;

                error(__FILE__, __LINE__, mensaje);



     }



  return 0;

}
