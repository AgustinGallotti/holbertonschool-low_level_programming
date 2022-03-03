#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - lenght
* @p: puntero
* Return: i
*/
int _strlen(char *p)
{
	int i = 0;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	return (i);
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
	char *r;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = malloc(_strlen(s1) + n + 1 * sizeof(*r));
	if (!r)
		return (NULL);
	for (a = 0; s1[a]; a++)
		r[a] = s1[a];
	for (b = 0; a < n && s2[b]; b++)
		r[a + b] = s2[b];
	r[a + b] = '\0';
	return (r);
}
