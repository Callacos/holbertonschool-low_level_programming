#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - imprime une structure dog.
* @d: Pointer de struct_dog qui print.
*
* Description: Prints le détails de struct_dog,
* ou (nil) si un element est NULL.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
