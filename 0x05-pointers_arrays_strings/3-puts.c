#include "main.h"

/**
 * _puts - Function
 * @str: Parameter
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
