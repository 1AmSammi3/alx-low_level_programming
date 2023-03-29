#include "main.h"

/**
 * _strncpy - Function
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Ans
 */

int char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
