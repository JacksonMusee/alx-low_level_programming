#include "main.h"

/**
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
	int elf_class = my_elf_header->e_ident[EI_CLASS];
	int data = my_elf_header->e_ident[EI_DATA];
	int elf_version = my_elf_header->e_ident[EI_VERSION];
	int abi_version = my_elf_header->e_ident[EI_ABIVERSION];
	uint64_t add = my_elf_header->e_entry;
	uint32_t add32;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", my_elf_header->e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}

	print_class(elf_class);
	print_data(data);
	print_version(elf_version);
	check_os(ei_osabi);
	printf("  ABI Version:                       %d\n", abi_version);
	print_type(elf_type);

	if (elf_class == ELFCLASS32 && data == ELFDATA2MSB)
	{
		add32 = swapEndian((uint32_t)my_elf_header->e_entry);

		printf("  Entry point address:               %#x\n", add32);
	}
        else
	{
		if (elf_class == ELFCLASS32)
		{
		printf("  Entry point address:               %#x\n", (uint32_t)add);
		}
		else
		{
		printf("  Entry point address:               %#lx\n", add);
		}
	}
}
/*
 *
 *
 *
 */
void print_version(int elf_version)
{
	if (elf_version == EV_CURRENT)
	{
		printf("  Version:                           %d (current)\n", elf_version);
	}
	else
	{
		printf("  Version:                           %d\n", elf_version);
	}
}
/**
 *
 *
 *
 */
void print_data(int data)
{
	char *d_str;

	if (data == ELFDATA2LSB)
		d_str = "2's complement, little endian";

	if (data == ELFDATA2MSB)
		d_str = "2's complement, big endian";

	printf("  Data:                              %s\n", d_str);
}
/**
 *
 *
 *
 *
 */
void print_class(int elf_class)
{
	if (elf_class == ELFCLASS64)
	{
		printf("\n  Class:                             ELF%d\n", 64);
	}
	else if (elf_class == ELFCLASS32)
	{
		printf("\n  Class:                             ELF%d\n", 32);
	}
	else
	{
		printf("\n  Class:                             ELF%d\n", elf_class);
	}
}
/**
 *
 *
 *
 *
 */
void print_type(int elf_type)
{
	char *type_str;

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
			type_str = "EXEC (Executable file)";
	}
	printf("  Type:                              %s\n", type_str);
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
 *
 */
uint32_t swapEndian(uint32_t value) {
    return ((value >> 24) & 0x000000FF) |
           ((value >> 8) & 0x0000FF00) |
           ((value << 8) & 0x00FF0000) |
           ((value << 24) & 0xFF000000);
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
