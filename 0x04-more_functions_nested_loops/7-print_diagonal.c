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
	int space, dis;

	if (n >= 0)
	{
		for (space = 0; space < dis; space++)
		{
			for (dis = 0; dis < space; dis++)
				_putchar(' ');
			_putchar('\\');
			if (space == n - 1)

				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
