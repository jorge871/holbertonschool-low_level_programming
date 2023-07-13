#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - This is for sum the variables a and b.
 * @a: The first variable.
 * @b: The second variable.
 *
 * Return: Return the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This is the difference of a and b.
 * @a: The first variable.
 * @b: The second variable.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of variable a and b.
 * @a: The first variable.
 * @b: The second variable.
 *
 * Return: The product of this variables.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Result of the division of a by b.
 * @a: ...
 * @b: ...
 *
 * Return: Return the result of division of the variables.
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
 * op_mod - Return module of these variables.
 * @a: ...
 * @b: ...
 *
 * Return: Return the result of the module.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
