#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the dlistint_t list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}