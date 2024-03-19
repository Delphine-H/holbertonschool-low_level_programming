#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * @s: char of the operator
 * Return: pointer to the function to use
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}