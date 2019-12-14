#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{return (0); }
	for (; head; )
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
