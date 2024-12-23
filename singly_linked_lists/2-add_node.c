#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list
 *
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	while (str[len])
		len++;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
