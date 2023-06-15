#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This is a function thay returns a pointer
 * @b: Parameter for the malloc function
 * Return: code returns void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
