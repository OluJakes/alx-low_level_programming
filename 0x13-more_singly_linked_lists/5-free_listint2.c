#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Double pointer to the listint_t list to be freed.
 *
 * Description: This function frees a linked list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

