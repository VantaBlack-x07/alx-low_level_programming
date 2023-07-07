#include "main.h"

/**
* sqrt_helper - find the square root of a numer by binary search
*
* @n: the num
* @low: lowest range
* @high: highest range
*
* Return: the root num
*/

int sqrt_helper(int n, int low, int high)
{
	if (low > high)
	{
		return (-1);
	}
	else
	{
		int mid = (low + high) / 2;
		int sqr = mid * mid;

		if (sqr == n)
		{
			return (mid);
		}
		else if (sqr < n)
		{
			return (sqrt_helper(n, mid + 1, high));
		}
		else if (sqr > n && (mid - 1) * (mid - 1) < n)
		{
			return (mid - 1);
		}
		else
		{
			return (sqrt_helper(n, low, mid - 1));
		}
	}
}
/**
* _sqrt_recursion - function that returns
* the natural square root of a number.
*
* @n: the num
*
* Return: the root num
*
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0, n));
	}
}
