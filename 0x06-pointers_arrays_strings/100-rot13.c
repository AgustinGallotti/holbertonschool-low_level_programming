#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *@a: pointer
 *Return: 1337
 */
char *rot13(char *a)
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] ="NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM";
	int x;
	int z;

	for (x = 0; abc[x] != '\0'; x++)
	{
		for (z = 0; abc[z] != '\0'; z++)
		{
			if (a[x] == abc[z])
			{
				a[x] = rot[z];
				break;
			}
		}
	}
return (abc);
}
