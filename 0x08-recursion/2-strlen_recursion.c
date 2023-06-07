#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - This is the function name
 * @s: parameter to use
 * Return: returns the string length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}
	return (n);
}
