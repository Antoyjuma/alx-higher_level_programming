#include "lists.h"
/**
 * check_cycle - checks if there is a cycle
 * @lists: linked list to check
 *
 * Return 1 || 0
 */
int check_cycle(listint_t *list)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	temp1 = list;
	temp2 = list;

	while (list)
	{
		temp2 = temp2->next;
		if (!temp1 || !temp2)
			return (0);
		if (temp2 == temp1)
			return (1);
	}
	return (0);
}
