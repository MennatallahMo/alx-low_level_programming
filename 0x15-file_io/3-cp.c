#include "main.h"

#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close i %d\n"
#define USAGE "Usage: cp file_from file_to\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copying file program
 * @av: vector
 * @ac: count
 * Return: 1 success , 0 failure
 */
int main(int ac, char **av)
{
	char buffer[READ_BUFFER_SIZE];
	ssize_t byte;
	int from_i = 0, to_i = 0;

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_i = open(av[1], O_RDONLY);
	if (from_i == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_i = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_i == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((byte = read(from_i, buffer, READ_BUFFER_SIZE)) > 0)
		if (write(to_i, buffer, byte) != byte)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (byte == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_i = close(from_i);
	to_i = close(to_i);
	if (from_i)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_i), exit(100);
	if (to_i)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_i), exit(100);

	return (EXIT_SUCCESS);
}
