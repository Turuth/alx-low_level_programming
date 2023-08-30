#include "lists.h"

/**
 * add_nodeint - dad'sa new node at the beginning of a linked list
 * @head: pointersto the first node in the list
 * @n: data to insertsin that new node
 *
 * Return: pointersto the new node, or NULL if it fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
