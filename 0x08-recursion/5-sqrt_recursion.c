#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - This is a function that gets the square root of a number
 * @n: The number to work on
 * Return: The square root of the number
 * @i: Extra parameter
 */

int recursion2(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursion2(n, 0));
}

/**
 * recursion2 - This is the real square root code
 * @n: This number we are finding the square root
 * @i: Parameter
 * Return: The final answer
 */

int recursion2(int n, int i)
{
	if (n < (i * i))
		return (-1);
	else if (n == (i * i))
		return (i);
	return (recursion2(n, i + 1));
}
