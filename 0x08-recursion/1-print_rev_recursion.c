#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in the reverse order
 * @s: This is the parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
