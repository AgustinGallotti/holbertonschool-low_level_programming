#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _memset -  a function that fills memory with a constant byte
* @s: pointer
* @b: constant
* @n: n times
* Return: pointer to the memory area
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
/**
* _calloc - call
* @nmemb: numero de elementos
* @size: tamaño
* Return: ar
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	ar = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!ar)
		return (NULL);
	if (ar)
		_memset(ar, 0, size * nmemb);
	return (ar);
}
