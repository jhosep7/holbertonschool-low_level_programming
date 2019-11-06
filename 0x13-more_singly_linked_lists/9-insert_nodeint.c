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
	listint_t *NewNd, *Aux;
	unsigned int i;

	NewNd = malloc(sizeof(listint_t));
	if (head == NULL || NewNd == NULL)
	{return (NULL); }
	(*NewNd).n = n;
	(*NewNd).next = NULL;
	if (!idx)
	{
		(*NewNd).next = *head;
		*head = NewNd;
		return (NewNd);
	}
	Aux = *head;
	while (Aux)
	{
		if (i == idx - 1)
		{
			(*NewNd).next = (*Aux).next;
			(*Aux).next = NewNd;
			return (NewNd);
		}
		i++;
		Aux = (*Aux).next;
	}
	free(NewNd);
	return (NULL);
}
