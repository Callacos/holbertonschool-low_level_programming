#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calcule la longueur d'une chaîne
 * @s: la chaîne à mesurer
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _strcpy - copie une chaîne
 * @dest: la destination
 * @src: la source
 * Return: le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])

	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - crée un nouveau chien
 * @name: le nom du chien
 * @age: l'âge du chien
 * @owner: le propriétaire du chien
 * Return: pointeur vers le nouveau chien, NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	if (!name || age < 0 || !owner)
	return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
	return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (!dog->name)
	{
	free(dog);
	return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (!dog->owner)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

