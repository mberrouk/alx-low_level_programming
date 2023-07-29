#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text
 *
 * Return: 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int r;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (l = 0; text_content[l]; l++)
		;
	r = write(fd, text_content, l);
	if (r == -1)
		return (-1);
	close(fd);
	return (1);
}
