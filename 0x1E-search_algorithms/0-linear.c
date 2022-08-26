#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - searche for a value in an array of integers usinglinearsearch
*
* @value: value of integers
*
* Return: NULL if not present or value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
