#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * Search - searches dividing all
 * @array: int pointer
 * @init: size_t
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int Search(int *array, size_t init, size_t size, int value)
{
	size_t i, middle;
	char *comma;

	if (init >= size)
	{return (-1); }
	middle = init + (size - init - 1) / 2;
	printf("Searching in array:");
	comma = " ";
	for (i = init; i < size; i++)
	{printf("%s%d", comma, array[i]), comma = ", ";	}
	printf("\n");
	if (array[middle] == value)
	{return (middle); }
	if (array[middle] > value)
	{return (Search(array, init, middle, value)); }
	return (Search(array, middle + 1, size, value));
}

/**
 * binary_search - searches dividing all
 * @array: int pointer
 * @size: size_t
 * @value: int
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{return (-1); }
	return (Search(array, 0, size, value));
}
