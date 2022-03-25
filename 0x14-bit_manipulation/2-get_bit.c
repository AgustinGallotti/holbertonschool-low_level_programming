#include "main.h"
#include <stdio.h>
/**
* get_bit - A function that returns the value of a bit at a given index
* @n: n
* @index: Index is the index, starting from 0 of the bit you want to get
* Return: The value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	r = (n >> index) & 1;

	if (index > 31)
		return (-1);
	if ((r == 1) || (r == 0))
		return (r);
	else
		return (-1);
}
