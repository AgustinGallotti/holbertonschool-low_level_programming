#include "main.h"
/**
* cn - count
* @a: variable
* Return: count
*/
int cn(unsigned long int a)
{
	unsigned long int count = 0;

	while (a != 0)
	{
		count++;
		a &= (a - 1);
	}

	return (count);
}
/**
* flip_bits - a function that returns the number of bits you would need to
* flip to get from one number to another
* @n: n
* @m: m
* Return:  the number of bits you would need to flip to get from one number to
* another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (cn(n ^ m));
}
