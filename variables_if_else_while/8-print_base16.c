#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints
 * all digit numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	for (i = 97 ; i <= 102 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
