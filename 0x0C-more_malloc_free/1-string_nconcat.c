#include "main.h"
#include <stdlib.h>
/**
* _strlen - calculate the lenght
* @p: string
* Return: string
*/
int _strlen(char *p)
{
	int a = 0;

	while (*p != '\0')
	{
		a++;
		p++;
	}
	return (a);
}
/**
* string_nconcat - a function that concatenates two strings
* @s1: jd
* @s2: dj
* @n: variable unsigned
* Return: result
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
	for (b = 0; b < n && s2[b]; b++)
		r[a + b] = s2[b];
	r[a + b] = '\0';
	return (r);
}
