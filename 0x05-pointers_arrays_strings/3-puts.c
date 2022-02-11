#include "main.h"

/**
* _puts - instrucciones
* @str: whilee
*/

void _puts(char *str)
{
	int i = 0;
	while (*(str + i) != 0);
	{
	_putchar(*(str + i));
	i++;
	}
	_putchar('\n');
}
