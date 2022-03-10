#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - adding
 *@a: a
 *@b: b
 *Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substract
 *@a: a
 *@b: b
 *Return: subs
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplicate
 *@a: a
 *@b: b
 *Return: mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide
 *@a: a
 *@b: b
 *Return: div
 */
int op_div(int a, int b)
{
	if (b == '0')
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulo
 *@a: a
 *@b: b
 *Return: mod
 */
int op_mod(int a, int b)
{
	if (b == '0')
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
