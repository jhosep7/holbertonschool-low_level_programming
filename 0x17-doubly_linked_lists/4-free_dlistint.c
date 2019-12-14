#include "lists.h"
/**
 * free_dlistint - free a list.
 * @head: dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *Temp1;

	for (; head != NULL; )
	{
	        Temp1 = head->next;
		free(head);
		head = Temp1;
	}
}
