#include <stdio.h>
#include "main.h"

/**
 * main - This is the code main function
 * @argc: check arguement count
 * @argv: checks arguement vector
 * Return: code returns 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
