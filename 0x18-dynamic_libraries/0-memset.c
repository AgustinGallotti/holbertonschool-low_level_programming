#include "main.h"
/**
*_memset- asd
*@n: asd
*@b: asd
*@s: asd
*Return: asd
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
