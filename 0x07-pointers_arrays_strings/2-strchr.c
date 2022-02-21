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
		while (*s)
		{
			if (*s != c)
				s++;
				else
					return (s);
		}
		if (c == '\0')
			reutrn (s);
		return (0);
}
