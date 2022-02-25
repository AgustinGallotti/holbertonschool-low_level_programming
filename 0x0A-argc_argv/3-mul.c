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
    int x = 1;
	int f = 1;

	if (argc > 2)
	{
		for (x = 1; x < argc; x++)
		{
			f = f * atoi(argv[x]);
		}
			printf("%d\n", f);
			return (0);
	}
	printf("Error\n");
	return (1);
}
