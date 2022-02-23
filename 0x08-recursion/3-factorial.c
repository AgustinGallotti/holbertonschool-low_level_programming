#include "main.h"

/**
* factorial - facotrization
* @n: variable
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
