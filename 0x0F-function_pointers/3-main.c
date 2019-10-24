#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - only main
 *@argc: int
 *@argv:char
 *Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*f)(int, int);
	char *OpSymbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	OpSymbol = argv[2];
	if (get_op_func(OpSymbol) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if ((*OpSymbol == '/' || *OpSymbol == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	printf("%d\n", (*f)(x, y));
	return (0);
}
