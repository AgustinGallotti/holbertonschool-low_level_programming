#include <stdio.h>
#include "main.h"

/**
* print_square - as
* @size: sd
*
* Return: msdks
*/
void print_square(int size)
{
	int x, s;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (s = 1; s <= size; s++)
		{
			for (x = 1; x < size; x++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
