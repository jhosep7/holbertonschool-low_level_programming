#include "lists.h"
/**
 * sum_listint - returns the sum of all the data.
 * @head:Node str
 * Return: int.
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	if (head == NULL)
	{return (0); }
	while (head != NULL)
	{
		suma += (*head).n;
		head = (*head).next;
	}
	return (suma);
}
