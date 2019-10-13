#include <stdio.h>
#include <stdlib.h>
/**
 *main - arg
 *@argc:int
 *@argv:char
 *Return: int
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
