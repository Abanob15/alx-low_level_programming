#include "3-calc.h"

/**
 * op_add - returns sum of two numbers
 *
 * @a: 1st int parameter
 * @b: 2nd int parameter
 *
 * Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of two numbers
 *
 * @a: int parameter
 * @b: int parameter
 *
 * Return: the diffrance 
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers
 *
 * @a: 1st int parameter
 * @b: 2nd int parameter
 *
 * Return: (@a * @b)
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns quotient of two numbers
 *
 * @a: 1st int parameter
 * @b: 2nd int parameter
 *
 * Return: (@a / @b)
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder from division of two numbers
 *
 * @a: 1st int parameter
 * @b: 2nd int parameter
 *
 * Return: (@a % @b)
*/

int op_mod(int a, int b)
{
	return (a % b);
}
