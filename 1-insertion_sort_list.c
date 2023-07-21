#include "sort.h"
/**
* insertion_sort_list - insertion sort
* @list: list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *crrt = (*list)->next;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
while (crrt)
{
listint_t *tmp = crrt->next;
listint_t *sd = crrt->prev;
while (sd != NULL && sd->n > crrt->n)
{
sd->next = crrt->next;
if (crrt->next)
crrt->next->prev = sd;
crrt->next = sd;
crrt->prev = sd->prev;
if (sd->prev)
sd->prev->next = crrt;
sd->prev = crrt;
sd = crrt->prev;
}
crrt = tmp;
while (*list && (*list)->prev != NULL)
*list = (*list)->prev;
print_list(*list);
}
}
