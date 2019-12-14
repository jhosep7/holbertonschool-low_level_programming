#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @n: const int
 * @head: dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
	{return(NULL); }

	NewNode->n = n;
	NewNode->next = *head;
	NewNode->prev = NULL;

	if (*head)
	{(*head)->prev = NewNode; }
	*head = NewNode;
	return (NewNode);
}
