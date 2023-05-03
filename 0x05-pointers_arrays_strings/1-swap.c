#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a : input para 1
 * @b : input para 2
 *
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
