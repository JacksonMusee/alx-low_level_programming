#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - Get sum of two numbers
 *@a: Num 1
 *@b: Num 2
 *Return: Sum
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - Get difference between two numbers
 *@a: Num 1
 *@b: Num 2
 *Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 *op_mul - Multiply two nums
 *@a: Num 1
 *@b: Num 2
 *Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Divide two nums
 *@a: num 1
 *@b: num 2
 *Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Do modulo of two nums
 *@a: num 1
 *@b: num 2
 *Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
