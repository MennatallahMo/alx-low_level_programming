#include "lists.h"

/**
 * pop_listint - a function that deletes the
 * head node of a listint_t linked list
 * @head: first node pointer address
 * Return:  the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *poped;
	int n;

	if (!*head || !head)
		return (0);

	poped = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = poped;
	return (n);
}
