#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: first node pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *freelist;

	while (head)
	{
		freelist = head;
		head = head->next;
		free(freelist);
	}
}
