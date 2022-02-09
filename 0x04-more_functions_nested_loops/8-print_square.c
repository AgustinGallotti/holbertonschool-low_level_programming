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

for (s = 0; s < size; s++)
{
	for (x = 0; x < size; x++)
	{	
		_putchar('*');
	}
}
if (size >= 0)
_putchar('\n');
}
