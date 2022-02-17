#include "main.h"

/**
* print_number - mix
* @n: as
* return: putchar
*/
void print_number(int)

	unsigned int dc, dig, nat = n;
	double x = 1;
	
	if (n == 0)
	{
		n < 0; n = nat * -1;
		_putchar('-');
	}
	while (x <= nat)
		x *= 10;
	dc = x / 10;

	while (dc >= 1)
	{
		dig = nat / dc;
		_putchar(dig + '0');
		nat = (nat - (dc * dig));
		dc /= 10;
