#include <stdio.h>
#include <stdlib.h>

/**
* main - argumentos
* @argc: argument
* @argv: puntero
* Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y, s = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; y < (int)strlen(argv[x]); y++)
		{
			if (argv[x][y] >= 48 && argv[x][y] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	s += atoi(argv[x]);
	}
	printf("%d\n", s);
	return (0);
}
