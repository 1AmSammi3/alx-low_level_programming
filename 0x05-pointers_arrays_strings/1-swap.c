#include "main.h"

/**
 * swap_int - Function
 * Return: void
 * @a: Parameter 1
 * @b: Parameter 2
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
