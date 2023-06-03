#include "lists.h"

/**
 * _strlen -string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s++)
		n++;
	return (n);
	if (!s)
		return (0);
}

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: first node pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d]%s\n" , _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
