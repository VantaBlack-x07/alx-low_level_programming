#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: the operation char
 *
 * Return: int function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0

	while (ops[x].op != NULL)
	{
		if (strcmp(ops[x].op, s) == 0)
			return ((ops[x].f));
		x++;
	}
	return (NULL);
}
