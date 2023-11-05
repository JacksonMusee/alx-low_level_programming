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
	int ei_osabi = my_elf_header->e_ident[EI_OSABI];
	char *type_str;


	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", my_elf_header->e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}

	printf("\n  Class:                             ELF%d\n", (my_elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);
	printf("  Data:                              %s\n",(my_elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement big endian");
	printf("  Version:                           %d%s\n", my_elf_header->e_ident[EI_VERSION], my_elf_header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	check_os(ei_osabi);
	printf("  ABI Version:                       %d\n", my_elf_header->e_ident[EI_ABIVERSION]);
	
	switch (elf_type)
	{
		case ET_NONE:
			type_str = "ELF type is None";
			break;

		case ET_REL:
			type_str = "REL (Relocatable file type)";
			break;

		case 2:
			type_str = "EXEC (Executable file)";
			break;

		case ET_DYN:
			type_str = "DYN (Shared object file)";
			break;

		case ET_CORE:
			type_str = "CORE (Core file)";
			break;

		default:
			type_str = "Type unkown";
	}
	printf("  Type:                              %s\n", type_str);

	printf("  Entry point address:               %#lx\n", (my_elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? (uint32_t)my_elf_header->e_entry : my_elf_header->e_entry);
}
/**
 *
 *
 *
 *
 *
 *
 *
 */
void check_os(int ei_osabi)
{
	char *os_str;

	switch (ei_osabi)
	{
		case ELFOSABI_NONE:
			os_str = "UNIX - System V";
			break;

		case ELFOSABI_HPUX:
			os_str = "UNIX - HP-UX";
			break;

		case ELFOSABI_NETBSD:
			os_str = "UNIX - NetBSD";
			break;

		case ELFOSABI_LINUX:
			os_str = "UNIX - LINUX";
			break;

		case ELFOSABI_SOLARIS:
			os_str = "UNIX - Solaris";
			break;

		case ELFOSABI_AIX:
			os_str = "UNIX - AIX";
			break;

		case ELFOSABI_IRIX:
			os_str = "UNIX - IRIX";
			break;

		default:
			os_str = "";

	}
	printf("  OS/ABI:                            %s\n", os_str);
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
