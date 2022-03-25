#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - A function that converts a binary number to an unsigned int
* @b: Is pointing to a string of 0 and 1 chars
* Return: The converted number, or 0 if: there is one or more chars in the
* string b that is not 0 or 1 b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int a = 0;

	if (b == NULL)
		return (0);
	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		r <<= 1;
		r += b[a] - '0';
		a++;
	}
	return (r);
}
