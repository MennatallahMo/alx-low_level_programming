#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to find
 * @needle: the substring .
 * Return:a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *p = needle;

		while (*h == *p && *p != '\0')
		{
			h++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
