#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @index: node index
 * @head: first node pointer
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth;
	unsigned int n;

	for (nth = head, n = 0; n < index && nth; nth = nth->next, n++)
		;
	return (nth);
}
