#include "lists.h"

/**
 * free_listint - frees linked lists
 * @head: The listint_t lists be freed
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
