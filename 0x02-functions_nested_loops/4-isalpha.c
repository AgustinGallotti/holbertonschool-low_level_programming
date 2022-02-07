#include "main.h"
#include <ctype.h>

/**
* _islower -a function that chekcs for lowercase character
* @c: single letter input
* Return: 1 if int c is lowercase, 0 if otherwise
*/
int _isaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
