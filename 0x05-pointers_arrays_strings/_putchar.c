#include <unistd.h>

/**
 * _putchar - writws the char c to stdout.
 * @c : the character to be printed .
 * Return: 0 (success)
 * if error : -1 is returned .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
