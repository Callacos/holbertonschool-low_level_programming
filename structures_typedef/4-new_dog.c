#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
** new_dog - crée un nouveau chien.
 * @name: le nom du chien.
 * @age: l'âge du chien.
 * @owner: le propriétaire du chien.
 * Return: un pointeur vers le nouveau chien ou NULL en cas d'erreur.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
