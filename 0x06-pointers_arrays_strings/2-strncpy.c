#include "main.h"

/**
* _strncpy: copiar
* @dest: jasnd
* @src: jasnd
* @n: asj
*/
char *_strncpy(char *dest, char *src, int n)

	int b;

	while (b < n)
	{
		dest[n] = src[b];
	}
	return (dest)n;
