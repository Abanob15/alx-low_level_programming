#include "lists.h"

/**
 * get_length - returns the length of a string
 *
 * @str: string that determine length of
 *
 * Return: length of @str (l)
*/

unsigned int get_length(const char *str)
{
	unsigned int i, l = 0;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}

/**
 * add_node - add a node at the beginning
 *
 * @head: pointer to first node
 * @str: string
 *
 * Return: pointer to list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new == NULL)
		return (NULL);
	len = get_length(str);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
