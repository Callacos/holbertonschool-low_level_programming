#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - Imprime un nom en utilisant une fonction fournie.
* @name: Pointeur vers le nom à imprimer.
* @f: Pointeur vers une fonction qui prend un char * en paramètre.
*
* Description: Cette fonction appelle la fonction pointée par @f,
* en passant @name comme argument.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
