#include "main.h"
<<<<<<< HEAD

/**
* _strcat - function that concatenates two strings
* @dest: lenght
* @src: init
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int l, c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (l = 0; src[l] != '\0'; l++, c++)
	{
		dest[c] = src[l];
	}
	dest[c] = '\0';

=======
#include <stdio.h>

/**
*
* _strcat: dest and char
* 
* Return: hee
* @src: aa
* @dest: as
*/
char *_strcat (char *dest, char *src);

{
	int i, j;

		while (*dest [j] = '\0')
		{
			for (*str [i] != '\0')
				i++;
}
>>>>>>> 518ef39e1e40c6d3a28d120698a927ae42f72fb5
	return (dest);
}
