#include "main.h"
/**
* print_square - Imprime un carré suivi d'un saut de ligne
 * @size: Taille du carré
 *
 * Description: Cette fonction imprime un carré de côté 'size' en utilisant
 * le caractère '#'. Si 'size' est inférieur ou égal à 0, elle imprime
 * uniquement un saut de ligne.
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
