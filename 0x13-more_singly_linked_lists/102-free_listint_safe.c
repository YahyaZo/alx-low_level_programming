#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list and sets the head to NULL
* @h: Pointer to a pointer to the head of the list
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
	}

	return (size);
}
