#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: the character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
