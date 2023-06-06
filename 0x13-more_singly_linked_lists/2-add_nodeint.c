#include "lists.h"
/**
 * add_nodeint -  a function that adds a new node
 * at the beginning of a listint_t list.
 * @n: newnode
 * @head: first node pointer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *noveau_node = malloc(sizeof(listint_t));

	if (!noveau_node || !head)
		return (NULL);

	noveau_node->next = NULL;
	noveau_node->n = n;

	if (*head)
		noveau_node->next = *head;
	*head = noveau_node;
	return (noveau_node);
}
