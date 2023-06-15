#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory.
 * @ptr: pointer to the memory
 * @old_size: parameter for the old allocated space
 * @new_size: parameter for the new allocated space
 * Return: pointer ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
