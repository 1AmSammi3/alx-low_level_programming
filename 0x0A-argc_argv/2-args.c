#include <stdio.h>
#include "main.h"

/**
 * main - Code main function
 * @argc: prints arguement count
 * @argv: prints arguement value
 * Return: Code rerirns 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
