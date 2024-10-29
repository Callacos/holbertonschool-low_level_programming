#include "main.h"

/**
 * _putchar - Écrit un caractère sur la sortie standard.
 * @c: Le caractère à écrire.
 * Return: Le nombre de caractères écrits, ou -1 en cas d'erreur.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
