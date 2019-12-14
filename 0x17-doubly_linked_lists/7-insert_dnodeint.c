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
	if (idx == 0)
	{
		NewNode->next = Temp1;
		Temp1->prev = NewNode;
		*h = NewNode;
		return (NewNode);
	}
	Temp2 = (*h)->next;
	for (i = 0; Temp1 && i < (idx - 1); i++)
	{Temp1 = Temp1->next, Temp2 = Temp2->next; }
	if (Temp1->next == NULL)
	{Temp1->next = NULL; }
	else if (Temp1 != NULL)
	{
		NewNode->next = Temp2;
		Temp1->next = NewNode;
		Temp2->prev = NewNode;
		NewNode->prev = Temp1;
		return (NewNode);
	}
	else
	{Temp1->next = NewNode, Temp1->next = NewNode; }
	return (NULL);
}
