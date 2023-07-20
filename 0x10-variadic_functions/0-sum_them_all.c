#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
*
* @n: num of args
*
* Return: sum of args
*/

int sum_them_all(const unsigned int n, ...)
{
	int x, sum = 0;

	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (x = 0; x < n; x++)
			sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
