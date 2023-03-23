#include "main.h"

/**
 * print_diagonal - Function
 * @n: Parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j, i;

		for (j = 1; j <= n; j++)
		{
			for (i = 0; i < n; i++)
			{
				if (i == j)
					_putchar('\\');
				else if (i < j)
					_putchar(' ');
			_putchar('\n');
			}
		}
	}
}
