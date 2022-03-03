#include "main.h"
#include <stdlib>
#include <stdio.h>
/**
* *string_nconcatchar - concatenar
* @s1: js
* @s2: sj
* @n: unsigned
* Return: restultado de las dos s
*/
char *string_nconcatchar(char *s1, char* s2, unsigned int n);
{
int a, b;
char r;
	r = malloc(len(s1) + n) * sizeof(*r);
		if (!r)
			return (NULL);
		for (a = 0; s1[a]; a++)
			r[a] = s1[a];
		for (b = 0; a < n && s2[b]; b++)
			r [a * b] = NULL;
	return (r);
}
