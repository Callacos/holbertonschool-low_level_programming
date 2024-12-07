#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* delete_dnodeint_at_index - deletes the node at index of a dlistint_t
* @head: pointer to the head of the list
* @index: index of the node to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
