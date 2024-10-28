#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale sur le terminal
 * @n: Nombre de fois que le caractère '\' doit être imprimé
 *
 * Description: Imprime le caractère '\' en formant une diagonale. Chaque
 * ligne est précédée d'un nombre d'espaces croissant. Si n est inférieur
 * ou égal à 0, un saut de ligne est imprimé.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
