#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned integer
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return ((void *)ptr);
	}

	exit(98);
}
