#include "main.h"
/**
*_puts_recursion - affiche une chaine de caratère
*suivie d'un saut a la ligne.
*
*@s: pointeur vers la chaine.
*
*Description: cette fonction utilise la récursion
* pour afficher chaque caractère
*de le chaine pointer par 's'.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
