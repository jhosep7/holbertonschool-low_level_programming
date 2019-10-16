#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - concatenate arguments
 *@ac:int
 *@av:char
 *Return:char
 */
char *argstostr(int ac, char **av)
{
int i, j, val = 0, lenMalloc = 0;
char *arr;
if (ac < 1 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
lenMalloc++;
}
}
lenMalloc = lenMalloc + ac + 1;
arr = malloc(sizeof(char) * lenMalloc);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
arr[val++] = av[i][j];
}
arr[val++] = '\n';
}
arr[val] = '\0';
return (arr);
}
