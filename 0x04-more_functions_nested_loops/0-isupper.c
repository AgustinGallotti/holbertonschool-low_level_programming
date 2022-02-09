#include "main.h"
#include <ctype.h>

/**
* _isupper -a function that chekcs for upper character
* @c: single letter input
* Return: 1 if int c is upper, 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
		
	else
	return (0);
}
