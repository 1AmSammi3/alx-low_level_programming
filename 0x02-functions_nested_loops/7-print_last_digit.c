#include "main.h"

/**
 * print_last_digit - Funcruon
 * @i: parameter
 * Return: retyrns i
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -(k);
	return (k);
}