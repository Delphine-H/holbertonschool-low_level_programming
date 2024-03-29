#include "main.h"


/**
 *  *cap_string - function that capitalizes all words of a string.
 *@text: text to capitalize	:x
 *
 * Return: pointeur vers string
 */

char *cap_string(char *text)
{
	char *pointer = text;

	if (text[0] >= 'a' && text[0] <= 'z')
	{
		*text = *text - ('a' - 'A');
		text++;
	}

	while (*text != '\0')
	{
		if (*text == ' ' || *text == '\t' || *text == '\n' ||
		*text == ',' || *text == ';' || *text == '.' ||
		*text == '!' || *text == '?' || *text == '"' ||
		*text == '(' || *text == ')' || *text == '{' || *text == '}')
		{
			text++;
			if (*text >= 'a' && *text <= 'z')
			{
				*text = *text - ('a' - 'A');
			}
		}
		else
		{
			text++;
		}
	}
	return (pointer);
}

