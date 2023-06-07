#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - A fumction that returns the power of a number
 * Return: Returns the result
 * @x: parameter to raise to power
 * @y: parameter to be raised as power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
