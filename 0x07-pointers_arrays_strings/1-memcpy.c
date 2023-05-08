#include "main.h"
#include <stdio.h>
/**
 * *_memcpy -  a function that copies memory area.
 * @dest: area of memory
 * @src: the source
 * @n: src length we want to copy
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
