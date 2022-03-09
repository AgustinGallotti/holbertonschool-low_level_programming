#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - printear integrales
*@array: nuestro array
*@size: tamaño en bytes
*@action: puntero para acceder
* Return: array de i
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action (array[i]);
}
