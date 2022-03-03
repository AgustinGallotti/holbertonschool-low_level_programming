#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *malloc_checked - chekeado
* @b: variable a medir
* Return: b
*/
void *malloc_checked(unsigned int b)
{
	int *pun;

	pun = malloc(b * sizeof(int *));
	if (!pun)
	{
		exit(98);
	}
	else
		return (pun);
}
