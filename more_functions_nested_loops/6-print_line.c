#include "main.h"

/**
*print_line - Fonction qui permet d'imprimer une ligne
*
*@n: nombre de fois ou le caractère '_' ser autiliser dans la ligne
*Description: cette fonction imprime le carctère '_'n fois
*pour former une ligne droite, si n est inférieur ou égale a 0.
*/
void print_line(int n)
{
		int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
