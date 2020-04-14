#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches one by one
 * @array: int pointer
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{return (-1); }
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{return (i); }
	}
	return (-1);
}
