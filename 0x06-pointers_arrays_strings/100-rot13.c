#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *@a: pointer
 *Return: 1337
 */
char *rot13(char *a)
{
	char abc[] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZabcdefghijklmnñopqrstuvwxyz";
	char rot[] ="NOPQRSTUVWXYZabcdefghijklmopqrstuvwxyzABCDEFGHIJKLM";
	int x;
	int z;

	for (x = 0; a[x] != '\0'; x++)
	{
		for (z = 0; z < 6; z++)
		{
			if (a[x] == abc[z])
			{
				abc[x] = rot[z];
				break;
			}
		}
	}
return (a);
}
