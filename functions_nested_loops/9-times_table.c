#include "main.h"

/**
 * times_table - Affiche la table de multiplication de 9.
 */
void times_table(void)
{
	int i;
	int j;
	int produit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			produit = i * j;
			if (j == 0)
			{
				_putchar('0' + produit);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (produit < 10)
				{
					_putchar(' ');
				}
				_putchar('0' + (produit / 10));
				_putchar('0' + (produit % 10));
			}
		}
		_putchar('\n');
	}
}

