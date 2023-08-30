#include "lists.h"

/**
 * free_listint - freed a linked list
 * @head: listint_t list to be freew
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
