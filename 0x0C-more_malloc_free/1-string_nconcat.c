#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string pointer
 * @s2: Second string pointer
 * @n: no of bytes
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, s1_length = 0, s2_length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[s1_length])
		s1_length++;

	if (n >= s1_length)
		s2_length = i + s1_length;
	else
		s2_length = i + n;

	str = malloc(sizeof(char) * s2_length + 1);
	if (str == NULL)
		return (NULL);

	s1_length = 0;
	while (j < s2_length)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[s1_length];
			s1_length++;
		}
		s2_length++;
	}
	str[s2_length] = '\0';
	return (str);
}
