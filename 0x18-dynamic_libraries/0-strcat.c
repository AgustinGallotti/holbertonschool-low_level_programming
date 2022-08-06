#include "main.h"
/**
*_strcat- asd
*@dest: asd
*@src: asd
*Return: asd
**/
char *_strcat(char *dest, char *src)
{
	int i, length = 0;

	while (dest[length] != '\0')
		length++;

	for (i = 0; src[i] != '\0'; i++, length++)
		dest[length] = src[i];

	return (dest);
}
