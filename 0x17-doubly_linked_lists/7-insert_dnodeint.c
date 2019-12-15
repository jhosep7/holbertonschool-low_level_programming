#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given position.
 * @h:dlistint_t
 * @idx:unsigned int
 * @n:int
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NewNode, *Temp1, *Temp2;
	unsigned int i;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL || h == NULL)
	{return (NULL);	}
	NewNode->n = n, NewNode->next = NULL, NewNode->prev = NULL;
	Temp1 = *h;
	if (!idx)
	{
		NewNode->next = Temp1;
		if (Temp1)
		{Temp1->prev = NewNode; }
		return (NewNode);
	}
	Temp2 = (*h)->next;
	for (i = 0; Temp1 && i < (idx - 1); i++)
	{Temp1 = Temp1->next, Temp2 = Temp2->next; }
	if (Temp1 && Temp2)
	{
		NewNode->prev = Temp1, NewNode->next = Temp2;
		Temp2->prev = NewNode, Temp1->next = NewNode;
		return (NewNode);
	}
	else
	{
		NewNode->next = Temp1->next;
		NewNode->prev = Temp1;
		if (Temp1->next == NULL)
		{Temp1->next = NewNode; }
		else
		{Temp2->prev = NewNode, Temp1->next = NewNode; }
		return (NewNode);
	}
	return (NULL);
}
