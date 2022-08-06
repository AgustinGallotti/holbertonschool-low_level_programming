#include "main.h"
/**
*_strstr- asd
*@haystack: asd
*@needle: asd
*Return: asd
**/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int length = 0;

	while (needle[length] != '\0')
		length++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != length)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');

}
