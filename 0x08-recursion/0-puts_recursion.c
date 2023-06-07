#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - This is a function
 * Return: Code returns void
 * @s: This is a parameter to call the function on
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
