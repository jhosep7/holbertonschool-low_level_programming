#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - check the code for Holberton School students.
 * @b: UN int
 * Return: Always 0nothing.
 */
void *malloc_checked(unsigned int b)
{
int *MyAll;
MyAll = malloc(b);
if (MyAll == NULL || b == INT_MAX)
{
exit(98);
}
return (MyAll);
}
