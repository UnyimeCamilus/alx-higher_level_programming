#include "lists.h"
/**
 * check_cycle - function that will check if a list has a circle
 * @list: will be used to get the linked list
 * Return : 0 if there is no circle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{	
	listint_t *fast, *slow;
		
	if (!list || !list->next)
		return (0);
	fast = list;
	slow = list;
	while(slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}	
	return (0);
}
