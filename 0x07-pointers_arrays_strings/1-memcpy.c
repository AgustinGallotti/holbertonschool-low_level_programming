#include "main.h"

/**
 *_memcpy - copy n bytes from src to dest
 *@dest: destination
 *@src: source
 *@n: bytes to copy
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b = 0;

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
