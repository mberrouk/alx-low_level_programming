#include <unistd.h>

int main(void)
{
	char *n;
	int i;

	i = 0;
	n = __FILE__;
	if (!n)
		return (0);
	while (n[i])
	{
		write(STDOUT_FILENO, &n[i], 1);
		i++;
	}
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
