#include "main.h"


/**
 *
 *
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char*argv[])
{
	const char *elf_filename;
	int elf_fd;
	Elf64_Ehdr my_elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Error: Usage - elf_header elf_filename");
		exit(98);
	}
	
	elf_filename = argv[1];
	elf_fd = open(elf_filename, O_RDONLY);

	if (elf_fd == -1)
	{
		fprintf(stderr, "Error: Can't open %s\n", elf_filename);
		exit(98);
	}

	if(read(elf_fd, &my_elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Can't read %s\n", elf_filename);
		close(elf_fd);
		exit(98);
	}

	if (memcmp(my_elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "%s is not a ELF fil\ne", elf_filename);
		close(elf_fd);
		exit(98);
	}
	
	lseek(elf_fd, 0, SEEK_SET);
	printf("Success\n");
	close(elf_fd);

	return (0);
}
