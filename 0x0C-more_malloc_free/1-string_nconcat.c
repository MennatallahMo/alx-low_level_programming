#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string pointer
 * @s2: Second string pointer
 * @n: no of bytes
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)

		string = malloc(s1_length + n + 1);
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		string[i] = s2[j];
		i++;
	}

	string[i] = '\0';
	return (string);
}
