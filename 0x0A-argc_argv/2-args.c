#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of code
 * @argc: Displays the aegument count
 * @argv: Displays an array of the argument in string format
 * Return: Code returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
