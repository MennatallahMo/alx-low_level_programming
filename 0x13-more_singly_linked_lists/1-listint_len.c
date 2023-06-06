#include "lists.h"
/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * @h: first node pointer
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		h = h->next;
		digit++;
	}
	return (digit);
}
