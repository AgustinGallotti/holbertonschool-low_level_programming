#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sumamos con valist
* @n: nuestros argumentos
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list leer;
	int sum = 0;
	unsigned int m = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(leer, n);
	for (m = 0; m < n; m++)
	{
		sum += va_arg(leer, int);
	}
	va_end(leer);
return (sum);
}
