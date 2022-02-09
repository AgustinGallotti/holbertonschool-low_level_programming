#include "main.h"
#include <ctype.h>

/**
* _isdigit -a function that chekcs for number
* @c: single letter input
* Return: 1 if int c is number, 0 else number
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	return (1);

	else
	return (0);
}
