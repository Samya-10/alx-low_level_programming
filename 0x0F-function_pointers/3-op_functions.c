#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - The sum.
 * @a: The first parameter.
 * @b: The second parameter.
 *
 * Return: The result of operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The substraction.
 * @a: The first parameter.
 * @b: The second parameter.
 *
 * Return: The result of operation.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The multiplication.
 * @a: The first parameter.
 * @b: The second parameter.
 *
 * Return: The result of operation.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division.
 * @a: The first parameter.
 * @b: The second parameter.
 *
 * Return: The result of operation.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The modulo.
 * @a: The first parameter.
 * @b: The second parameter.
 *
 * Return: The result of operation.
 */

int op_sub(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
