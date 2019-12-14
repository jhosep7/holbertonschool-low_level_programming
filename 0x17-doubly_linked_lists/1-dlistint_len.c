#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked.
 * @h: const dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
