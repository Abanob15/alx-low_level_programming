#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: a double pointer
 *
 *Return: empty
*/

int pop_listint(listint_t **head)
{
	listint_t *start;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	i = start->n;
	free(start);
	return (i);
}

