#include "main.h"
#include <ctype.h>

/**
* print_sign - check if its uppercase or not
* @n: fe
* Return: 1 if its +, 1 if its -, 0 if otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
