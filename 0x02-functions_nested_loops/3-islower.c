#include "main.h"

/**
* _islower - function to check if
* character is lowwercase
*
* @c: check input of function
*
* Return: return 1 if 'c' is lowwercase
*	otherwise Always 0 (success)
*/

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	return (0);
}
