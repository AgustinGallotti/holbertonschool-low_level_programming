#include "main.h"
/**
*_strncpy - asd
*@dest: asd
*@src: asd
*@n: asd
*Return: asd
*
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (src[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = length; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
