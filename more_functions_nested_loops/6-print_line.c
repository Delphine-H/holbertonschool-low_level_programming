#include "main.h"

/**
 * print_line - function that draws a straignt line in the therminal
 * followed by a new line.
 *@n: number of '_'
 *
 */

void print_line(int n)
{
	int i;

		for (i = 0; i <= n; i++)
		{
			if (i > 0)
			{
			_putchar('_');
			}
		}
	_putchar('\n');
}
