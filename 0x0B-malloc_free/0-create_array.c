#include "main.h"
#include <stdlib.h>

/**
* create_array - to return ar de c
* @size: nuestro tamaño en bytes
* @c: nuestra variable para recorrer
* Return: Array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *pt;

	if (size == 0)
	{
		return (NULL);
	}
	pt = malloc(size * sizeof(*pt));
	if (pt == NULL)
	{
		return (NULL);
	}
	else
	for (a = 0; a < size; a++)
	{
		pt[a] = c;
	}
	return (pt);
}
