#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position
 * @h: pointer to the head node
 * @idx: index of the list where the new node should be add
 * @n: n int value of the new node
 * Return: address of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int indexOfCurrentNode = 0;
	dlistint_t *newData, *current;

	newData = malloc(sizeof(dlistint_t));
	if (newData == NULL)
		return (NULL);
	newData->n = n;
	newData->next = NULL;
	newData->prev = NULL;

	current = *h;
	while (current && indexOfCurrentNode < idx)
	{
		current = current->next;
		indexOfCurrentNode++;
	}

	if (indexOfCurrentNode == idx)
	{	
		if (current != NULL)
		{
			if (current->prev != NULL)
				(current->prev)->next = newData;
			newData->prev = current->prev;
		}
		newData->next = current;
		if (current != NULL)
			(current->prev) = newData;
	}

	return (newData);

}
