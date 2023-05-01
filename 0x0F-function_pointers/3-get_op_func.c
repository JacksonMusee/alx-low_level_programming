#include <stdio.h>
#include "3-calc.h"
#include "string.h"

/**
 *get_op_func - Obtain the right function for the operation
 *@s: The operator passed
 *
 *Return: A pointer to the functon
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL }
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
