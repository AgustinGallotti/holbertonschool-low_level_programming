#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
*
*
*
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (size != array)
		return (-1);
	if (!cmp)
		return (-1);
	for (a = 0; a < size; a++)
}
