#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - arg
 *@argc:int
 *@argv:char
 *Return: int
 */

int main(int argc, char *argv[])
{
int i, sum;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
sum = sum + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", sum);
return (0);
}
