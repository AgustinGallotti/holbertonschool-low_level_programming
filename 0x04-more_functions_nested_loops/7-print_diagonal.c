#include <stdio.h>
#include "main.h"

/**
* print_diagonal - as
* @n: sd
*
* Return: msdks
*/
void print_diagonal(int n)
{
	int x, s;

	if (n >= 0)
	{
		for (x = 0; x < n; x++)
		{
			for (s = 0; s < x; s++)
				_putchar(' ');
			_putchar('\\');
			if (x == n - 1)

				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
