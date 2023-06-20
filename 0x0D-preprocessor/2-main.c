#include <unistd.h>

int main(void)
{
	char *n;

	n = __FILE__;
	while (*n)
	{
		write(STDOUT_FILENO, n, 1);
		n++;
	}
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
