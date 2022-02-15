#include "main.h"

/**
* _strncat - function that concatenates two strings
* @dest: lenght
* @src: init
* @n: jh
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while(b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
