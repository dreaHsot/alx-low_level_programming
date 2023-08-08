#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	wrt = write(fd, text_content, n);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
