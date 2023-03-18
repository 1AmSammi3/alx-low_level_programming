#include <stdio.h>

/**
 * main - Code entry point
 *
 * Return: code returns as 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int m = i + j;
	int n = k + l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
				if (m != n)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
						if (m + n != 35)
						{
						putchar(',');
						putchar(' ');
						}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

