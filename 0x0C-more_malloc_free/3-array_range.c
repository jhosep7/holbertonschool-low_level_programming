#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: int.
 */
int *array_range(int min, int max)
{
int *Arr, i;
int SumLen;
if (min > max)
{
return (NULL);
}
SumLen = max - min;
Arr = malloc(sizeof(int) * (SumLen + 1));
if (Arr == NULL)
{
return (NULL);
}
for (i = 0; i <= SumLen; i++)
{
Arr[i] = min++;
}
return (Arr);
}
