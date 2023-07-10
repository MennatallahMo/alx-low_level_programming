#include "main.h"
#include <elf.h>



void print_osabi_mr(Elf64_Ehdr header);

/**
 * print_magic - prints magic
 * @header: header structure
 */
void print_magic(Elf64_Ehdr header)


/**
 * print_class - prints class
 * @header: header structure
 */
void print_class(Elf64_Ehdr header)
{
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
			case ELFCLASS32:
			printf("ELF32");
			break;
			case ELFCLASENONE;
			printf("none");
			break;
	}
	printf("\n");

/**
 * main - a program that displays the information
 * contained in the ELF header at the start of an ELF file.
 * @ac: count
 * @av: vector
 *
 * Return: 1 success , 0 failure
 */

int main(int ac, char **av)
{
	int file;
	Elf64_Ehdr header;
	ssize_t byte;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	file = open(av[1] , O_RDONLY);

	if (file == -1)
		dprintf(STDERR_FILENO, "Couldn't open the file: %s\n" , av[1]), exit(98);
	byte = read(file, &header, sizeof(header));

	if (byte < 1 || byte != sizeof(h))
		dprintf(STDERR_FILENO, "Couldn't read from the file: %s\n", av[1]), exit(98);

	if (header. e_ident[0] == 0x7f && header.e_ident[1] == 'E' && header.e_ident[2] == 'L' && header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "This is not an ELF file: %s\n", av[1]), exit(98);
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abiversion(header);
	print_type(header);
	print_entry(header);

	if (close(file))
		dprintf(STDERR_FILENO, "Closing Error: %d\n", file), exit(98);
	return (EXIT_SUCCESS);
}

