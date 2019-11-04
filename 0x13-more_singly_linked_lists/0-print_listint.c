#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 * @h:str
 * Return: size_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (node);
}
