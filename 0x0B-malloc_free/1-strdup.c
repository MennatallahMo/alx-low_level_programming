#include "main.h"

/**
 * _strdup -  a function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str:a string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
			p[s] = str[s];
	return (p);
}
