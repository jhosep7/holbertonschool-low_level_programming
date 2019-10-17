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

  if (min > max)
    {
      return (NULL);
    }
  Arr = malloc (sizeof(int) * (max - min + 1));
  if (Arr == NULL)
    {
      return (NULL);
    }
  for (i = 0; min <= max; i++)
    {
      Arr[i] = min;
      min++;
    }
  Arr[i] = '\0';
  return (Arr);
}
