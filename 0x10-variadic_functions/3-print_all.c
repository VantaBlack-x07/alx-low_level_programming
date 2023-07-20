#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: a string of format
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	float f;
	char *s, c;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
				{
					printf("%s", s);
				}
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'f'
		  || format[i] == 'c' || format[i] == 's' || format[i] == 'i'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
