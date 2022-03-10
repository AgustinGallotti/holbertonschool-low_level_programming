#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - strings n
* @separator: comas y espacios
* @n: numero de argumentos
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list sep;
unsigned int x = 0;
char *res;

	va_start(sep, n);
	for (x = 0; x < n;)
	{
		res = va_arg(sep, char *);
		if (res != NULL)
		{
		printf("%s", res);
		x++;
		}
		else
			printf("(nil)");
		if (separator != NULL && x < n)
			printf("%s", separator);
		}
printf("\n");
va_end(sep);
}
