#include "main.h"

/**
* _memcpy - copar punteros
* @dest: je
* @src: jee
* @n: jeje
* return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a, b;

	while (dest[a])
	{
		a++;
	}
	while (b < n && (src[b] != '\0'))
	{
		dest[b] = src[b];
		b++;
	}
	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
