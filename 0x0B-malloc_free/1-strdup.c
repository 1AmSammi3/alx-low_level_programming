#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to array
 * @str: parameter to store an array
 * Return: pointer to char
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *str2;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	str2 = (char *)malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		str2[j] = str[j];
	return (str2);
}
