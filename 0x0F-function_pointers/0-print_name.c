#include "function_pointers.h"

/**
* print_name - function that prints a name.
*
* @name: name to be printed
* @f: pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
