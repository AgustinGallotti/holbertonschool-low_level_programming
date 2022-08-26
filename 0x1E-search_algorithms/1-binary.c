#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - search for a value in a sorted array of integers
* @value: value in the array sorted
*
* Return: values
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, hig = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (low <= hig)
	{
	printf("Searching in array: ");
		BSH(array, hig, low);
		mid = (low + hig) / 2;
		if (array[mid] == value)
			return (mid);
	if (array[mid] > value)
		hig = mid - 1;
	else
		low = mid + 1;
	}
	return (-1);
}
/**
* BSH - print the bin
* @array: pointer
* @hig: right index
* @low: left index
*/
void BSH(int *array, size_t hig, size_t low)
{
	size_t i;

	for (i = low; i <= hig; i++)
	{
		if (i != hig)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
