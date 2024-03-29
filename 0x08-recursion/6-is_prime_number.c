/**
 * is_prime_helper - tests if a number is prime
 *
 * @n: the number to test
 * @i: the divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
 * is_prime_number - tests if a number is prime or not
 * @n: the num
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
