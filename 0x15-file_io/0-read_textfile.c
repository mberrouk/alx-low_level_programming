#include "main.h"

/**
 * read_textfile - read
 * @filename: file name
 * @letters: letters printed
 *
 * Return: numbers printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd;
	ssize_t result;
	char *str;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * (letters));
	if (!str)
		return (0);
	rd = read(fd, str, letters);
	result = write(STDOUT_FILENO, str, rd);
	free(str);
	close(fd);
	return (result);
}
