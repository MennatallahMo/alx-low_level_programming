#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: string para prints
 * Return: null
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
