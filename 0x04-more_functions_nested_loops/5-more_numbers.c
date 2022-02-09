#include <stdio.h>
#include "main.h"

/**
* more_numbers - a function to more numbers
* Return: 1 to 14 numbers (Success)
*/
void more_numbers(void)
{
	int num, count;
for (count = 1; count <= 10; count++)
{
	for (num = 0; num <= 14; num++)
	{
	if (num > 9)
	{
		_putchar((num / 9) + '0');
		_putchar((num / 9) + '0');
	}
	}
}
_putchar('\n');
}
