#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array c
 * @size: the size of the array
 * @c: parameter to stor an array
 * Return: the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
