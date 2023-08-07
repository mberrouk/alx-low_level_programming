#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: letters
 *
 * Return: numbers of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nchar, nb;
	int fd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nchar = read(fd, buf, letters);
	nb = write(STDOUT_FILENO, buf, nchar);
	close(fd);
	free(buf);
	return (nb);
}
