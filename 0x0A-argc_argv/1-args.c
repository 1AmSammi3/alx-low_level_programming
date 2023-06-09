#include <stdio.h>
#include "main.h"

/**
 * main - This is the code entry point
 * @argc: This gives the arguement count
 * @argv: This gives the arguement value
 * Return: code returns 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
