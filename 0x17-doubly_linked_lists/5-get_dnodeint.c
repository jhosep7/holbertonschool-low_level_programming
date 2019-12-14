#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list.
 * @index: unsigned int.
 * @head: dlistint_t.
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{return(NULL); }
	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
