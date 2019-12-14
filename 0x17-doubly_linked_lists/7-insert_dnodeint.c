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
	if (NewNode == NULL)
	{return (NULL);	}
	NewNode->n = n;
	NewNode->next = NULL;
	if (h == NULL)
	{return (NULL); }
	Temp1 = *h;
	if (!idx)
	{
		return (add_dnodeint(h, n));
/*		NewNode->prev = NULL;
		NewNode->next = Temp1;
		if (Temp1)
		{Temp1->prev = NewNode; }
		return (*h = NewNode);
*/	}

	Temp2 = (*h)->next;
	for (i = 0; Temp1 && i < (idx - 1); i++)
	{Temp1 = Temp1->next, Temp2 = Temp2->next; }

	if (!Temp1 && i == idx)
	{return (add_dnodeint_end(h, n)); }

	else if (Temp1)
	{
		NewNode->next = Temp2;
		Temp1->next = NewNode;
		Temp2->prev = NewNode;
		NewNode->prev = Temp1;
		return (NewNode);
	}
	else
//	{Temp1->next = NewNode, Temp1->next = NewNode; }
	return (free(NewNode), NULL);
}
