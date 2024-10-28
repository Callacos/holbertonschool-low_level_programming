#include "main.h"

/**
 * print_triangle - Affiche un triangle de taille donnée
 * @size: La taille du triangle
 *
 * Description: Cette fonction imprime un triangle composé de caractères #,
 * aligné à droite. Si la taille est 0 ou inférieure
 *elle n'affiche qu'un saut de ligne.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
