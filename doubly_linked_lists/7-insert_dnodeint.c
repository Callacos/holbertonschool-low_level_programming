#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
			{
				current->next->prev = new_node;
			}
			current->next = new_node;
			return (new_node);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
