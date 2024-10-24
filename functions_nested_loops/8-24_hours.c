#include "main.h"

/**
 * jack_bauer - Affiche chaque minute de la journée de Jack Bauer.
 */
void jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = 0; heures < 24; heures++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + (heures / 10));
			_putchar('0' + (heures % 10));
			_putchar(':');
			_putchar('0' + (minutes / 10));
			_putchar('0' + (minutes % 10));
			_putchar('\n');
		}
	}
}
