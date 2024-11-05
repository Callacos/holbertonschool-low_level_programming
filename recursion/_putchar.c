#include <unistd.h>

/**
 * _putchar - Affiche un caractère sur la sortie standard.
 * @c: Le caractère à afficher.
 *
 * Retour: 1 si l'affichage est réussi, -1 en cas d'erreur.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
