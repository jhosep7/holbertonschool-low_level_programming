#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: list
 * @index: unsigned int
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *Temp;
	unsigned int i;

	if (!head || !(*head))
	{return (-1); }
	if (index == 0)
	{
		Temp = *head;
		*head = Temp->next;
		if(*head)
		{(*head)->prev = NULL; }
		free(Temp);
		return (1);
	}
	Temp = *head;
	for (i = 0; Temp && i < index; i++)
	{Temp = Temp->next; }
	if (!Temp)
	{return (-1); }
	Temp->prev->next = Temp->next;
	if (Temp->next)
	{Temp->next->prev = Temp->prev; }
	free(Temp);
	return (1);
}
