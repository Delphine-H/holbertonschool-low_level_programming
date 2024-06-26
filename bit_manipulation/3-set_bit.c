#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given
 * index
 * @n: unsigned long int number
 * @index: index
 * Return: 1 if it worked or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;

	*n = *n | mask;

	return (1);
}
