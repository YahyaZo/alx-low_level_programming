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
	listint_t *current, *temp;
	listint_t *loop_start = *h;

	if (h == NULL || *h == NULL)
		return  (0);

	while (*h != NULL)
	{
		;
		current = *h;
		*h = (*h)->next;

		if (current == loop_start)
		{
			free(current);
			*h = NULL;
			break;
		}

		free(current);
	}

	return (size);
}
