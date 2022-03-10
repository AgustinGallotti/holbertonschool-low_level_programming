#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - numbers n
* @separator: comas y espacios
* @n: numero de argumentos
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	
	va_list sep;
	unsigned int x = 0;
	int res = 0;

	if (!n)
		printf("nil");
	va_start(sep, n);
	for (x = 0; x < n;)
	{
		res = va_arg(sep, int);
			printf("%d", res);
		x++;
		if (separator != NULL && x < n)
			printf("%s", separator);
	}
printf("\n");
}
