#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 *         or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	/* Declare a temporary pointer to store the next node */
	listint_t *temp;
	/* Variable to store the data of the deleted node */
	int num;

	/* Check if the head pointer or the list is empty */
	if (!head || !*head)
		return (0);

	/* Store the data of the head node to be returned */
	num = (*head)->n;

	/* Update the head pointer to the next node */
	temp = (*head)->next;
	/* Free the original head node */
	free(*head);
	/* Update the head pointer to the new head */
	*head = temp;

	/* Return the data of the deleted node */
	return (num);
}

