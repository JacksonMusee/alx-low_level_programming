#include "main.h"

/**
 *
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
		char *buf;
		ssize_t written;

		fd = open(filename, O_RDONLY);

		if (fd < 0)
			return (0);

		buf = malloc(letters);
		if (buf == NULL)
		{
			close(fd);
			return (0);
		}

		read(fd, buf, letters);
		written = write(STDOUT_FILENO, buf, letters);

		if (written == -1)
		{
			close(fd);
			return (0);
		}

		close(fd);

		return (written);
}
