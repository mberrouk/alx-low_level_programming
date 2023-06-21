#include "3-calc.h"

/**
 * get_op_func - Returns a pointer to the appropriate arithmetic
 * operation function based on the given operator.
 *
 * @s: The operator as a string.
 *
 * Return: A pointer to the corresponding arithmetic operation
 * function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}
	return (0);
}
