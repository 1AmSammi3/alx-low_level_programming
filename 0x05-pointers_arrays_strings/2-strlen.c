#include "main.h"

/**
 * _strlen - Function
 * @s: Parameter
 * Return: String length
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
