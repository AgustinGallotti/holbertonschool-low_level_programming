-Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcatinclude "main.h"
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

	pun = malloc(sizeof(b));
	if (!pun)
	{
		exit(98);
	}
	else
		return (pun);
}
