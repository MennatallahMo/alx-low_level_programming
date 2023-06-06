#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @n: newnode
 * @head: first node pointer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nov_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!nov_node || !head)
		return (NULL);

	nov_node->n = n;
	nov_node->next = NULL;

	if (!*head)
		*head = nov_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = nov_node;
	}
	return (nov_node);
}
