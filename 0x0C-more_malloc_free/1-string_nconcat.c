#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: Parameter one
 * @s2: Parameter two
 * @n: number of bytes to be allocated on the heap
 * Return: Poinyer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	k = i + n;

	ptr = malloc(k + 1);

	if (ptr == NULL)
		return (NULL);
	for (l = 0; l < k; l++)
		if (l < i)
			ptr[l] = s1[l];
		else
			ptr[l] = s2[l - i];
	ptr[i] = '\0';
	return (ptr);
}
