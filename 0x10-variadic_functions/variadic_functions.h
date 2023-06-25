#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct s_form - Structure representing a format
 * specifier and its corresponding function
 * @form: The format specifier character
 * @func: Pointer to the function associated with the format specifier
 */
typedef struct s_form
{
	char form;
	void (*func)(va_list va);
}	t_form;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
