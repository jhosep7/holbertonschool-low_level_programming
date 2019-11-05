#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at n position.
 *@head:string
 *@idx:index
 *@n:number
 * Return: listint_t.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NewNd, *OldNd, *Aux;
	unsigned int i;

	if (head == NULL)
	{return (NULL); }
	NewNd = malloc(sizeof(listint_t));
	if (NewNd == NULL)
	{return (NULL); }
	(*NewNd).n = n;
	(*NewNd).next = NULL;

	if (idx == 0)
	{
		(*NewNd).next = *head;
		*head = NewNd;
		return (NewNd);
	}
	OldNd = *head;
	Aux = (**head).next;
	for (i = 0; Aux != NULL; i++)
	{
		if (i == idx)
		{
			(*OldNd).next = NewNd;
			(*NewNd).next = Aux;
			return (NewNd);
		}
		OldNd = Aux;
		Aux = (*Aux).next;
	}
	if (Aux == NULL && i == idx)
	{
		(*OldNd).next = NewNd;
		return (NewNd);
	}
	free(NewNd);
	return (NULL);
}
