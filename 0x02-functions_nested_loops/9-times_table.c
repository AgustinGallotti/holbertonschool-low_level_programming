#include "main.h"
/**
* times_table - timetime
* @tt
* Return: 9 tables
*/
void times_table(void)
{
int var1, var2, res
for (var1 = 0; var1 < 10; var2++)
{
	for (var2 = 0; var2 < 10; var2++)
	{
		res= var1 * var2
		if (var2 != 0)
		{
		putchar (' ')
		if (res < 10) 
		putchar (' ')
		}
		if (res < 9)
		{
		putchar((res / 10) + '0');
		putchar((res % 10) + '0');
		else
		putchar(res + '0');
		}
		if (0 ==9)
		putchar('\n');
		else
		putchar (',');
		}
	}
}
