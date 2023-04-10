#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: Counts the argument
 * @argv: Prints argument as an array of string
 * Return: Code returns 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
