#include "main.h"
#include <stdio.h>

/**
 * _error - checks files
 * @from: file from
 * @to: file to
 * @argv: arguments
 */
void _error(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, err;
	ssize_t n, r;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp from to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_error(from, to, argv);
	n = 1024;
	while (n == 1024)
	{
		n = read(from, buf, 1024);
		if (n == -1)
			_error(-1, 0, argv);
		r = write(to, buf, n);
		if (r == -1)
			_error(0, -1, argv);
	}
	err = close(from);
	if(err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	err = close(to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
