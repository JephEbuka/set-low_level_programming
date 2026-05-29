#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list (handles loops)
 * @h: address of pointer to the head of the list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *tmp;
	listint_t *checker;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		checker = *h;
		while (checker != current)
		{
			if (checker == current->next)
			{
				free(current);
				count++;
				*h = NULL;
				return (count);
			}
			checker = checker->next;
		}
		tmp = current->next;
		free(current);
		current = tmp;
		count++;
	}

	*h = NULL;
	return (count);
}
