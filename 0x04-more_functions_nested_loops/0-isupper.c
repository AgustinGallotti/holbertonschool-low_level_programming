#include "main.h"

/**
* _islower -a function that chekcs for lowercase character
* @c: single letter input
* Return: 1 if int c is lowercase, 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
		else
			return (0);
}
