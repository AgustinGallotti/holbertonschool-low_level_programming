#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - chekeado
* @b: variable a medir
* Return: pun
*/
void *malloc_checked(unsigned int b)
{
	int *pun;

	pun = malloc(sizeof(b));
	if (!pun)
	{
		exit(98);
	}
	else
		return (pun);
}
