#include "main.h"


/**
 * _strlen - string length
 * @s: checked string length
 * Return: integer string length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
