#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libère la mémoire allouée pour un chien
 * @d: pointeur vers la structure dog_t à libérer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
