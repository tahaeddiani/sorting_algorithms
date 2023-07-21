#include "sort.h"
/**
* insertion_sort_list - insertion sort
* @list: list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *crrt;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
crrt = (*list)->next;
while (crrt != NULL)
{
listint_t *tmp = crrt->next;
listint_t *sd = crrt->prev;
while (sd && sd->n > crrt->n)
{
sd->next = crrt->next;
if (crrt->next)
crrt->next->prev = sd;
crrt->next = sd;
crrt->prev = sd->prev;
sd->prev = crrt;
if (crrt->prev)
crrt->prev->next = crrt;
else
*list = crrt;
sd = crrt->prev;
print_list(*list);
}
crrt = tmp;
}
}
