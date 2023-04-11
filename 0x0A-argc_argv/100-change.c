#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -Code entry point
 * @argc: Displays argument count
 * @argv: Displays argument as an array of string
 * Return: code returns 0 if true
 */

int main(int argc, char *argv[])
{
	int num;
	int j;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 10)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
