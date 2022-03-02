#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - largo
* _strup - copiar
* @str: str
* Return: freenewstring
*/
char *_strdup(char *str)
{	
	int a;
	char *strnew;
	
	if (!str)
		return (NULL);
	
	(strnew = malloc (strlen[strnew]) + 1)
	
	if (!newstring)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; str[a] != 0; a++)
		{
			 strnew[a] = str[a];
		}
		{
			strnew[a] = '\0';
		}
	return (strnew);
	}
}
