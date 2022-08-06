#include "main.h"
/**
*_strncat - asd
*@dest: asd
*@src: asd
*@n: asd
*Return: asd
*
**/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++] != '\0')
		length++;

	for (i = 0; i < n && src[i] != '\0'; i++, length++)
		dest[length] = src[i];

	return (dest);
}
