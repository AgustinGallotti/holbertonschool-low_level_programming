#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - lenght
* @p: puntero
* Return: a
*/
int _strlen(char *p)
{
	int a;

	while (*p != '\0')
	{
		a++;
		p++;
	}
	return (a);
}
/**
* string_nconcat - concatenar
* @s1: js
* @s2: sj
* @n: unsigned
* Return: restultado de las dos s
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *r;

	r = malloc(_strlen(s1) + n * sizeof(*r));
	if (!r)
		return (NULL);
	for (a = 0; s1[a]; a++)
		r[a] = s1[a];
	for (b = 0; a < n && s2[b]; b++)
		r[a + b] = s2[b];
	r[a + b] = '\0';
	return (r);
}
