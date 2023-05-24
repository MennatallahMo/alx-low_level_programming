#include "3-calc.h"

/**
 * op_add - adds 2 integers
 * @a: first no
 * @b: second no
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 integers
 * @a: first no
 * @b: second no
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: 1st no
 * @b: 2nd no
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: 1st no
 * @b: 2nd no
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of 2 integers
 * @a: 1st no
 * @b: 2nd no
 * Return:the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
