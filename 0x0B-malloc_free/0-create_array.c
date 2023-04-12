#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function
 * @c: Parameter
 * @size: Parameter
 * Return: code returns pointer
 * Description: Function creates an array of any size and assign c to it
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
