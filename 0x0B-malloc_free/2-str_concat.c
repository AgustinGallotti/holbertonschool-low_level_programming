#include "main.h"
#include <stdlib.h>

/**
* _strlen - el largo
* @str: string
* Return: 1
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
return (i);
}

/**
* str_concat - concatenar
* @s1: primer valor
* @s2: segundo valor
* Return: s3
*/
char *str_concat(char *s1, char *s2)
{
	int a, b, c, i;
	char *concate;

	if (!s1 == 0)
	{
		s1 = "";
	}
	if (!s2 == 0)
	{
		s2 = "";
	}
	
	a = _strlen (s1);
	b = _strlen (s2);
	c = a + b;

	concate = malloc(1 * (c + 1));

	if (!concate)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			concate[i] = s1[i];
		}
		for (i = 0 ; s2[i]; i++)
		{
			concate[i + a] = s2[i];
		}
	}
	return (concate);
}
