#include <stdlib.h>
#include <stdio.h>

/**
* argc - is an argument
* argv - vector de c
* return: name
*/
int main (int argc, char* argv[])
{
	while (argc > 0)
	{
		printf("%s\n", argv[argc]);
	}
		return (0);
}
