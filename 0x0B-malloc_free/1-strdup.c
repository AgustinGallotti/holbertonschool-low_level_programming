#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - lenght
* @str: str
* Return: aas
*/
int _strlen(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}

/**
* _strdup - copiar
* @str: strign
* Return: strnew
*/

char *_strdup(char *str)
{
	int a;
	char *strnew;

	if (!str)
	{
		return (NULL);
	}
	strnew = malloc(_strlen(str) + 1);
	if (strnew == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; str[a] != '\0'; a++)
		{
			strnew[a] = str[a];
		}
		strnew[a] = '\0';
	}
	return (strnew);
}
