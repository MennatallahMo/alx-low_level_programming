#include "main.h"
/**
 * *_memset - a function that fills memory with a constant byte.
 * @s:pointer
 * @b:constant
 * @n:bytes used
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
