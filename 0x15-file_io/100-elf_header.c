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
void print_elf(Elf64_Ehdr *my_elf_header)
{
	int i;
	int elf_type = my_elf_header->e_type;


	printf("ELF Header:\n");
	printf("Magic:	");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", my_elf_header->e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}

	printf("\nClass:	ELF%d\n", (my_elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);
	printf("Data:	%s\n",(my_elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement big endian");
	printf("Version:	%d (current)\n", my_elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:	%s\n", (my_elf_header->e_ident[EI_OSABI] == ELFOSABI_NONE) ? "UNIX - System V" : "EI_OSABI I=is not zero");
	printf("ABI Version:	%d\n", my_elf_header->e_ident[EI_ABIVERSION]);
	
	switch (elf_type)
	{
		case ET_NONE:
			printf("Type:	ELF type is None\n");
			break;

		case ET_REL:
			printf("Type:	REL (Relocatable file type)\n");
			break;

		case ET_EXEC:
			printf("Type:	EXEC (Executable file)\n");
			break;

		case ET_DYN:
			printf("Type:	DYN (Shared object file)\n");
			break;

		case ET_CORE:
			printf("Type:	CORE (Core file)\n");
			break;

		default:
			printf("Type:	Type unkown\n");
	}

	printf("Entry point address:	0x%x\n", my_elf_header->e_type);
}

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
	print_elf(&my_elf_header);
	close(elf_fd);

	return (0);
}
