#include "main.h"

/**
 *read_textfile - Read from a file and print out
 *
 *@filename: the file to read from
 *@letters: number characters to print
 *
 * Return: Number of bytes written or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
		char *buf;
		ssize_t written;
		ssize_t read_b;

		fd = open(filename, O_RDONLY);

		if (fd < 0)
			return (0);

		buf = malloc(letters);
		if (buf == NULL)
		{
			close(fd);
			return (0);
		}

		read_b = read(fd, buf, letters);
		written = write(STDOUT_FILENO, buf, read_b);

		if (written == -1)
		{
			close(fd);
			return (0);
		}

		close(fd);
		free(buf);

		return (written);
}
