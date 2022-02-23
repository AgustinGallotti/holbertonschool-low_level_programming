#include "main.h"

/**
*_sqrt_recursion - raiz cuadrada
* @n: variable
* Return: jeje
*/
int _con(int y, int n)
{
	if (y * y == n)
		return (y);
	else if (y * y > n)
		return (-1);
	else
		return (_con(n, y + 1));
}

int _sqrt_recursion(int n)
{
	return (_con(0, n));
}
