#include "main.h"
#include <stdio.h>

/**
 * _putchar - Function
 * @: The parameter
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}