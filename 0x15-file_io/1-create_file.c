#include "main.h"

/**
 *create_file - Create a file
 *
 *@filename: Name of the file
 *@text_content: Conrnt to write in the file
 *
 *Return: 1 on succes and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);
}
