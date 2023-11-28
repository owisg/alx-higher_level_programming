#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * check_cycle - checks for single linked lists
 * @list: pointer.
 * Return: 0 no cycle, 1 there is a cycle.
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list, *fast =list;
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}
