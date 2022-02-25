#include <stdio.h>
#include <stdlib.h>

/**
* main - argumentos
* @argc: argument
* @argv: puntero
* @x: variable para recorrer
* @s: variable para guardar mult
* Return: 0
*/
int main(int argc, char *argv[])
{
    int x = 0;
	int s = 1;

    if (argc <= 1)
	{
		for (x = 1; x <= argc; x++)
        {
            s += atoi(argv[x]);
		}
			printf("%d\n", s);
		return (0);
	}
    else
	{
		printf("Error\n");
	}
    return (1);
}
