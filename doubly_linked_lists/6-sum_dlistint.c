#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
