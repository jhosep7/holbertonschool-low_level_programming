#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @n: const int
 * @head: dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode, *Temp;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
	{return(NULL); }
	NewNode->n = n;
	NewNode->next = NULL;
	if (*head == NULL)
	{
		NewNode->prev = NULL;
		*head = NewNode;
		return (NewNode);
	}
	Temp = *head;
	for (; Temp->next != NULL; )
	{
		Temp = Temp->next;
	}
	Temp->next = NewNode;
	NewNode->prev = Temp;
	return (NewNode);
}
