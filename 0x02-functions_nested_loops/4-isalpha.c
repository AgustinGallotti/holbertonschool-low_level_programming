#include "main.h"
#include <ctype.h>

/**
* _isalpha - check if its uppercase or not
* @c: fe
* Return: 1 if its upercase, 0 if otherwise
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);

else
return (0);
}
