#include "main.h"
/**
* _c - a function that returns the natural square root of a number
* @n: variable
* @x: variable1
* Return: natual square
*/
int _c(int n, int x)
{
if (x * x == n)
return (x);

if (x * x > n)
return (-1);

return (_c(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root
 *@n: variable
 * Return: natural square
 */

int _sqrt_recursion(int n)
{

return (_c(n, 0));
}
