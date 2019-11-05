#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning .
 *@head:main one
 *@n: int
 * Return: listint_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{return (NULL); }
	(*NewNode).n = n;
	(*NewNode).next = *head;
	*head = NewNode;
	return (*head);
}
