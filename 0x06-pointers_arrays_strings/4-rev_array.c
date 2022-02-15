#include "main.h"

/**
* reverse_array - pa tras
* x: jejee
* y: jeje
* @a: asj
* @n: asd
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int x;
	char y;

	while (a[n] != '\0')
	{
		n++;
		y++;
	}
	for (x = n - 1; x >= n / 2; x--)
	{
		y++;
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
	for (x = n; x < 0; x++)
	{
		x++;
		a[x] = a[n + x + 1];
	}
}
