#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
*
* @separator: string to be printed between numbers
* @n: num of args
*
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list args;
	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
