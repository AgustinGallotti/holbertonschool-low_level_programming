#include "main.h"

/**
* _memset - unsigned
* @s: jeje
* @b: jejee
* @n: jejeje
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n;)
	{
		s[a] = b;
		a++;
	}
return (s);
}
