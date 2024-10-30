#include "main.h"
#include <limits.h>
/**
 * _atoi - Convertit une chaîne en entier
 * @s: Chaîne de caractères à convertir
 *
 * Return: L'entier converti ou 0 si aucun chiffre trouvé
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
		found_digit = 1;
		if (result > INT_MAX / 10 || (result == INT_MAX
				/ 10 && *s - '0' > INT_MAX % 10))
		{
		return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
		}
	else if (found_digit)
		break;
	s++;
	}


	if (sign == -1 && result > (unsigned int)INT_MAX + 1)
	return (INT_MIN);

	return (sign * result);
}
