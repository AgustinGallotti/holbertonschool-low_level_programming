#include "main.h"
#include <ctype.h>

/**
* _isalpha - check if its uppercase or not
* @c: fe
* Return: 1 if its upercase, 0 if otherwise
*/
int print_sign(int n)
{
if ( 'n' > 48)
{
_putchar ('+');
return (1); 
}
else if ( n = 0)
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
