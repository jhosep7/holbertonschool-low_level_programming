#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

/**
 * jump_search - jump search
 * @array: int
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i;

	if (!array || size == 0)
	{return (-1); }
	i = 0;
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev, prev += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);
	prev = prev < size - 1 ? prev : size - 1;
	while (i < prev && array[i] < value)
	{printf("Value checked array[%ld] = [%d]\n", i, array[i]), i++;	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
