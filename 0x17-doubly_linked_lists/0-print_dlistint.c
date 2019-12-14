#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list..
 * @h: const dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
       	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return(i);
}
