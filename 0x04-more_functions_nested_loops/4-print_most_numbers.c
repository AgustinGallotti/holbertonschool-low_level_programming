#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - a function to print most numbers
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch != 50 && ch != 52)
		_putchar(ch);
	}
	_putchar('\n');
}
