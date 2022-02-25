#include <stdio.h>
#include <stdlib.h>

/**
* main - argumentos
* @argc: argument
* @argv: puntero
* @x: variable para recorrer
* @f: variable para multiplicar
* Return: 0
*/
int main(int argc, char *argv[])
{
    int x = 0;
	int f = 1;

	if (argc < 2)
	{
		for (x = 1; x < argc; x++)
		{
			f *= atoi(argv[x]);
			printf("%d\n", f);
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}
