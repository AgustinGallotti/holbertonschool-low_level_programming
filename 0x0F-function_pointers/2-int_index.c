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
	int x = 0;

	if (size <= 0)
		return (-1);
	if (!cmp || !array[x])
		return (-1);
	else

	for (a = 0; a < array[x]; a++)
	{
	return (cmp(array[x]);
	}
return (i);
}
