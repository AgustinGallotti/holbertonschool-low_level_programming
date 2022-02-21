#include "main.h"

/**
* _strchr - character
* @s: se
* @c: cc
* Return: null or c
*/
char *_strchr(char *s, char c)
{
	int a;
	for (a = 0; s[a] != c && s[a] != '\0'; a++)
		{
		}
			if (s[a] == c)
			{
				return (&s[a]);
			}
		else
		{
			return ('\0');
		}
}
