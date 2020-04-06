/* Se importa el header <string.h> para poder implementar la función strerror
   Ésta regresa un apuntador a un string referente al mensaje de error cuyo
   identificador se ingresa como argumento de la función.
 */
#include <stdio.h>
#include <string.h>

int main()
{
	int i;

	/* Nótese que se optó por ocupar strerror() en lugar de sys_nerr y
	   sys_errlist[], dado que el mismo compilador GCC los considera obso-
	   letos.
	 */

	for (i=1; i<134; i++)
	{
		printf("%d: %s\n", i, strerror(i));
	}
}
