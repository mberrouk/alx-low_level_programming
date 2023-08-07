#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: filename
 * @text_content: content
 *
 * Return: 1 if the file exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int r;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		r = write(fd, text_content, i);
		if (r == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
