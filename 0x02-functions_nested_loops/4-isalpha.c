#include "main.h"
#include <ctype.h>

/**
* _isalpha -a function that chekcs for upercase character
* @c: single letter input
* Return: 1 if int c is upercase, 0 if otherwise
*/
int _isaplha(int c)
{
if (c >= 65 && c <= 122)
return (1);

else
return (0);
}
