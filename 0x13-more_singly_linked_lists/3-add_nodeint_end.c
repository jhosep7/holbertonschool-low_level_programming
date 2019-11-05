#include "lists.h"
/**
 * add_nodeint_end -adds a new node at the end.
 *@head:main one
 *@n: int
 * Return:listint_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode, *CurrentNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{return (NULL);	}
	(*NewNode).n = n;
	(*NewNode).next = NULL;
	if (*head == NULL)
	{*head = NewNode; }
	else if	((**head).next == NULL)
	{
		(**head).next = NewNode;
	}
	else
	{
		CurrentNode = *head;
		while ((*CurrentNode).next != NULL)
		{CurrentNode = (*CurrentNode).next; }
		(*CurrentNode).next = NewNode;
	}
	return (NewNode);
}
