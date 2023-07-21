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
listint_t *tmp = crrt;
while (tmp->prev != NULL && tmp->n < tmp->prev->n)
{
listint_t *prev = tmp->prev;
listint_t *next = tmp->next;
if (prev->prev)
prev->prev->next = tmp;
else
*list = tmp;
if (tmp->next)
tmp->next->prev = prev;
tmp->prev = prev->prev;
tmp->next = prev;
prev->prev = tmp;
prev->next = next;
print_list(*list);
}
crrt =crrt->next;
}
}
