#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content
 *
 * Return: 1 if it success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int r;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "\0";
	for (i = 0; text_content[i]; i++)
		;
	r = write(fd, text_content, i);
	if (r == -1)
		return (-1);
	close(fd);
	return (1);
}
