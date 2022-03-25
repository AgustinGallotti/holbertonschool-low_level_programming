#include "main.h"
/**
* binary_to_uint - binary convert
* @b: numbers
* Return: convert
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int f = 0;
	int a = 0;

	if (b == NULL)
		return (0);
	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		f <<= 1;
		f += b[a] - '0';
		a++;
	}
	return (f);
}
