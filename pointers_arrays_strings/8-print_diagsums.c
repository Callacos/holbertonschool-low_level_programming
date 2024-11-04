#include <stdio.h>

/**
 * print_diagsums - Affiche la somme des deux diagonales d'une matrice carrée.
 * @a: Pointeur vers le premier élément d'une matrice carrée d'entiers.
 * @size: Taille de la matrice (nombre de lignes ou colonnes).
 *
 * Description:
 * Cette fonction calcule et affiche les sommes des diagonales principales
 * et secondaires d'une matrice carrée stockée
 */
void	print_diagsums(int *a, int size)
{
	int	i;
	int	sum_primary = 0;
	int	sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];
		sum_secondary += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
