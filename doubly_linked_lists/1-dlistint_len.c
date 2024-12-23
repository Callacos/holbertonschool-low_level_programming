#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

