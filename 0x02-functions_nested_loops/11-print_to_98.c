#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function
 * Return: void
 * @n: Parameter
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (n != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (n != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
}
