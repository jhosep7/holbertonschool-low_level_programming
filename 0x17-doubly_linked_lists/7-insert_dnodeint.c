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
	dlistint_t *NewNode, *Temp1;
	unsigned int i;

	if (!h)
	{return (NULL); }
	if (idx == 0)
	{return (add_dnodeint(h, n)); }

	NewNode = malloc(sizeof(dlistint_t));
	if (!NewNode)
	{return (NULL); }
	NewNode->n = n;

	Temp1 = *h;
	for (i = 0; Temp1 && i < idx; i++)
	{Temp1 = Temp1->next; }
	if (!Temp1 && i == idx)
	{return (add_dnodeint_end(h, n)); }
	else if (Temp1)
	{
		Temp1->prev->next = NewNode;
		NewNode->prev = Temp1->prev;
		Temp1->prev = NewNode;
		NewNode->next = Temp1;
		return (NewNode);
	}
	return (NULL);
}
