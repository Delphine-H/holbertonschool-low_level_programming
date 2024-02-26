#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 *
 */

void more_numbers(void)
{
	int i, j;
	int firstdigit;
	int lastdigit;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			lastdigit = i % 10;
			if (i > 9)
			{
				firstdigit = i / 10;
				_putchar('0' + firstdigit);
			}
			_putchar('0' + lastdigit);
		}
	_putchar('\n');
	}
}
