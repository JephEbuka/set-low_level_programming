#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list (handles loops)
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *checker;
	size_t count = 0;

	while (current != NULL)
	{
		checker = head;
		while (checker != current)
		{
			if (checker == current->next)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				printf("-> [%p] %d\n",
					(void *)current->next, current->next->n);
				return (count + 1);
			}
			checker = checker->next;
		}

		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	return (count);
}
