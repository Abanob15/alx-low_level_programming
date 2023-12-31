#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - add a new node at the beginning of a linked list
 * @head: double pointer to the beginning of linked list
 * @n: value to be added to new node
 *
 * Return: pointer to the new node, or (NULL) if fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
