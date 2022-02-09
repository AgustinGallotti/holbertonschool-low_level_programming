#include <stdio.h>
#include "main.h"

/**
* print_line - as
* @n: sd
*
* Return: msdks
*/
void print_line(int n)
{
	int count;

	if (n >= 1)
	{
		for (count = 0; count < n; count++)
			_putchar('_');
	}

		_putchar('\n');
}
