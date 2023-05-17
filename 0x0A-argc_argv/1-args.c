#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: no of commandlines
 * @argv: pointer ta an array
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
