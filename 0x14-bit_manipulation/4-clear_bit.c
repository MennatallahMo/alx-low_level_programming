#include "main.h"

/**
 * clear_bit - a function that sets the value
 * of a bit to 0 at a given index.
 * @n: index no
 * @index: bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
	if (index >= sizeof(n) * 8)
		return (-1);
}
