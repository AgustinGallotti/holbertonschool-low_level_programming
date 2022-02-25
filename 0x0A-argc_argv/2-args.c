#include <stdio.h>

/**
* main - argumentos
* @argc: argument
* @argv: puntero
* @h: variable para recorrer
* Return: 0
*/
int main(int argc, char *argv[])
{
	int h = 0;

	for (;h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}
	return (0);
} 
