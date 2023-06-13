#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This is a function that conctenates two strings
 * @s1: string two
 * @s2: string one
 * Return: A pointer to the concatened string
 */
char *str_concat(char *s1, char *s2)
{
	char *str2;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str2 = malloc(sizeof(char) * (i + j + 1));

	if (str2 == NULL)
	{
		free(str2);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str2[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		str2[k] = s2[j];

	return (str2);
}
