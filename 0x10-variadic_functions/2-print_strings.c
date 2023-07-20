#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - function that prints strings, followed by a new line.
*
* @separator: string to be printed between numbers
* @n: num of strings
*
* Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x;

	va_list args;
	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		if (va_arg(args, char) == NULL)
		{
			prinf("(nil)");
		}
		else
		{
			prinf("%s", va_arg(args, char));
		}

		if (separator != NULL && i < n - 1)
		{
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
