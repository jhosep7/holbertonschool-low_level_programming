#include "holberton.h"
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
  int *arr = (int *)malloc(height * width * sizeof(int));

  int i, j, count = 0;
  for (i = 0; i < height; i++)
    {
      for (j = 0; j < width; j++)
	{
	 *(arr + i * width + j) = ++count;
	}
    }
  for (i = 0; i < height; i++)
    {
      for (j = 0; j < width; j++)
	{
	   *(arr + i * width + j);
	}
    }
  return (arr);
}
