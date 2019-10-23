#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * @array: the integer to print
 * @size:size_t
 * @action: pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)
	{
	for (unsigned int i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
