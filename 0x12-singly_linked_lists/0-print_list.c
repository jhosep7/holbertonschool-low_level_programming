#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		if ((*h).str == NULL)
		{printf("[0] (nil)\n"); }
		else
		{printf("[%d] %s\n", (*h).len, (*h).str); }
		h = (*h).next;
	}
	return (node);
}
