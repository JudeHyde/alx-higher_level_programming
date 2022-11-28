#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * list - linked list
 *
 * Return: 0 if cycle, 1 if no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *var1, *var2;

	var1 = list;
	var2 = list;

	while (var1 && var2)
	{
		if (var2->next == NULL)
			return (0);
		var1 = var1->next;
		var1 = var2->next->next;
		if (var1 == var2)
			return (1);
	}

	return (0);
}
