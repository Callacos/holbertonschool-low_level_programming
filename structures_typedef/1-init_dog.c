#include "dog.h"
#include <stdlib.h>
/**
* init_dog - est une fonction qui initialise
* une variable de type struct_dog.
*@d: pointeur vers une structure de type struct_dog;
*@name: nom(membre)
*@owner: proriétaire(membre)
*@age: age(membre)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
