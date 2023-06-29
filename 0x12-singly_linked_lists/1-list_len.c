#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: Points to first node
 *
 * Return: No of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t nodes = 0;

	if (!h)
		return (0);

	while (curr)
	{
		curr = curr->next;
		nodes++;
	}

	return (nodes);
}
