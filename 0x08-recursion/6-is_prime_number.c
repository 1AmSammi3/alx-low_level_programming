#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function to check if a number is prime or not
 * @n: parameter given
 * Return: 1 if true and 0 if false
 * @i: Second parameter
 */

int prime2(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, n - 1));
}

/**
 * prime2 - Real code block
 * @n: to work on
 * @i: Parameter 2
 * Return: 1 if n is prime, 0 if not
 */
int prime2(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (prime2(n, i - 1));
}
