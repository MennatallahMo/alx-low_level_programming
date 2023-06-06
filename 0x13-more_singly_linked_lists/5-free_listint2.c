#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: first node pointer address
 * return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *list;

	if (!head)
		return;

	list = *head;
	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
	*head = NULL;
}
