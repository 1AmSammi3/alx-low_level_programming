#include <stdio.h>
#include "main.h"

/**
 * factorial - This code gets the factorial of a number
 * @n: Number given
 * Return: The code result as an integer
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	return (-1);
}
