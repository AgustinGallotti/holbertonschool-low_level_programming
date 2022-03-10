#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *main - main function
 *@argc: argument count: contains the number of arguments passed to the program
 *@argv: argument vector: a one-dimensional array of strings. Each string is
 *one of the arguments that was passed to the program.
 *Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, resu;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = get_op_func(argv[2]);

	if (!(oper) || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
		(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	resu = oper(num1, num2);

	printf("%d\n", resu);

	return (0);

}
