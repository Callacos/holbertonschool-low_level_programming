#include <stdlib.h>
/**
* _strdup - fonction qui retourne un pointeur d'une
* nouvelle localisation qui copie une chaine
*@str: retourne NULL si lui meme est NULL
*
*Return: copie
*/
char *_strdup(char *str)
{

	unsigned int length = 0;
	unsigned int i;
	char *copy;

	if (str == NULL)
                return (NULL);


	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];

	copy[length] = '\0';

	return (copy);

}

