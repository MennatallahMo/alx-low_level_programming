#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a listint_t list.
 * @h:first node pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		no++;
	}
	return (no);
}
