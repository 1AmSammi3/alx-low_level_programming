#include <stdio.h>
#include "main.h"
#include <stdlib.h>
 
/**
 * main - Code entry point
 * @argc: Gives Arguement number
 * @argv: Gives arguement Value
 * Return: Code returns 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
