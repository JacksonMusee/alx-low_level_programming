#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int copy_from_to(char *file_from, char *file_to)
{
	int fd_from;
	int fd_to;
	char *buf;
	size_t bytes_read;
	int close_fd_from;
	int close_fd_to;

	fd_from = open(file_from, O_RDONLY);

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	buf = malloc(1024);

	if (buf == NULL)
		exit(98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	bytes_read = 1024;

	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buf, 1024);
		write(fd_to, buf, bytes_read);
		free(buf);
	}

	close_fd_from = close(fd_from);
	if (close_fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_fd_to = close(fd_to);
	if (close_fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

/**
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_from_to(argv[1], argv[2]);

	return (0);
}
