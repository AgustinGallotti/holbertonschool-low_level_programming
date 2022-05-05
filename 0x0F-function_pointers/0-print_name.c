#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - printear el nombre
* @name: nombre
* @f: puntero
* return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
		f(name);
}
