#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - rango de minimos a maximo
* @min: nuestro punto mas bajo
* @max: nuestro punto mas alto
* Return: a de un nuevo array
*/
int *array_range(int min, int max)
{
	int t;
	int b;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min) + 1 * sizeof(int));
		if (!a)
		return (NULL);
	for (t = min; t <= max; t++)
		a[b++] = t;
	return (a);
}
