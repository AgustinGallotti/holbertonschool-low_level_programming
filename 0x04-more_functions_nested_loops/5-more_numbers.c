#include <stdio.h>
#include "main.h"

/**
* more_numbers - a function to more numbers
* Return: 1 to 14 numbers
*/
void more_numbers(void)
{
int ch, count;
for (count = 1; count <= 10; count++)
{
for (ch = 0; ch <= 14; ch++)
{
if (ch > 9)
_putchar((ch / 9) + '0');
_putchar((ch / 9) + '0');
}
{
_putchar('\n');
}
}
}
