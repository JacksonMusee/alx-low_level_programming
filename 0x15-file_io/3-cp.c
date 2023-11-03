#include "main.h"

/**
 *copy_from_to - Copy from a a fle to another
 *
 *@file_from: file to copy from
 *@file_to: File to copy to
 *
 *Return: 0 on success
 *
 */

int copy_from_to(char *file_from, char *file_to)
{
	int fd_from;
	int fd_to;
	char *buf;

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	buf = malloc(1024);

	if (buf == NULL)
		exit(98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	helper(file_from, file_to, fd_from, fd_to, buf);

	return (0);
}

/**
 *helper - Helping function for copy_from_to
 *
 *@file_from: File to copy from
 *@file_to: File to copy from
 *@fd_from: file descriptor from
 *@fd_to: file descriptor to
 *@buf: Pointer to the buffer
 *
 */

void helper(char *file_from, char *file_to, int fd_from, int fd_to, char *buf)
{

	int bytes_written, close_fd_from, close_fd_to, bytes_read;

	bytes_read = 1024;

	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buf, 1024);

		if (bytes_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		bytes_written = write(fd_to, buf, bytes_read);

		if (bytes_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
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

}
/**
 *main - Entry point
 *
 *@argc: Argument point
 *@argv: Array of parameter
 *
 *Return: 0 on success
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
