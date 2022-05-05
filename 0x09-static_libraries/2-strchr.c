#include "main.h"

/**
*_strchr- asd
*@c: asd
*@s: asd
*Return: asd
**/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
