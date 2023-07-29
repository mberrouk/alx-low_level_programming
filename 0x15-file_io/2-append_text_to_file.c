#include "main.h"

/**
 * append_text_to_file - appends text a file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int r;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		r = write(fd, text_content, n);
		if (r == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
