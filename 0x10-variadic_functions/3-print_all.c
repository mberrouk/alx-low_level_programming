#include "variadic_functions.h"

/**
 * ft_putchar - Prints a character
 * @va: The va_list containing the character to be printed
 *
 * Return: void
 */
void ft_putchar(va_list va)
{
	printf("%c", (char)va_arg(va, int));
}

/**
 * ft_putstr - Prints a string
 * @va: The va_list containing the string to be printed
 *
 * Return: void
 */
void ft_putstr(va_list va)
{
	char *str;

	str = va_arg(va, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * ft_putint - Prints an integer
 * @va: The va_list containing the integer to be printed
 *
 * Return: void
 */
void ft_putint(va_list va)
{
	printf("%i", va_arg(va, int));
}

/**
 * ft_putfloat - Prints a float
 * @va: The va_list containing the float to be printed
 *
 * Return: void
 */
void ft_putfloat(va_list va)
{
	printf("%f", va_arg(va, double));
}

/**
 * print_all - Prints a variable number of arguments based on the format string
 * @format: The format string specifying the types of the arguments
 * @...: Variable arguments to be printed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list va;
	t_form chois[] = {
		{'c', ft_putchar},
		{'s', ft_putstr},
		{'i', ft_putint},
		{'f', ft_putfloat}
	};
	char *sep = "";

	i = 0;
	va_start(va, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == chois[j].form)
			{
				printf("%s", sep);
				chois[j].func(va);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(va);
	printf("\n");
}
