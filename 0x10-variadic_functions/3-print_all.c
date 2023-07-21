#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any combination of c, i, f, and s format specifiers
 *
 * @format: a string of format specifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");

				printf("%s", s);
				break;
			default:
				break;
		}

		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(args);
}
