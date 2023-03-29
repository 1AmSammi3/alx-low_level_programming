#include "main.h"

/**
 * _strlen - Function
 * @s: Parameter
 * Return: String length
 */

int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
