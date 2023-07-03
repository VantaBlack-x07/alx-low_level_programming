#include "main.h"

/**
* reverse_array - function that reverses
* the content of an array of integers.
*
* @a: the string array
* @n: the num of elements
*/

void reverse_array(int *a, int n)
{
int x;
int len = strlen(a);

for (x = len - 1; x >= 0 && x < n; x--)
{
	_putchar(a[x]);
}
_putchar('\n');
}
