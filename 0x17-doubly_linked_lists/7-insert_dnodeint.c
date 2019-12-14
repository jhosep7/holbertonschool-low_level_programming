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

	if (*h == NULL)
	{
		NewNode->prev = NULL;
		*h = NewNode;
		return (NewNode);
	}
/*	if (NewNode->n < (*h)->n)
	{
		NewNode->next = *h;
		NewNode->prev = NULL;
		(*h)->prev = NewNode;
		*h = NewNode
	}
*/	Temp1 = *h;
	Temp2 = (*h)->next;
	for (i = 0; Temp1 && i < (idx - 1); i++)
	{
		Temp1 = Temp1->next;
		Temp2 = Temp2->next;
	}
	if (NewNode->n > (*h)->n && (*h)->next != NULL)
	{
		NewNode->next = Temp2;
		Temp1->next =NewNode;
		Temp2->prev = NewNode;
		NewNode->prev = Temp1;
	}
	else
	{
		NewNode->next = Temp1->next;
		NewNode->prev = Temp1;
		NewNode->next = NULL;
	}
	return (*h);
}
