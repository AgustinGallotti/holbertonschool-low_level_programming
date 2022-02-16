#include "main.h"

/**
* string_toupper - changes
* @t: puntero
* Return: el contenido
*/
char *string_toupper(char *t)
{
	int x = 0;

	while (t[x] != '\0')
	{
		x++;
	}
	if (t[x] >= 97 && t[x] <= 122)
	{
		t[x] -= 32;
	}
	return (t);
}
