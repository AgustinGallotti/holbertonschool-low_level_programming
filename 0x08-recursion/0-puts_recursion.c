#include "main.h"

/**
* puts_recursion - recursion
* @s: puntero
* @a: variable
* Return: a
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar ('\n')
		return;
	}
	else
		_putchar(*s)
		_puts_recursion(*s + 1)
