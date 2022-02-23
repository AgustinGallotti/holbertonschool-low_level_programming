#include "main.h"

/**
* _print_rev_recursion
* @s: reverese 
*/
void _print_rev_recursion(char *s)
{
	char pos = '\0';

	if (*s == '\0')
	{
		(pos - 1);
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar*(s);
	}
}
