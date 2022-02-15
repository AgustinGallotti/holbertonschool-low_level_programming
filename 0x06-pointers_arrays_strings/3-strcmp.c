#include "main.h"

/**
*_strcmp: comparar
* @s1: as
* @s2: sasdd
* Return: ass
*/

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);

	if (s1[x] != '\0')
		return (s1[x] - s2[x]);
	return (0);
}
