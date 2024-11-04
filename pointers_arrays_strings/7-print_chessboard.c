#include "main.h"

/**
 * print_chessboard - Affiche un échiquier de 8x8.
 * @a: Tableau de caractères représentant le plateau d'échec.
 *
 * Description:
 * Cette fonction prend un tableau à deux dimensions de 8 par 8, chaque
 * élément représentant une case de l'échiquier. Elle parcourt chaque
 * ligne et chaque colonne pour afficher le plateau dans la console.
 */
void	print_chessboard(char (*a)[8])
{
	int	i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
