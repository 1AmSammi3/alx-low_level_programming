#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function
 * @nmemb: Parameters that indicate number of members
 * @size: This indicates the size of data type
 * Return: pointer in the code
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
